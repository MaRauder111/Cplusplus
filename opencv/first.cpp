#include<opencv2/core.hpp>
#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>

#include<iostream>

int main( int argc, char** argv ) {

    cv::Mat image;
    image = cv::imread("pluto.jpg" ,cv::IMREAD_COLOR);

    if(! image.data ) {
        std::cout <<  "Image not found or unable to open" << std::endl ;
        return -1;
        }

    cv::namedWindow( "OpenCV Test Program", cv::WINDOW_AUTOSIZE );
    cv::imshow( "OpenCV Test Program", image );

    // int k = cv::waitKey(0); // Wait for a keystroke in the window
    // if(k == 's')
    // {
    //     cv::imwrite("test.png", image);
    // }


    cv::waitKey(0);
    return 0;
}