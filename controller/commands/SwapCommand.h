//
// Created by Raphael Russo on 8/12/23.
//

#ifndef IMAGEEDITING_SWAPCOMMAND_H
#define IMAGEEDITING_SWAPCOMMAND_H


#pragma once

#include "ICommand.h"

class SwapCommand : public ICommand {
public:
    SwapCommand() : ICommand() {}
    ~SwapCommand() = default;
    void run(istream& input, IImageDataBase& model) override final;
};



#endif //IMAGEEDITING_SWAPCOMMAND_H
