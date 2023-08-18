cmake_minimum_required(VERSION 3.26)
find_package(OpenCV REQUIRED)
find_package(Qt6 COMPONENTS Core Widgets REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
project(ImageEditing)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_PREFIX_PATH "~/Qt/6.5.2/macos/lib/cmake")
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

add_executable(ImageEditing main.cpp
        model/IImage.h
        model/IPixel.h
        model/Pixel.cpp
        model/Pixel.h
        model/ImageImpl.cpp
        model/ImageImpl.h
        model/IImageDataBase.h
        model/ImageDataBaseImpl.cpp
        model/ImageDataBaseImpl.h
        model/transformation/ITransformation.h
        model/transformation/BrightenTransformation.cpp
        model/transformation/BrightenTransformation.h
        controller/io/IImageLoader.h
        controller/io/ImageLoader.cpp
        controller/io/ImageLoader.h
        controller/io/IImageSaver.h
        controller/io/ImageSaver.cpp
        controller/io/ImageSaver.h
        controller/IController.h
        controller/TextController.cpp
        controller/TextController.h
        controller/commands/ICommand.h
        controller/commands/BrightenCommand.cpp
        controller/commands/BrightenCommand.h
        controller/commands/SaveCommand.cpp
        controller/commands/SaveCommand.h
        controller/commands/LoadCommand.cpp
        controller/commands/LoadCommand.h
        model/transformation/kernel/AbstractKernelTransformation.h
        model/transformation/kernel/BlurTransformation.h
        controller/commands/BlurCommand.cpp
        controller/commands/BlurCommand.h
        model/transformation/color/AbstractColorTransformation.h
        controller/commands/SepiaCommand.cpp
        controller/commands/SepiaCommand.h
        model/transformation/color/SepiaTransformation.h
        view/IView.h
        view/TextView.cpp
        view/TextView.h
        model/transformation/color/GreyscaleTransformation.h
        model/transformation/kernel/SharpenTransformation.h
        controller/commands/SharpenCommand.cpp
        controller/commands/SharpenCommand.h
        controller/commands/GreyscaleCommand.cpp
        controller/commands/GreyscaleCommand.h
        model/transformation/color/NegativeTransformation.h
        model/transformation/color/DramaticTransformation.h
        model/transformation/color/SilvertoneTransformation.h
        model/transformation/color/DramaticWarmTransformation.h
        model/transformation/color/DramaticCoolTransformation.h
        controller/commands/DramaticCommand.cpp
        controller/commands/DramaticCommand.h
        controller/commands/DramaticCoolCommand.cpp
        controller/commands/DramaticCoolCommand.h
        controller/commands/DramaticWarmCommand.cpp
        controller/commands/DramaticWarmCommand.h
        controller/commands/SilvertoneCommand.cpp
        controller/commands/SilvertoneCommand.h
        controller/commands/NegativeCommand.cpp
        controller/commands/NegativeCommand.h
        model/transformation/color/SwapTransformation.h
        model/transformation/color/CoolTransformation.h
        model/transformation/color/WarmTransformation.h
        model/transformation/color/MagentaTransformation.h
        model/transformation/color/NightVisionTransformation.h
        model/transformation/color/LomoTransformation.h
        model/transformation/color/ColorBoostTransformation.h
        controller/commands/LomoCommand.cpp
        controller/commands/LomoCommand.h
        controller/commands/MagentaCommand.cpp
        controller/commands/MagentaCommand.h
        controller/commands/NightVisionCommand.cpp
        controller/commands/NightVisionCommand.h
        controller/commands/ColorBoostCommand.cpp
        controller/commands/ColorBoostCommand.h
        controller/commands/CoolCommand.cpp
        controller/commands/CoolCommand.h
        controller/commands/WarmCommand.cpp
        controller/commands/WarmCommand.h
        controller/commands/SwapCommand.cpp
        controller/commands/SwapCommand.h
        model/transformation/PosterizeTransformation.cpp
        model/transformation/PosterizeTransformation.h
        controller/commands/PosterizeCommand.cpp
        controller/commands/PosterizeCommand.h
        model/transformation/saturation/RetroTransformation.cpp
        model/transformation/saturation/RetroTransformation.h
        model/transformation/saturation/AbstractSaturationTransformation.h
        model/transformation/saturation/SaturationTransformation.h
        controller/commands/SaturationCommand.cpp
        controller/commands/SaturationCommand.h
        model/transformation/FlipTransformation.cpp
        model/transformation/FlipTransformation.h
        controller/commands/FlipCommand.cpp
        controller/commands/FlipCommand.h
)

target_link_libraries(ImageEditing ${OpenCV_LIBS} Qt6::Core Qt6::Widgets)
