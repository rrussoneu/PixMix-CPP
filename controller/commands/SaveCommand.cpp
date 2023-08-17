//
// Created by Raphael Russo on 8/11/23.
//

#include "SaveCommand.h"
#include "../io/ImageSaver.h"
#include "memory"
#include "iostream"
#include "sstream"

void SaveCommand::run(std::istream& input, IImageDataBase &model) {
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

    unique_ptr<IImageSaver> saver = make_unique<ImageSaver>();
    IImage& img = model.getImage(imageName);
    saver->save(path, img);
}