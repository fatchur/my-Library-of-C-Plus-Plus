#ifndef BINARIZATION_H
#define BINARIZATION_H

#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"

using namespace cv;
using namespace std;

class ImgProc {

public:
    const int THRESHOLD = 100;

    //constructor
    //binarization();
    //grayscaling method
    void grayscale(Mat &img);
    //acces red channels
    vector<Mat> accessChannel(Mat img);
    //denoising
    Mat denoising(Mat img);
    //thresholding
    void thresholding(Mat &img);
    //dilating
    void dilating(Mat &img);

};

#endif

