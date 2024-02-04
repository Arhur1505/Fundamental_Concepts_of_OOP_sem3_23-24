#ifndef FIGURA_H
#define FIGURA_H

class Figura {
    public:
        virtual void Rysuj() const = 0;
        virtual ~Figura() {}
};

#endif