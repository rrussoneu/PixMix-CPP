//
// Created by Raphael Russo on 8/17/23.
//

#include "FlipCommand.h"
#include "../../model/transformation/FlipTransformation.h"
#include "iostream"
#include "sstream"

void FlipCommand::run(std::istream& input, IImageDataBase &model) {
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

    unique_ptr<ITransformation> flip = make_unique<FlipTransformation>();
    model.applyTransformation(move(flip), srcImageName, destImageName);
}