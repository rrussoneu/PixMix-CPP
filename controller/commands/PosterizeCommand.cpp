//
// Created by Raphael Russo on 8/12/23.
//

#include "PosterizeCommand.h"
#include "../../model/transformation/PosterizeTransformation.h"
#include "iostream"
#include "sstream"

void PosterizeCommand::run(std::istream& input, IImageDataBase &model) {
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

    unique_ptr<ITransformation> poster = make_unique<PosterizeTransformation>();
    model.applyTransformation(move(poster), srcImageName, destImageName);
}