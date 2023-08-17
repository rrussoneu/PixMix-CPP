//
// Created by Raphael Russo on 8/11/23.
//

#ifndef IMAGEEDITING_IIMAGELOADER_H
#define IMAGEEDITING_IIMAGELOADER_H

#pragma once
#include "../../model/IImage.h"
#include "string"

class IImageLoader {
public:
    IImageLoader() {}
    virtual ~IImageLoader() = default;

    virtual unique_ptr<IImage> load(string path) = 0;
};

#endif //IMAGEEDITING_IIMAGELOADER_H
