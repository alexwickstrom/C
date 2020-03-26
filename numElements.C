#include <stdio.h>

// Get the number of elements in an array.
// Divide the size of the array in bytes by the size of the first element in bytes. 
#define NELEMS(arr) (sizeof(arr) / sizeof(arr[0]))
