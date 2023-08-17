//
// Created by Raphael Russo on 8/12/23.
//

#include "SwapCommand.h"
#include "../../model/transformation/color/SwapTransformation.h"
#include "iostream"
#include "sstream"

void SwapCommand::run(std::istream& input, IImageDataBase &model) {
    std::string srcImageName;
    std::string destImageName;
    std::string line;
    if (!std::getline(input, line)) {
        throw std::invalid_argument("Failed to read command.\n");
    }

    std::istringstream lineStream(line);

    if (!(lineStream >> srcImageName >> destImageName)) {
        throw std::invalid_argument("Invalid command arguments.\n");
    }

    unique_ptr<ITransformation> swap = make_unique<SwapTransformation>();
    model.applyTransformation(move(swap), srcImageName, destImageName);
}