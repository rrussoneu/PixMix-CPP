//
// Created by Raphael Russo on 8/12/23.
//

#ifndef IMAGEEDITING_POSTERIZECOMMAND_H
#define IMAGEEDITING_POSTERIZECOMMAND_H

#pragma once

#include "ICommand.h"

class PosterizeCommand : public ICommand {
public:
    PosterizeCommand() : ICommand() {}
    ~PosterizeCommand() = default;
    void run(istream& input, IImageDataBase& model) override final;
};



#endif //IMAGEEDITING_POSTERIZECOMMAND_H
