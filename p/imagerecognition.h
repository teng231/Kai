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
#define SYMBOL "symbol.yml"
#define PATH "/Users/Te.Nguyen/Code/Kai/p/"

using namespace std;
using namespace cv;
using namespace cv::ml;

class ImageRecognition{
    public:
        int num;
        ImageRecognition();
        static void getTrain();
        int train();
        string loadTrain(string);
        string loadTrain(QImage src);
        string getResult();
        cv::Mat QImageToCvMat(QImage);
};

#endif // IMAGERECOGNITION_H

