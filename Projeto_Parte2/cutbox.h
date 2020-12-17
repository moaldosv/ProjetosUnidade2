#ifndef CUTBOX_H
#define CUTBOX_H
#include "figurageometrica.h"

/**
 * CutBox class - classe CutBox derivada de FiguraGeometrica.
 * Uma caixa deverá ser especificada para remoção conforme os limites espaciais fornecidos.
 */
class CutBox : public FiguraGeometrica
{
 int x0,y0,z0,x1,y1,z1;

public:
    CutBox(int _x0, int _x1, int _y0, int _y1, int _z0, int _z1);
    void draw(Sculptor &t);
    ~CutBox();
};

#endif // CUTBOX_H
