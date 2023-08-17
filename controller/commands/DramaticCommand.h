//
// Created by Raphael Russo on 8/12/23.
//

#ifndef IMAGEEDITING_DRAMATICCOMMAND_H
#define IMAGEEDITING_DRAMATICCOMMAND_H

#pragma once

#include "ICommand.h"

class DramaticCommand : public ICommand {
public:
    DramaticCommand() : ICommand() {}
    ~DramaticCommand() = default;
    void run(istream& input, IImageDataBase& model) override final;
};


#endif //IMAGEEDITING_DRAMATICCOMMAND_H
