//
// Created by Raphael Russo on 8/12/23.
//

#ifndef IMAGEEDITING_DRAMATICTRANSFORMATION_H
#define IMAGEEDITING_DRAMATICTRANSFORMATION_H

#pragma once

#include "AbstractColorTransformation.h"

class DramaticTransformation : public AbstractColorTransformaion {
public:
    DramaticTransformation(vector<vector<double>>
                           matrix = {{1.5, 0.5, 0.2},
                                     {0.1, 1.3, 0.2},
                                     {0.1, 0.2, 1.4}}
    )
            : AbstractColorTransformaion(matrix) {}

    ~DramaticTransformation() {}
};

#endif //IMAGEEDITING_DRAMATICTRANSFORMATION_H
