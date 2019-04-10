#include "imgProc.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/photo.hpp"

using namespace cv;
using namespace std;

//void ImgProc::binarization(){
//    THRESHOLD = 100;
//}

void ImgProc::grayscale(Mat &img){
    cvtColor(img, img, CV_BGR2GRAY);
}

vector<Mat> ImgProc::accessChannel(Mat img){
    vector<Mat> grayPlanes;
    split(img, grayPlanes);

    return grayPlanes;
}

Mat ImgProc::denoising(Mat img){
    Mat res;
    fastNlMeansDenoising( img, res, 93, 7, 21);
    return res;	
}

void ImgProc::thresholding(Mat &img){
    //adaptiveThreshold(img, img, 100, ADAPTIVE_THRESH_MEAN_C, THRESH_BINARY_INV, 21, 0);
    threshold(img, img, 250, 255, THRESH_BINARY);
}

void ImgProc::dilating(Mat &img){
    Mat element = getStructuringElement( MORPH_RECT, Size( 23, 23 ), Point(11, 11) );
    dilate( img, img, element );
}


