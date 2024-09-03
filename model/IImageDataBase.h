//
// Created by Raphael Russo on 8/11/23.
//

#ifndef IMAGEEDITING_IIMAGEDATABASE_H
#define IMAGEEDITING_IIMAGEDATABASE_H

#pragma once

#include "string"
#include "IImage.h"
#include "transformation/ITransformation.h"

using namespace std;

class IImageDataBase {
protected:
    unordered_map<string, unique_ptr<IImage>> images;

public:
    IImageDataBase() {}; // Nothing happens in constuctor

    virtual ~ IImageDataBase() = default;

    virtual void addImage(string& id, unique_ptr<IImage> img) = 0;

    virtual IImage& getImage(string& id) const = 0;

    virtual void applyTransformation(unique_ptr<ITransformation> transformation, string sourceId, string destId) = 0;
};

#endif //IMAGEEDITING_IIMAGEDATABASE_H
