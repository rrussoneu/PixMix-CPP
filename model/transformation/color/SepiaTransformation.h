//
// Created by Raphael Russo on 8/12/23.
//

#ifndef IMAGEEDITING_SEPIATRANSFORMATION_H
#define IMAGEEDITING_SEPIATRANSFORMATION_H
#pragma once
#include "AbstractColorTransformation.h"

class SepiaTransformation : public AbstractColorTransformaion {
public:
    SepiaTransformation(vector<vector<double>>
            matrix = {{0.393, 0.769, 0.189},
                      {0.349, 0.686, 0.168},
                      {0.272, 0.534, 0.131}}
                      )
              : AbstractColorTransformaion(matrix) {}

    ~SepiaTransformation() {}
};

#endif //IMAGEEDITING_SEPIATRANSFORMATION_H
