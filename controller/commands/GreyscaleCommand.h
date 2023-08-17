//
// Created by Raphael Russo on 8/12/23.
//

#ifndef IMAGEEDITING_GREYSCALECOMMAND_H
#define IMAGEEDITING_GREYSCALECOMMAND_H

#pragma once

#include "ICommand.h"

class GreyscaleCommand : public ICommand {
public:
    GreyscaleCommand() : ICommand() {}
    ~GreyscaleCommand() = default;
    void run(istream& input, IImageDataBase& model) override final;
};



#endif //IMAGEEDITING_GREYSCALECOMMAND_H
