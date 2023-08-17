//
// Created by Raphael Russo on 8/11/23.
//

#include "ImageSaver.h"

#include "opencv2/opencv.hpp"

void ImageSaver::save(std::string path, IImage &image) {
    cv::Mat opencvImage(image.getHeight(), image.getWidth(), CV_8UC3);

    for(int i = 0; i < image.getHeight(); i++) {
        for(int j = 0; j < image.getWidth(); j++) {
            uchar red = static_cast<uchar>(image.getRedChannel(i, j));
            uchar green = static_cast<uchar>(image.getGreenChannel(i, j));
            uchar blue = static_cast<uchar>(image.getBlueChannel(i, j));

            opencvImage.at<cv::Vec3b>(i, j) = cv::Vec3b(blue, green, red);
        }
    }
    if(cv::imwrite(path, opencvImage)) {
        std::cout << "Image saved successfully!" << std::endl;
    } else {
        std::cout << "Error saving the image." << std::endl;
    }
    return;
}