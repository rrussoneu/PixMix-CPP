//
// Created by Raphael Russo on 8/12/23.
//

#include "NightVisionCommand.h"
#include "../../model/transformation/color/NightVisionTransformation.h"
#include "iostream"
#include "sstream"

void NightVisionCommand::run(std::istream& input, IImageDataBase &model) {
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

    unique_ptr<ITransformation> night = make_unique<NightVisionTransformation>();
    model.applyTransformation(move(night), srcImageName, destImageName);
}