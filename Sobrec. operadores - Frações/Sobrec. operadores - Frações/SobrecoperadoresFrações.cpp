// SobrecoperadoresFrações.cpp: Define o ponto de entrada para a aplicação de console.
//

//(RationalNumber Class) Create a class RationalNumber(fractions) with the following capabilities :
//a) Create a constructor that prevents a 0 denominator in a fraction, reduces or simplifies
//fractions that are not in reduced form and avoids negative denominators.
//b) Overload the addition, subtraction, multiplication and division operators for this class.

#include "stdafx.h"
#include <iostream>
#include "interface.h"
using namespace std;

int main()
{
	RationalNumber number1(2, 8), number2(2, 3), number3, number4, number5(3,7),number6(12,14),number7(5,6),numberx;					

	cout << "Fracao 1: "<<number1.get_num() <<" / " << number1.get_den()<<endl;
	cout << "Fracao 2: " << number2.get_num() << " / " << number2.get_den() << endl;

	numberx = number1;
	numberx= numberx + number2;
	cout << "\nSoma das fracoes 1 e 2: " << numberx.get_num() << " / " << numberx.get_den() << endl;

	numberx = numberx - number2 - number2;

	cout << "Diferenca das fracoes 1 e 2: " << numberx.get_num() << " / " << numberx.get_den() << endl;

	number4 = number3 = number1;
	cout << "\nFracao 1 sendo atribuida a fracao 3 e 4....\n";
	cout << "Fracao 3: " << number3.get_num() << " / " << number3.get_den() << endl;
	cout << "Fracao 4: " << number4.get_num() << " / " << number4.get_den() << endl;

	cout << "Fracao 3: " << number3.get_num() << " / " << number3.get_den() << endl;
	cout << "Fracao 5: " << number5.get_num() << " / " << number5.get_den() << endl;
	number3*number5;
	cout << "\nFracao 3 * Fracao 5: " << number3.get_num() << " / " << number3.get_den()<<endl;


	cout << "\nFracao 6: " << number6.get_num() << " / " << number6.get_den() << endl;
	cout << "Fracao 7: " << number7.get_num() << " / " << number7.get_den() << endl;

	number7 / number6;
	cout << "Fracao 7 / Fracao 6: " << number7.get_num() << " / " << number7.get_den() << endl<<endl;




#if WIN32
	system("PAUSE");
#endif

	return 0;
}

