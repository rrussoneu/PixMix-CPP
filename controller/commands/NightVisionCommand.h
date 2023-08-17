//
// Created by Raphael Russo on 8/12/23.
//

#ifndef IMAGEEDITING_NIGHTVISIONCOMMAND_H
#define IMAGEEDITING_NIGHTVISIONCOMMAND_H

#pragma once

#include "ICommand.h"

class NightVisionCommand : public ICommand {
public:
    NightVisionCommand() : ICommand() {}
    ~NightVisionCommand() = default;
    void run(istream& input, IImageDataBase& model) override final;
};


#endif //IMAGEEDITING_NIGHTVISIONCOMMAND_H
