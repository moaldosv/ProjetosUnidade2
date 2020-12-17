#ifndef CUTSPHERE_H
#define CUTSPHERE_H
#include "figurageometrica.h"

/**
 * CutSphere class - classe CutSphere derivada de FiguraGeometrica.
 * Uma esfera deverá ser especificada para remoção conforme a posição do centro e seu raio em pixels.
 */

class CutSphere : public FiguraGeometrica
{
    int xcenter, ycenter, zcenter, radius;
public:
    CutSphere(int _xcenter, int _ycenter, int _zcenter, int _radius);
    void draw(Sculptor &t);
    ~CutSphere();

};

#endif // CUTSPHERE_H
