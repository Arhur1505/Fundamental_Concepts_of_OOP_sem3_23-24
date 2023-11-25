// * wszystkie funkcje w plikach *.h powinny być okomentowane (patrz przyklad w pliku List.h (format pod Doxygena))
// * do alokacji i dealokacji pamięci używaj operatorów: new i delete

#include <iostream>
#include "List.h"
using namespace std;


int main(int argc, char** argv) 
{
  slist List;
  slistEl* p;
	
  init(&List);
	
  push_back(&List, 'L');
  push_back(&List, 'a');
  push_back(&List, 't');
  
  p = find(&List, 'a');
  if( p )
    insert_after(p, 'p');

  push_back(&List, 'o');

  p = find(&List, 'o');
  if( p )
    insert_after(p, 'p');

  printl(&List);

  return 0;
}

/** Wynik dzialania programu:
Moja lista: <Laptop>
*/
