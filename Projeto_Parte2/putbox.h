#ifndef PUTBOX_H
#define PUTBOX_H
#include "figurageometrica.h"

/**
 * PutBox class - classe PutBox derivada de FiguraGeometrica.
 * Uma caixa deverá ser especificada para desenho conforme os limites espaciais fornecidos para as três dimensões, sua cor e transparência.
 */
class PutBox : public FiguraGeometrica
{
    int x0,y0,z0,x1,y1,z1;
     float r,g,b,a;

public:
    PutBox(int _x0, int _x1, int _y0, int _y1, int _z0, int _z1, float _r, float _g, float _b, float _a);
    void draw(Sculptor &t);
    ~PutBox();
};

#endif // PUTBOX_H
