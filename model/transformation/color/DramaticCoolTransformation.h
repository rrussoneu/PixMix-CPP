//
// Created by Raphael Russo on 8/12/23.
//

#ifndef IMAGEEDITING_DRAMATICCOOLTRANSFORMATION_H
#define IMAGEEDITING_DRAMATICCOOLTRANSFORMATION_H

#pragma once

#include "AbstractColorTransformation.h"

class DramaticCoolTransformation : public AbstractColorTransformaion {
public:
    DramaticCoolTransformation(vector<vector<double>>
                               matrix = {{1.2, -0.2, 0.3},
                                         {-0.1, 1.3, 0.1},
                                         {0.2, 0.1, 1.5}}
    )
            : AbstractColorTransformaion(matrix) {}

    ~DramaticCoolTransformation() {}
};

#endif //IMAGEEDITING_DRAMATICCOOLTRANSFORMATION_H
