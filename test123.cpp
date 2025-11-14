#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    std::cout << "==================================================" << std::endl;
    std::cout << "OpenCV C++ - Drawing Test" << std::endl;
    std::cout << "==================================================" << std::endl;
    
    // Tạo ảnh trắng
    cv::Mat img(400, 600, CV_8UC3, cv::Scalar(255, 255, 255));
    
    // Vẽ hình chữ nhật (màu đỏ)
    cv::rectangle(img, cv::Point(50, 50), cv::Point(250, 200), 
                  cv::Scalar(0, 0, 255), 3);
    
    // Vẽ hình tròn (màu xanh lá)
    cv::circle(img, cv::Point(450, 125), 80, cv::Scalar(0, 255, 0), -1);
    
    // Vẽ đường thẳng (màu xanh dương)
    cv::line(img, cv::Point(50, 250), cv::Point(550, 250), 
             cv::Scalar(255, 0, 0), 5);
    
    // Vẽ text
    cv::putText(img, "C++ OpenCV", cv::Point(150, 330),
                cv::FONT_HERSHEY_SIMPLEX, 1.5, cv::Scalar(0, 0, 0), 3);
    
    cv::imshow("C++ Drawing", img);
    std::cout << "Press any key to close..." << std::endl;
    cv::waitKey(0);
    
    std::cout << "✓ Done!" << std::endl;
    return 0;
}