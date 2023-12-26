#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <vector>

using namespace std;

class Car {
    friend int Compare(const Car& car_1, const Car& car_2);

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

    /** @brief obsluga inta
    *
    * Zmienia wartosc product na int
    *
    * @return funkcja zwraca int
    */
    operator int() const;

    /** @brief obsluga to_string
    *
    * Funkcja zmienia wartosc product na string
    *
    * @return funkcja zwraca string
    */
    string ToString() const;

    /** @brief obsluga string
    *
    * Zmienia wartosc product na string
    *
    * @return funkcja zwraca string
    */
    operator string() const;

    /** @brief getter do Y cara
    * @return funkcja zwraca int
    */
    int GetY() const;

    /** @brief Konstruktor 
    *
    * Inicjalizuje wartosci dla x i y
    *
    * @param[in] a  int wartosc ktora chcemy przypisac
    * @return funkcja typu void- nie zwraca wartosci
    */
    Car(int a);
};

#endif