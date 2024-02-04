#ifndef FIGURY_H
#define FIGURY_H

#include <vector>
#include "Figura.h"

class Figury {
private:
    std::vector<Figura*> figury;

public:
    void DodajFigure(Figura* figura);
    void Rysuj() const;
    ~Figury();
};

#endif