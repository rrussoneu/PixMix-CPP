//
// Created by Raphael Russo on 8/12/23.
//

#ifndef IMAGEEDITING_DRAMATICWARMCOMMAND_H
#define IMAGEEDITING_DRAMATICWARMCOMMAND_H
#pragma once

#include "ICommand.h"

class DramaticWarmCommand : public ICommand {
public:
    DramaticWarmCommand() : ICommand() {}
    ~DramaticWarmCommand() = default;
    void run(istream& input, IImageDataBase& model) override final;
};

#endif //IMAGEEDITING_DRAMATICWARMCOMMAND_H
