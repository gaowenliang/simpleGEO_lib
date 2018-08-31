#include "sampleGEO_lib/wgs84.h"
#include <iostream>

int
main( int argc, char** argv )
{
    geo_lib::WGS84 earth;

    std::cout << " In Hong Kong, \n";
    std::cout << " g = " << earth.getGravity( earth.degToRad( 22, 15, 0 ) ) << " m/s^2\n";
    std::cout << " r = " << earth.getGeocentricRadius( earth.degToRad( 22, 15, 0 ) ) << " m.\n";

    return 0;
}
