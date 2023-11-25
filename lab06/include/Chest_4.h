#ifndef CHEST_4_H
#define CHEST_4_H

#include <iostream>
#include <vector>
using namespace std;

class Chest_4 {
private:
    std::vector<int> tab;
    
public:
        
    /** @brief Metoda usuwa element z tablicy int.
    *
    * @return Metoda zwraca wartość usuniętego elementu.
    */
    int Remove();

    /** @brief Metoda sprawdza czy tablica jest pusta.
    *
    * @return Metoda zwraca 1 jak jest i 0 jak nie jest.
    */
    bool IsEmpty()const;

    /** @brief Metoda sprawdza czy tablica jest pełna.
    *
    * @return Metoda zwraca 1 jak jest i 0 jak nie jest.
    */
    bool IsFull()const;

    /** @brief Metoda dodaje element na końcu tablicy.
    *
    * @param[in] a wartość dla elementu, który dodajemy.
    * @return Metoda nic nie zwraca
    */
    void Add(int a); 

    /** @brief Metoda czyści tablicę.
    *
    * @return Metoda nic nie zwraca.
    */
    void Clear();

    /** @brief Metoda zwraca aktualną ilość elementów w tablicy.
    *
    * @return Metoda zwraca aktualną ilość elementów w tablicy.
    */
    int Size()const;

    /** @brief Metoda printuje tablice na ekran.
    *
    * @return Metoda nic nie zwraca.
    */
    void Print()const; 
};

#endif