#include "wgs84.h"

long double
geo_lib::WGS84::getGeocentricRadius( long double rad_lat )
{
    const long double b = 1.0l - c_FlatteningFactor;

    const long double x = cos( rad_lat );
    const long double y = b * sin( rad_lat );

    return c_SemiMajorAxis * sqrt( ( x * x + b * b * y * y ) / ( x * x + y * y ) );
}

double
geo_lib::WGS84::getGravity( double latitude )
{
    const double k            = 0.00193185265246;
    long double sin_latitude2 = sin( latitude ) * sin( latitude );

    return c_G0 * ( 1.0 + k * sin_latitude2 ) / sqrt( 1.0 - 2.0 * c_FlatteningFactor * sin_latitude2 );
}
