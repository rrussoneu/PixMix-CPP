//
// Created by Raphael Russo on 8/11/23.
//

#ifndef IMAGEEDITING_IMAGEDATABASEIMPL_H
#define IMAGEEDITING_IMAGEDATABASEIMPL_H

#include "IImageDataBase.h"
#include "transformation/ITransformation.h"

class ImageDataBaseImpl : public IImageDataBase {
public:
    ImageDataBaseImpl() : IImageDataBase() {}
    ~ImageDataBaseImpl() = default;

    void addImage(string &id, unique_ptr<IImage> img) override final;

    IImage& getImage(string &id) const override final;

    void applyTransformation(unique_ptr<ITransformation> transformation, string sourceId, string destId) override final;



};


#endif //IMAGEEDITING_IMAGEDATABASEIMPL_H
