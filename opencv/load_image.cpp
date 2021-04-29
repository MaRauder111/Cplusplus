#include<iostream>
#include<opencv2/core.hpp>
#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>

int main(int argc, char** argv){
    cv::Mat img;
    img = cv::imread("pluto.jpg", cv::IMREAD_COLOR);

    cv::namedWindow("Testing",cv::WINDOW_AUTOSIZE);
    cv::imshow("Testing", img);

    cv::waitKey(0);
    return 0;

}
