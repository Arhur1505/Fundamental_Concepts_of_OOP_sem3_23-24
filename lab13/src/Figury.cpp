#include "Figury.h"

void Figury::DodajFigure(Figura* figura) {
    figury.push_back(figura);
}

void Figury::Rysuj() const {
    for (const auto& figura : figury) {
        figura->Rysuj();
    }
}

Figury::~Figury() {
    for (const auto& figura : figury) {
        delete figura;
    }
    figury.clear();
}
