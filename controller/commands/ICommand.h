//
// Created by Raphael Russo on 8/11/23.
//

#ifndef IMAGEEDITING_ICOMMAND_H
#define IMAGEEDITING_ICOMMAND_H
#pragma once

#include "../../model/IImageDataBase.h"

class ICommand {
public:
    ICommand() {};
    virtual ~ICommand() = default;
    virtual void run(std::istream& input, IImageDataBase& model) = 0;
};

#endif //IMAGEEDITING_ICOMMAND_H
