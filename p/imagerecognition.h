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
#include <QDebug>
#include <iostream>
#include <vector>


#define TYPE_CLASSIFIER 1
#define TYPE_NUMBER 2
#define TYPE_SYMBOL 3
#define TYPE_START 4

#define NUMBER "number.yml"
#define SYMBOL "symbol.yml"
#define CLASSIFIER "classifier.yml"
#define START "start.yml"
#define PATH "/Users/Te.Nguyen/Code/Kai/p/"

using namespace std;
using namespace cv;
using namespace cv::ml;

class ImageRecognition{
    public:class
        cv::Ptr<cv::ml::SVM> svm,svm_start,svm_number,svm_symbol;
        int num;
        int TOP=3/5,BOT=2/5;

        ImageRecognition();


        static void getTrain(QString,int);
        int train(QString dir,string saveFile,int area,int h,int type);

        string loadTrain(string,int w,int h);
        string loadTrainPer(Mat,int w,int h,int );

        void trainAll(int w,int h);

        int loadTrainStart(QImage src);

        string loadTrain(QImage src,int w,int h);
        string getResult(int type);
        cv::Mat QImageToCvMat(QImage);
};

#endif // IMAGERECOGNITION_H

