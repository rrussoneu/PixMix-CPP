# PixMix++

PixMix++ is a command line image editor created with C++ using MVC architecture. Future plans include adding a GUI and more types of image transformations. Load an image and give it a nickname to use while editing, and perform various transformations and filters, such as sharpen, blur, sepia, etc. The commands are as follows:
- Load an image: load <file path> <nickame>
  - ex: load res/image_to_load.jpg img1
- Save an image: save <file path> <nickname of image to save>
  - ex: save res/img_sharpen.jpg img1
- Brighten: brighten <brighten value - use negative to darken> <nickname of image to operate on> <nickname for new image>
  - ex: brighten 20 img1 img1bright
- Blur: blur \<nickname of image to operate on\> \<nickname of new image\>
- Sharpen: sharpen \<nickname of image to operate on\> \<nickname of new image\>
- Greyscale: greyscale \<nickname of image to operate on\> \<nickname of new image\>
- Sepia: sepia \<nickname of image to operate on\> \<nickname of new image\>
- Silvertone: silvertone \<nickname of image to operate on\> \<nickname of new image\>
- Dramatic: dramatic \<nickname of image to operate on\> \<nickname of new image\>
- Dramatic cool: dramatic-cool \<nickname of image to operate on\> \<nickname of new image\>
- Dramatic warm: dramatic-warm \<nickname of image to operate on\> \<nickname of new image\>
- Negative: negative \<nickname of image to operate on\> \<nickname of new image\>
- Lomo: lomo \<nickname of image to operate on\> \<nickname of new image\>
- Magenta: magenta \<nickname of image to operate on\> \<nickname of new image\>
- Night Vision: night-vision \<nickname of image to operate on\> \<nickname of new image\>
- Color Boost: color-boost \<nickname of image to operate on\> \<nickname of new image\>
- Cool: cool \<nickname of image to operate on\> \<nickname of new image\>
- Warm: warm \<nickname of image to operate on\> \<nickname of new image\>
- Swap: swap \<nickname of image to operate on\> \<nickname of new image\>
- Posterize: posterize \<nickname of image to operate on\> \<nickname of new image\>
- Saturation: saturation \<saturation percentage\> \<nickname of image to operate on\> \<nickname of new image\>
- Flip: flip \<nickname of image to operate on\> \<nickname of new image\>
- Posterize: posterize \<nickname of image to operate on\> \<nickname of new image\>
