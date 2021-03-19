#include "opencv2/opencv.hpp"
#include <iostream>

using namespace std;
using namespace cv;

int main(){
    Mat src;
    src = imread("pluto.jpg", 1); // read input image

Mat gray, blur_image, threshold_output;
cvtColor(src, gray, COLOR_BGR2GRAY); // convert to grayscale
blur(gray, blur_image, Size(3, 3)); // apply blur to grayscaled image 
threshold(blur_image, threshold_output, 50, 255, THRESH_BINARY); // apply binary thresholding

vector< vector<Point> > contours; // list of contour points
vector<Vec4i> hierarchy; 
// find contours
findContours(threshold_output, contours, hierarchy, RETR_TREE, CHAIN_APPROX_SIMPLE, Point(0, 0));


// // create hull array for convex hull points
// vector< vector<Point> > hull(contours.size());
// for(int i = 0; i < contours.size(); i++)
//     convexHull(Mat(contours[i]), hull[i]);


// // create a blank image (black image)
// Mat drawing = Mat::zeros(threshold_output.size(), CV_8UC3); 

// for(int i = 0; i < contours.size(); i++) {
//     Scalar color_contours = Scalar(0, 255, 0); // green - color for contours
//     Scalar color = Scalar(255, 0, 0); // blue - color for convex hull
//     // draw ith contour
//     drawContours(drawing, contours, i, color_contours, 1, 8, vector<Vec4i>(), 0, Point());
//     // draw ith convex hull
//     drawContours(drawing, hull, i, color, 1, 8, vector<Vec4i>(), 0, Point());
// }
}