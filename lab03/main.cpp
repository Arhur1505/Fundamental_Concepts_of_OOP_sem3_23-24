// * do alokacji i dealokacji pamięci używaj odpowiednich operatorów
// * wybranych spośród następującej listy: new, new [], delete, delete []
// * zdefiniuj zmienną PRINT_RESULTS w CMakeLists.txt, przy wywołaniu cmake ../ -DPRINT_RESULTS=1

#include <iostream>
#include "Array.h"
using namespace std;


int main(int argc, char** argv) 
{
	int * array;
	int arraySize = 10;
	
	array = InitArray(arraySize);

	CreateSequence(array, arraySize);
	
	int newArraySize = arraySize + 1;	
	
	array = ChangeArraySize(array, arraySize, newArraySize);

	array[arraySize] = 1024;

	if( PRINT_RESULTS )	// Zmienna zdefiniowana na poziomie CMakeLists.txt
	{
		for(int i = 0; i < newArraySize; i++)
			cout << "2^" << i << " = " << array[i] << endl;
	}
	
	DeleteArray(array);

	return 0;
}

/** Wynik dzialania programu:
2^0 = 1
2^1 = 2
2^2 = 4
2^3 = 8
2^4 = 16
2^5 = 32
2^6 = 64
2^7 = 128
2^8 = 256
2^9 = 512
2^10 = 1024
*/