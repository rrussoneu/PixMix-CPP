//
// Created by Raphael Russo on 8/11/23.
//
#include "opencv2/opencv.hpp"
#include "ImageLoader.h"
#include "../../model/ImageImpl.h"

unique_ptr<IImage> ImageLoader::load(string path) {
    cv::Mat image = cv::imread(path);

    unique_ptr<IImage> newImage = make_unique<ImageImpl>(image.rows,image.cols, 255);

    if (image.empty()) {
        std::cerr << "Failed to open image!" << std::endl;
        return nullptr;
    }

    for (int i = 0; i < image.rows; ++i) {
        for (int j = 0; j < image.cols; ++j) {
            cv::Vec3b pixel = image.at<cv::Vec3b>(i, j);  // BGR format

            int blue = pixel[0];
            int green = pixel[1];
            int red = pixel[2];

            newImage -> setPixel(i, j, red, green, blue);
        }
    }

    return move(newImage);


}