#include <iostream>
#include "controller/TextController.h"
#include "model/ImageDataBaseImpl.h"
#include "view/TextView.h"

int main() {

    unique_ptr<IImageDataBase> model = make_unique<ImageDataBaseImpl>();
    unique_ptr<IView> view = make_unique<TextView>();
    unique_ptr<IController> controller = make_unique<TextController>(move(model), move(view));

    controller->run(std::cin);

    return 0;

}
