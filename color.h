#ifndef COLOR_H
#define COLOR_H

#include "vec3.h"

#include <iostream>


/**
 * 
 * Rather than adding in a fractional contribution each time we accumulate more light to the color, 
 * just add the full color each iteration, and then perform a single divide at the end (by the number of samples)
 *  when writing out the color.
**/

void write_color(std::ostream &out, color pixel_color, int samples_per_pixel) {
    
    auto r = pixel_color.x();
    auto g = pixel_color.y();
    auto b = pixel_color.z();



    auto scale  = 1.0 / samples_per_pixel;

    //Gamma Correction
    r = sqrt(scale * r);
    g = sqrt(scale * g);
    b = sqrt(scale * b);

    
    // Write the translated [0,255] value of each color component.
    out << static_cast<int>(256 * clamp(r, 0.0, 0.999)) << ' '
        << static_cast<int>(256 * clamp(g, 0.0, 0.999)) << ' '
        << static_cast<int>(256 * clamp(b, 0.0, 0.999)) << '\n';
}

#endif