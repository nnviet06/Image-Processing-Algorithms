#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    std::cout << "==================================================" << std::endl;
    std::cout << "OpenCV C++ Test" << std::endl;
    std::cout << "==================================================" << std::endl;
    
    std::cout << "OpenCV version: " << CV_VERSION << std::endl;
    
    cv::Mat img(300, 400, CV_8UC3, cv::Scalar(200, 150, 100));
    cv::putText(img, "OpenCV Works!", cv::Point(50, 150),
                cv::FONT_HERSHEY_SIMPLEX, 1, cv::Scalar(255, 255, 255), 2);
    
    cv::imshow("C++ Test", img);
    std::cout << "Press any key to close the window..." << std::endl;
    cv::waitKey(0);
    
    std::cout << "✓ OpenCV C++ working correctly!" << std::endl;
    
    return 0;
}