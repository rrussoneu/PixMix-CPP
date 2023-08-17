//
// Created by Raphael Russo on 8/11/23.
//

#include "LoadCommand.h"
#include "../io/ImageLoader.h"
#include "iostream"
#include "sstream"

void LoadCommand::run(std::istream& input, IImageDataBase &model) {
    std::string path;
    std::string imageName;
    std::string line;

    if (!std::getline(input, line)) {
        throw std::invalid_argument("Failed to read command.\n");
    }

    std::istringstream lineStream(line);

    if (!(lineStream >> path >> imageName)) {
        throw std::invalid_argument("Invalid command arguments.\n");
    }

    unique_ptr<IImageLoader> loader = make_unique<ImageLoader>();

    unique_ptr<IImage> img = loader->load(path);
    model.addImage(imageName, move(img));
}