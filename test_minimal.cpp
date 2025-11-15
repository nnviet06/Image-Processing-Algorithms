#include <opencv2/opencv.hpp>
#include <iostream>
#include <fstream>

int main() {
    std::cout << "OpenCV version: " << CV_VERSION << std::endl;
    
    // Create image
    cv::Mat img(300, 400, CV_8UC3, cv::Scalar(200, 150, 100));
    
    // Save to file instead of display
    cv::imwrite("test_output.jpg", img);
    
    std::cout << "Image saved to test_output.jpg" << std::endl;
    std::cout << "Success!" << std::endl;
    
    return 0;
}