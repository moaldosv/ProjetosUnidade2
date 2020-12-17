#ifndef CUTELLIPSOID_H
#define CUTELLIPSOID_H
#include "figurageometrica.h"

/**
 * CutEllipsoid class - uma classe CutEllipsoid derivada de FiguraGeometrica.
 * Uma esfera deverá ser especificada para remoção conforme a posição do centro e seus raios em pixels.
 */

class CutEllipsoid : public FiguraGeometrica
{
    int xcenter, ycenter, zcenter, rx, ry, rz;
public:
    CutEllipsoid(int _xcenter, int _ycenter, int _zcenter, int _rx, int _ry, int _rz);
    void draw(Sculptor &t);
    ~CutEllipsoid();
};

#endif // CUTELLIPSOID_H
