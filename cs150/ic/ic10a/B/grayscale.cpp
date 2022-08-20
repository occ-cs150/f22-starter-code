/**
 *  @author Put your name here
 *  @date Put the date here
 *  @file grayscale.cpp
 */
#include <string>
#include <iostream>
using namespace std;

#define STB_IMAGE_IMPLEMENTATION        // REQUIRED (loading)
#define STB_IMAGE_WRITE_IMPLEMENTATION  // (writing)
#include "stb_image.h"                  // "header-only" C libraries
#include "stb_image_write.h"            // writing files


// This is a type alias
using uchar = unsigned char;

// Create a Pixel structure to process the image


// Write the average function here


// Write the luminance function here

int main()
{
    // Loads image into memory
    int w, h, bpp;
    uchar* const data = stbi_load("images/billiards.jpg", &w, &h, &bpp, 4);
    if (data == nullptr)
    {
        cerr << "Cannot load billards.jpg" << endl;
        return -1;
    }

    //  Use renterpret_cast to create a pointer to the beginning
    //  Use address arithmetic to create a pointer to the end
    //  Use an iterator loop to process each pixel
    //  Increment the pointer to go to the next pixel
    // Grayscale the image
    //  Two methods:
    //      1. Write average function(Pixel& p)
    //      2. Use luminance: red (.299), green(.587), blue(.114)

    // Save modified image to output
    bool OK = stbi_write_png("images/grayscale.png", w, h, 4, data, w * 4);
    if (OK)
        cout << "Grayscale image in images/grayscale.png" << endl;
    else
        cout << "Could not save image." << endl;

    // Free image data
    stbi_image_free(data);

    return 0;

}
