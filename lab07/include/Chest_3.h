#ifndef CHEST_3_H
#define CHEST_3_H

#include <iostream>
using namespace std;

class Chest_3 {
private:
    int* tab; 
    int capacity; 
    int size = 0;

public:
    /** @brief Konstruktor Chest_3.
    *
    * @param[in] a rozmiar tablicy do zaalokowania.
    * @return Nic nie zwraca.
    */
    Chest_3(int a);

    /** @brief Dekonstrukto Chest_3.
    *
    * @return Nic nie zwraca.
    */
    ~Chest_3();

    /** @brief Metoda usuwa pierwszy element z tablicy int.
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

    /** @brief Metoda alokuje nową tablice o dwukrotnie większym rozmiarze.
    *
    * @return Metoda nic nie zwraca.
    */
    void Resize();
};

#endif