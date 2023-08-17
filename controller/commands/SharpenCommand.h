//
// Created by Raphael Russo on 8/12/23.
//

#ifndef IMAGEEDITING_SHARPENCOMMAND_H
#define IMAGEEDITING_SHARPENCOMMAND_H

#pragma once
#include "ICommand.h"

class SharpenCommand : public ICommand {

public:
    SharpenCommand() : ICommand() {}
    ~SharpenCommand() = default;

    void run(std::istream& input, IImageDataBase& model) override final;
};


#endif //IMAGEEDITING_SHARPENCOMMAND_H
