//
// Created by Raphael Russo on 8/12/23.
//

#include "SepiaCommand.h"
#include "../../model/transformation/color/SepiaTransformation.h"
#include "iostream"
#include "sstream"

void SepiaCommand::run(std::istream& input, IImageDataBase &model) {
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

    unique_ptr<ITransformation> sepia = make_unique<SepiaTransformation>();
    model.applyTransformation(move(sepia), srcImageName, destImageName);
}