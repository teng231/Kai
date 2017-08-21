#include "imagerecognition.h"
#include <QDebug>
#include <iostream>
#include <vector>
#include <string>
// hold labels -> training filenames
std::vector<int> labels;

std::vector<std::string> trainingFilenames;


ImageRecognition::ImageRecognition()
{
    svm = cv::ml::StatModel::load<cv::ml::SVM>(main);//svm2
    svm2 = cv::ml::StatModel::load<cv::ml::SVM>(start);//svm2
}

/// Lấy dữ liệu cho việc train
void ImageRecognition::getTrain(QString dir)
{
    QDir recoredDir(dir);
    QStringList allFiles = recoredDir.entryList(QDir::NoDotAndDotDot | QDir::System | QDir::Hidden  | QDir::AllDirs | QDir::Files, QDir::DirsFirst);//(QDir::Filter::Files,QDir::SortFlag::NoSort)
    int key=0;
    vector<string> labels2;
    if(allFiles[0]==".DS_Store") allFiles.removeFirst();
    for(int i=0;i<allFiles.size();i++) {
      trainingFilenames.push_back(allFiles[i].toStdString());
      labels2.push_back(allFiles[i].left(2).toStdString());
    }

    for(int index=0; index<labels2.size(); index++)
    {
        labels.push_back(key);
        if(labels2[index+1]!=labels2[index])
            key++;
    }
}


/// tiến hànhtrain
///
int ImageRecognition::train(QString dir,string fileSave,int imgArea= 24*40)
{
    getTrain(QString(PATH)+dir);

    cv::Mat trainingMat(labels.size(), imgArea, CV_32FC1);

    // loop over training files
    for(int index=0; index<trainingFilenames.size(); index++)
    {
        // output on which file we are training
        std::cout << "Analyzing label -> file: " <<  labels[index] << "|" <<  trainingFilenames[index] << std::endl;

        // read image file (grayscale)
        cv::Mat imgMat = cv::imread(string(PATH)+dir.toStdString() +"/"+trainingFilenames[index], 0);

        int ii = 0; // Current column in training_mat

        // process individual pixels and add to our training material
        for (int i = 0; i<imgMat.rows; i++) {
           for (int j = 0; j < imgMat.cols; j++) {
                trainingMat.at<float>(index, ii++) = imgMat.at<uchar>(i,j);
            }
        }
    }


    int labelsArray[labels.size()];

    // loop over labels
    for(int index=0; index<labels.size(); index++)
    {
        labelsArray[index] = labels[index];
    }


    cv::Mat labelsMat(labels.size(), 1, CV_32S, labelsArray);

    //
    // train SVM

    // Set up SVM's parameters
    cv::Ptr<cv::ml::SVM> svm = cv::ml::SVM::create();
    svm->setType(cv::ml::SVM::C_SVC);
    svm->setKernel(cv::ml::SVM::POLY);
    svm->setTermCriteria(cv::TermCriteria(cv::TermCriteria::MAX_ITER, 100, 1e-6));
    svm->setGamma(3);
    svm->setDegree(3);

    // train svm classifier
    std::cout << "Start training SVM classifier" << std::endl;
    svm->train( trainingMat , cv::ml::ROW_SAMPLE , labelsMat );

    // store trained classifier
    std::cout << "Saving SVM data" << std::endl;
    svm->save(fileSave);// lưu tại chương trình.
//    Lưu tai lõi dev
    svm->save(string(PATH)+fileSave);
    return labels.size();
}

/// load dữ liệu train

string ImageRecognition::loadTrain(string name)
{
    try{
        // Load SVM classifier
        // read image file (grayscale)
        cv::Mat imgMat = cv::imread(QDir::currentPath().toStdString()+name,0);
        resize(imgMat,imgMat,Size(24,40));
        // convert 2d to 1d

        cv::Mat testMat = imgMat.clone().reshape(1,1);
        testMat.convertTo(testMat, CV_32F);

        // try to predict which number has been drawn

            num = svm->predict(testMat);

//            std::cout << std::endl  << "Recognizing following number -> " << getResult() << std::endl << std::endl;

            return getResult();

        }catch(cv::Exception ex){
            return "~~";
    }
}

int ImageRecognition::loadTrainStart(QImage src)
{
    try{
      cv::Mat imgMat=QImageToCvMat(src);
      cv::cvtColor(imgMat, imgMat, CV_BGR2GRAY);
      resize(imgMat,imgMat,Size(70,20));
      // convert 2d to 1d
      cv::Mat testMat = imgMat.clone().reshape(1,1);
      testMat.convertTo(testMat, CV_32F);

      // try to predict which number has been drawn

          return num = svm2->predict(testMat);

  //            std::cout << std::endl  << "Recognizing following number -> " << getResult() << std::endl << std::endl;

    }catch(cv::Exception ex){
          return -1;
  }
}

string ImageRecognition::loadTrain(QImage src)
{
      try{
        cv::Mat imgMat=QImageToCvMat(src);
        cv::cvtColor(imgMat, imgMat, CV_BGR2GRAY);
        resize(imgMat,imgMat,Size(24,40));
        // convert 2d to 1d
        cv::Mat testMat = imgMat.clone().reshape(1,1);
        testMat.convertTo(testMat, CV_32F);

        // try to predict which number has been drawn

            num = svm->predict(testMat);

    //            std::cout << std::endl  << "Recognizing following number -> " << getResult() << std::endl << std::endl;
        return getResult();

      }catch(cv::Exception ex){
            return "~~";
    }
}

string ImageRecognition::getResult()
{
    switch(num){
       case 0:return "0b";
        case 1:return "0c";
        case 2:return "0r";
        case 3:return "0t";

    case 4:return "2b";
     case 5:return "2c";
     case 6:return "2r";
     case 7:return "2t";

    case 8:return "3b";
     case 9:return "3c";
     case 10:return "3r";
     case 11:return "3t";

    case 12:return "4b";
     case 13:return "4c";
     case 14:return "4r";
     case 15:return "4t";

    case 16:return "5b";
     case 17:return "5c";
     case 18:return "5r";
     case 19:return "5t";

    case 20:return "6b";
     case 21:return "6c";
     case 22:return "6r";
     case 23:return "6t";

    case 24:return "7b";
     case 25:return "7c";
     case 26:return "7r";
     case 27:return "7t";

    case 28:return "8b";
     case 29:return "8c";
     case 30:return "8r";
     case 31:return "8t";

    case 32:return "9b";
     case 33:return "9c";
     case 34:return "9r";
     case 35:return "9t";

    case 36:return "ab";
     case 37:return "ac";
     case 38:return "ar";
     case 39:return "at";

    case 40:return "jb";
     case 41:return "jc";
     case 42:return "jr";
     case 43:return "jt";

    case 44:return "kb";
     case 45:return "kc";
     case 46:return "kr";
     case 47:return "kt";

    case 48:return "qb";
     case 49:return "qc";
     case 50:return "qr";
     case 51:return "qt";
    default: return "undefined";
    }
}

Mat ImageRecognition::QImageToCvMat(QImage inImage)
{
    switch ( inImage.format() )
          {
             // 8-bit, 4 channel
             case QImage::Format_ARGB32:
             case QImage::Format_ARGB32_Premultiplied://is
            case QImage::Format_RGB32:
            case QImage::Format_RGBX8888:
           case QImage::Format_RGBA8888:
            case QImage::Format_RGBA8888_Premultiplied:
             {
                cv::Mat  mat( inImage.height(), inImage.width(),
                              CV_8UC4,
                              const_cast<uchar*>(inImage.bits()),
                              static_cast<size_t>(inImage.bytesPerLine())
                              );
                return mat;
             }

             // 8-bit, 3 channel

             case QImage::Format_RGB888:
             {

                QImage   swapped = inImage;
                swapped = swapped.rgbSwapped();
                qDebug()<<2;
                return cv::Mat( swapped.height(), swapped.width(),
                                CV_8UC3,
                                const_cast<uchar*>(swapped.bits()),
                                static_cast<size_t>(swapped.bytesPerLine())
                                ).clone();
                }

             // 8-bit, 1 channel
             case QImage::Format_Indexed8:
            case QImage::Format_Alpha8:
            case QImage::Format_Grayscale8:
             {
                cv::Mat  mat( inImage.height(), inImage.width(),
                              CV_8UC1,
                              const_cast<uchar*>(inImage.bits()),
                              static_cast<size_t>(inImage.bytesPerLine())
                              );
                return mat;
             }
             default:
                qWarning() << "ASM::QImageToCvMat() - QImage format not handled in switch:" << inImage.format();
                break;
          }

    return cv::Mat();
}


