#ifndef GEOBASE_H
#define GEOBASE_H

#include <iostream>
#include <math.h>

namespace geo_lib
{

class GeoBase
{
    public:
    GeoBase( ) {}

    long double degToRad( double deg );
    long double degToRad( double deg, double min, double sec );
    long double radToDeg( double rad );

    public:
    static const long double c_PI = 3.141592653589793;
};
}
#endif // GEOBASE_H
