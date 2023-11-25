#ifndef LIST_H
#define LIST_H

// Element listy
struct slistEl
{
  slistEl * next;
  char data;
};

// Lista
struct slist
{
  slistEl * head;
};

/** @brief Funkcja inicjalizuje liste.
*
* @param[in] list  wskaznik do listy
* @return funkcja nic nie zwraca\n
*/
void init(slist * list);

/** @brief Wstawianie elementu na koniec listy.
*
* @param[in] list  wskaznik do listy
* @param[in] c  wartosc pola data dla elementu, który mamy wstawic
* @return funkcja nic nie zwraca\n
*/
void push_back(slist * list, char c);

/** @brief Wstawianie elementu do listy po elemencie, do którego mamy wskaznik.
*
* @param[in] e  wskaznik do elementu listy
* @param[in] c  wartosc pola data dla elementu, który mamy wstawic
* @return funkcja nic nie zwraca\n
*/
void insert_after(slistEl * e, char c);

/** @brief Wyszukanie elementu w liscie.
*
* Funkcja przeszukuje liste w celu znalezienia podanego elementu.
*
* @param[in] list  wskaznik do listy
* @param[in] c  wartosc szukanego elementu 
* @return wskaznik do pierwszego elementu listy o wartosci c jesli taki element jest w liscie \n
* NULL jesli lista nie posiada elementu o wartosci c
*/
slistEl * find(slist * list, char c);

/** @brief Wyświetlanie listy.
*
* @param[in] list wskaźnik do listy
* @return funkcja nic nie zwraca\n
*/
void printl(slist * list);

#endif
