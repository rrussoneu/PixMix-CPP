//
// Created by Raphael Russo on 8/12/23.
//

#ifndef IMAGEEDITING_SATURATIONCOMMAND_H
#define IMAGEEDITING_SATURATIONCOMMAND_H
#pragma once

#include "ICommand.h"

class SaturationCommand : public ICommand {
public:
    SaturationCommand() : ICommand() {}
    ~SaturationCommand() = default;
    void run(istream& input, IImageDataBase& model) override final;
};



#endif //IMAGEEDITING_SATURATIONCOMMAND_H
