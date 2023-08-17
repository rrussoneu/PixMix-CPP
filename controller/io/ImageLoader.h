//
// Created by Raphael Russo on 8/11/23.
//

#ifndef IMAGEEDITING_IMAGELOADER_H
#define IMAGEEDITING_IMAGELOADER_H
#pragma once
#include "IImageLoader.h"

class ImageLoader : public IImageLoader {
public:
    ImageLoader() : IImageLoader() {}
    ~ImageLoader() = default;

    unique_ptr<IImage> load(string path) override final;
};


#endif //IMAGEEDITING_IMAGELOADER_H
