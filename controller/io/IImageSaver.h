//
// Created by Raphael Russo on 8/11/23.
//

#ifndef IMAGEEDITING_IIMAGESAVER_H
#define IMAGEEDITING_IIMAGESAVER_H

#pragma once
#include "../../model/IImage.h"
#include "string"

class IImageSaver {
public:
    IImageSaver() {}
    virtual ~IImageSaver() = default;

    virtual void save(string path, IImage& image) = 0;
};

#endif //IMAGEEDITING_IIMAGESAVER_H
