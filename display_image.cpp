#include <opencv2/core/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui/highgui.hpp>

#include <iostream>

int main( int argc, char** argv )
{
	cv::Mat image;
	
	if( argc > 1){
        image = cv::imread(argv[1], cv::IMREAD_COLOR); // Read the file
    }

    if( image.empty() ) {                     // Check for invalid input    
        std::cout <<  "Could not open or find the image" << std::endl ;
        return -1;
    }

    cv::namedWindow( "Display window", cv::WINDOW_AUTOSIZE ); // Create a window for display.
    cv::imshow( "Display window", image );                // Show our image inside it.
	cv::waitKey(0);
	return 0;
}
