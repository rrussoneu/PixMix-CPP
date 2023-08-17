//
// Created by Raphael Russo on 8/11/23.
//

#ifndef IMAGEEDITING_BRIGHTENCOMMAND_H
#define IMAGEEDITING_BRIGHTENCOMMAND_H

#pragma once
#include "ICommand.h"

class BrightenCommand : public ICommand {
public:
    BrightenCommand() : ICommand() {}
    ~BrightenCommand() = default;

    void run(std::istream& input, IImageDataBase& model) override final;
};



#endif //IMAGEEDITING_BRIGHTENCOMMAND_H
