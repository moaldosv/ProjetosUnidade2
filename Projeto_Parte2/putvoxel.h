#ifndef PUTVOXEL_H
#define PUTVOXEL_H
#include "figurageometrica.h"

/**
 *
 * The PutVoxel class - classe PutBox derivada de FiguraGeometrica.
 * Uma caixa deverá ser especificada para desenho conforme os limites espaciais fornecidos para as três dimensões, sua cor e transparência.
 */

class PutVoxel : public FiguraGeometrica
{
    //teste
    int x, y, z;
    float r,g,b,a;

public:
    PutVoxel(int _x, int _y, int _z, float _r, float _g, float _b, float _a);
    void draw(Sculptor &t);
    ~PutVoxel();
};

#endif // PUTVOXEL_H
