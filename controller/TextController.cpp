//
// Created by Raphael Russo on 8/11/23.
//

#include "TextController.h"
#include "istream"

using namespace std;

void TextController::writeMessage(std::string msg) const {
    VIEW->writeMessage(msg);
}

void TextController::run(istream& input) {
    string command;
    while (input >> command) {
        try {
            transform(command.begin(), command.end(), command.begin(), ::tolower);
            if (command == "q") {
                return;
            }
            if (command != "load" && !initialLoad) {
                throw invalid_argument("Must first load an image.\n");
            }
            if (commands.find(command) == commands.end()) {
                throw invalid_argument("Invalid command.\n");
            }
            else {
                try {
                    commands[command] -> run(input, *MODEL);
                } catch (invalid_argument& e) {
                    throw invalid_argument(e.what());
                }
            }
            if (command == "load") {
                initialLoad = true;
            }
        } catch (invalid_argument& e) {
            writeMessage(e.what());
            //input.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }




}