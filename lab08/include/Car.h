#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <vector>

using namespace std;

class Car {
private:
    int x;
    int y;

public:

    /** @brief Konstruktor domyślny
    *
    * @return Nic nie zwraca
    */
    Car();

    /** @brief Konstruktor
    *
    * @param[in] b wartość dla x
    * @param[in] a wartość dla y
    * @return Nic nie zwraca
    */
    Car(int a, int b);

    /** @brief Ustawia y
    *
    * @param[in] y wartość dla y
    * @return Nic nie zwraca
    */
    void SetCard(int y);

    /** @brief Wyświetla Car na ekran
    *
    * @return Nic nie zwraca
    */
    void Print() const;
};

#endif