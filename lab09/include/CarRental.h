#ifndef CARRENTAL_H
#define CARRENTAL_H

#include <iostream>
#include <vector>
#include "Car.h"

using namespace std;

class CarRental {

private:
    std::vector<Car> z;
public:
    
    /** @brief Konstruktor domyślny
    *
    * @return Nic nie zwraca
    */
    CarRental();

    /** @brief Konstruktor, który inicjalizuje e1 w wektorze
    *
    * @param[in] e2 Car wartosc ktora chcemy dopisac do wektora
    * @return nic nie zwraca
    */
    CarRental(const Car& e1);

    /** @brief Konstruktor, który inicjalizuje e1 i e2 w wektorze
    *
    * @param[in] e1 Car wartosc ktora chcemy dopisac do wektora
    * @param[in] e2 Car wartosc ktora chcemy dopisac do wektora
    * @return nic nie zwraca
    */
    CarRental(const Car& e1, const Car& e2);

    /** @brief Konstruktor, który inicjalizuje od razu całą tablice Car w CarRental
    *
    * @param[in] n ilośc Carów do wklejenia 
    * @param[in] Car* Tablica Car*
    * @return nic nie zwraca
    */
    CarRental(int n, Car* arr[]);

    /** @brief Konstruktor kopiujący
    *
    * @param[in] cars to co mamy przekopiować
    * @return nic nie zwraca
    */
    CarRental(const std::vector<Car>& cars);

    /** @brief Konstruktor kopiujący
    *
    * @param[in] other to co mamy przekopiować
    * @return nic nie zwraca
    */
    CarRental(const CarRental & other);

    /** @brief Konstruktor kopiujący
    *
    * @param[in] other to co mamy przekopiować
    * @return nic nie zwraca
    */
    CarRental(CarRental && other) noexcept;
    
    /** @brief Dodawanie elementu vectora
    *
    * Funkcja dodaje element na koniec wektora
    *
    * @return funkcja typu void- nie zwraca wartosci
    */
    void Add(const Car& car);

    /** @brief Usuwa jeden samochód z końca
    *
    * @return nic nie zwraca
    */
    void Remove();

    /** @brief Czyści CarRental z Car
    *
    * @return nic nie zwraca
    */
    void Clear();

    /** @brief Wyświetla wszystkie samochody
    *
    * @return nic nie zwraca
    */
    void Print() const;

     
    /** @brief Wypisywanie zawartosci vectora
    *
    * Funkcja wypisuje zawartosc wektora
    *
    * @return funkcja typu void- nie zwraca wartosci
    */ 
    CarRental& operator = (CarRental&& other);

    /** @brief obsluga inta
    *
    * Zmienia wartosc product na int
    *
    * @return funkcja zwraca int
    */
    operator int() const;
};

#endif
