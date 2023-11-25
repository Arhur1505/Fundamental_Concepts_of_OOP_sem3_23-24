#include "Array.h"
#include <iostream>

int *InitArray(int arraySize)
{
    int *array = new int[arraySize];
    return array;
}

void CreateSequence(int *array, int arraySize)
{
    array[0] = 1;
    for(int i = 1; i < arraySize; i++)
    {
        array[i] = array[i-1] * 2;
    }
}

int *ChangeArraySize(int *array, int arraySize, int newArraySize)
{
    DeleteArray(array);
    array = InitArray(newArraySize);
    CreateSequence(array, newArraySize);

    return array;
}

void DeleteArray(int *array)
{
    delete [] array;
}
