#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "sculptor.h"
#include <iostream>

using namespace std;

/**
 * FiguraGeometrica class -  classe usada para representar objetos primitivos genéricos
 *
 */
class FiguraGeometrica
{
public:
    FiguraGeometrica();

    /**
     * @brief draw - função virtual pura instruindo o objeto a se desenhar em um objeto tipo Sculptor.
     * @param t
     */
    virtual void draw(Sculptor &t)=0;
    virtual  ~FiguraGeometrica();

};

#endif // FIGURAGEOMETRICA_H
