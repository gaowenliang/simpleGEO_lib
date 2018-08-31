#ifndef WGS84_H
#define WGS84_H

#include "geobase.h"

namespace geo_lib
{

class WGS84 : public GeoBase
{
    public:
    WGS84( ) {}

    long double getGeocentricRadius( long double rad_lat );
    double getGravity( double latitude );

    public:
    static const double c_G0                    = 9.7803253359;
    static const long double c_SemiMajorAxis    = 6378137.0l;
    static const long double c_FlatteningFactor = 1.0l / 298.257223563l;
};
}
#endif // WGS84_H
