#ifndef CUTVOXEL_H
#define CUTVOXEL_H
#include "figurageometrica.h"

/**
 * CutVoxel class - classe CutVoxel derivada de FiguraGeometrica.
 * Um voxel deverá ser especificado para remoção conforme sua posição no espaco.
 */

class CutVoxel : public FiguraGeometrica
{
     int x, y, z;
public:
    CutVoxel(int _x, int _y, int _z);
    void draw(Sculptor &t);
    ~CutVoxel();
};

#endif // CUTVOXEL_H
