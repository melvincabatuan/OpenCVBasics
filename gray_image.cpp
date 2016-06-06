#include "opencv2/core.hpp"
#include "opencv2/highgui.hpp"

#include <iostream>
#include <string>
#include <sstream>

int main( int argc, const char** argv )
{	
	cv::Mat color= cv::imread("./image/DLSU.png"); // Read images
	cv::Mat gray = cv::imread("./image/DLSU.png", 0);
	
	if( color.empty() ) {                  // Check for invalid input    
        std::cout <<  "Could not open or find the image" << std::endl ;
        return -1;
    }
		
	cv::imwrite("dlsuGray.jpg", gray);     // Write image
	
	cv::imshow("DLSU BGR", color);         // Show images
	cv::imshow("DLSU Gray", gray);
	cv::waitKey(0);
	return 0;
}
