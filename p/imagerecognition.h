#ifndef IMAGERECOGNITION_H
#define IMAGERECOGNITION_H

#include "opencv2/opencv.hpp"
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/ml/ml.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include "opencv2/imgcodecs.hpp"


#include <string>
#include <QString>
#include <QDir>
#include <QImage>

#define NUMBER "number.yml"
#define CLASSIFIER "classifier.yml"
#define PATH "/Users/Te.Nguyen/Code/Kai/p/"

using namespace std;
using namespace cv;
using namespace cv::ml;

class ImageRecognition{
    public:class
        cv::Ptr<cv::ml::SVM> svm,svm2;
        string main="classifier.yml";
        string start="start.yml";
        int num;
        ImageRecognition();
        static void getTrain(QString);
        int train(QString dir,string saveFile,int area);
        string loadTrain(string);

        int loadTrainStart(QImage src);

        string loadTrain(QImage src);
        string getResult();
        cv::Mat QImageToCvMat(QImage);
};

#endif // IMAGERECOGNITION_H

