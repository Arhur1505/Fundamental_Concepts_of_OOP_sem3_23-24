#ifndef ARRAY_H
#define ARRAY_H


/** @brief Funkcja iniciuje tablice int.
*
* @param[in] arraySize rozmiar tablicy jaka ma być zaalokowana.
* @return funkcja zwraca wskaznik do tablicy.
*/
int *InitArray(int arraySize);

/** @brief Funkcja wpisuje do tablicy sekwencje kolejnych potęg dwójki.
*
* @param[in] array wskaźnik do tablicy.
* @param[in] arraySize rozmiar tablicy.
* @return funkcja nic nie zwraca.
*/
void CreateSequence(int *array, int arraySize);

/** @brief Funkcja zmienia rozmiar tablicy.
*
* @param[in] array wskaźnik do tablicy.
* @param[in] arraySize stary rozmiar tablicy.
* @param[in] newArraySize nowy rozmiar tablicy.
* @return funkcja zwraca wskaźnik do tablicy
*/
int *ChangeArraySize(int *array, int arraySize, int newArraySize);

/** @brief Funkcja zwalnia pamięć po tablicy int.
*
* @param[in] array wskaźnik do tablicy.
* @return funkcja nic nie zwraca.
*/
void DeleteArray(int *array);

#endif