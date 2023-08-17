//
// Created by Raphael Russo on 8/11/23.
//

#ifndef IMAGEEDITING_SAVECOMMAND_H
#define IMAGEEDITING_SAVECOMMAND_H
#pragma once

#include "ICommand.h"

class SaveCommand : public ICommand {
public:
    SaveCommand() : ICommand() {}
    ~SaveCommand() = default;

    void run(std::istream& input, IImageDataBase& model) override final;
};


#endif //IMAGEEDITING_SAVECOMMAND_H
