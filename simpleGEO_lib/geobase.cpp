#include "geobase.h"

long double
geo_lib::GeoBase::degToRad( double deg )
{
    return deg / 180.0l * c_PI;
}

long double
geo_lib::GeoBase::degToRad( double deg, double min, double sec )
{
    return ( deg + 60 * min + 60 * 60 * sec ) / 180.0l * c_PI;
}

long double
geo_lib::GeoBase::radToDeg( double rad )
{
    return rad / c_PI * 180.0;
}
