//
// Created by Raphael Russo on 8/11/23.
//

#ifndef IMAGEEDITING_BLURCOMMAND_H
#define IMAGEEDITING_BLURCOMMAND_H

#pragma once
#include "ICommand.h"

class BlurCommand : public ICommand {

public:
    BlurCommand() : ICommand() {}
    ~BlurCommand() = default;

    void run(std::istream& input, IImageDataBase& model) override final;
};


#endif //IMAGEEDITING_BLURCOMMAND_H
