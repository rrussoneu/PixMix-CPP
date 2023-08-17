//
// Created by Raphael Russo on 8/12/23.
//

#ifndef IMAGEEDITING_SEPIACOMMAND_H
#define IMAGEEDITING_SEPIACOMMAND_H

#pragma once

#include "ICommand.h"

class SepiaCommand : public ICommand {
public:
    SepiaCommand() : ICommand() {}
    ~SepiaCommand() = default;
    void run(istream& input, IImageDataBase& model) override final;
};


#endif //IMAGEEDITING_SEPIACOMMAND_H
