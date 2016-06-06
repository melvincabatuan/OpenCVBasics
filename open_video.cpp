#include "opencv2/core.hpp"
#include "opencv2/highgui.hpp"
#include <iostream>

int main( int argc, const char** argv )
{
	cv::VideoCapture cap; // open the default camera
	if(argc > 1){
		cap.open(argv[1]);
	}
	else {
		cap.open(0);
	}
	if(!cap.isOpened()) return -1; // if failed, exit
	cv::namedWindow("Video",1);
	for(;;)
	{
		cv::Mat frame;
		cap >> frame; // get a new frame from camera
		cv::imshow("Video", frame);
		if(cv::waitKey(30) >= 0) break;
	}
	// Release the camera or video cap
	cap.release();
	return 0;
}
