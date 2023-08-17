//
// Created by Raphael Russo on 8/11/23.
//

#include "ImageDataBaseImpl.h"

void ImageDataBaseImpl::addImage(std::string &id, unique_ptr<IImage> img) {
    images[id] = move(img);
}

IImage& ImageDataBaseImpl::getImage(std::string &id) const {
    auto it = images.find(id);
    if (it != images.end()) {
        return *(it->second);
    } else {
        throw std::runtime_error("Image not found!"); // Here, you must throw an exception since references cannot be null.
    }
}

void ImageDataBaseImpl::applyTransformation(unique_ptr<ITransformation> transformation, std::string sourceId, std::string destId) {
    IImage& sourceImage = getImage(sourceId);

    unique_ptr<IImage> newImage = transformation->apply(sourceImage);
    addImage(destId, move(newImage));
}