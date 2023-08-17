//
// Created by Raphael Russo on 8/12/23.
//

#ifndef IMAGEEDITING_GREYSCALETRANSFORMATION_H
#define IMAGEEDITING_GREYSCALETRANSFORMATION_H
#pragma once

#include "AbstractColorTransformation.h"

class GreyscaleTransformation : public AbstractColorTransformaion {
public:
    GreyscaleTransformation(vector<vector<double>>
                        matrix = {{0.2126, 0.7152, 0.0722},
                                  {0.2126, 0.7152, 0.0722},
                                  {0.2126, 0.7152, 0.0722}}
    )
            : AbstractColorTransformaion(matrix) {}

    ~GreyscaleTransformation() {}
};

#endif //IMAGEEDITING_GREYSCALETRANSFORMATION_H
