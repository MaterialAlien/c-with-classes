// sizeof.cpp: Define o ponto de entrada para a aplicação de console.
//

#include "stdafx.h"


// Sizeof operator when used on an array name

 // returns the number of bytes in the array.


 #include <iostream>
 using std::cout;
 using std::endl;
 size_t getSize(double *); // prototype

int main()
{
	double array[20];
	cout << "The number of bytes in the array is ";
	cout << sizeof(array);
	cout << "\nThe number of bytes returned by getSize is ";
	cout << getSize(array) << endl;
#if WIN32
	system("PAUSE");
#endif
	 return 0; // indicates successful termination
} // end main

size_t getSize(double *ptr)
{
	 return sizeof(ptr);
 }

