#include<opencv2/highgui.hpp>
#include<iostream>

int main()
{
	std::string path = "/home/lamzing/Desktop/File/learning/Cplusplus/opencv/pluto.jpg";
	cv::Mat img = cv::imread(path);
	cv::imshow("Image", img);
	cv::waitKey(0);
}
