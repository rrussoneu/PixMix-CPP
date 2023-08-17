//
// Created by Raphael Russo on 8/11/23.
//

#ifndef IMAGEEDITING_IMAGESAVER_H
#define IMAGEEDITING_IMAGESAVER_H
#pragma once
#include "IImageSaver.h"


class ImageSaver : public IImageSaver {
public:
    ImageSaver() : IImageSaver() {}
    ~ImageSaver() = default;

    void save(string path, IImage &image) override final;

};


#endif //IMAGEEDITING_IMAGESAVER_H
