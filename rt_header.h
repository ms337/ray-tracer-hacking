#ifndef RT_HEADER_H
#define RT_HEADER_H

#include <cmath>
#include <limits>
#include <memory>


//Usings

using std::shared_ptr;
using std::make_shared;
using std::sqrt;


//Constants

const double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.14159265358979323845;

//Utils
inline double degrees_to_radians(double degrees) {
	return degrees * pi / 180;
}

//Common Headers

#include "ray.h"
#include "vec3.h"

#endif