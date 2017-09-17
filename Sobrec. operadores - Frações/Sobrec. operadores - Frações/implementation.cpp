#include "stdafx.h"
#include <iostream>
#include "interface.h"
using namespace std;

int RationalNumber::mmc(int num1, int num2) 
{

	int resto, a, b;

	a = num1;
	b = num2;

	do {
		resto = a % b;

		a = b;
		b = resto;

	} while (resto != 0);

	return (num1 * num2) / a;
}

RationalNumber::RationalNumber()
{
	numerator = 0;
	denominator = 1;
}
RationalNumber::RationalNumber(int num, int den)
{
	//if (den == 0)
		//throw  invalid_argument("\nDenominador da fracao igual a 0");
	if (num%den == 0)
	{
		num = num / den;
		den = den / den;
	}
	else if (den%num == 0)
	{
		den = den / num;
		num = num / num;
	}

	if (den< 0)
	{
		num = -1 * num;
		den = -1 * den;
	}

	numerator = num;
	denominator = den;
}

RationalNumber::RationalNumber(const RationalNumber &right)
{
	numerator = right.numerator;
	denominator = right.denominator;
}

RationalNumber &RationalNumber::operator=(const RationalNumber &right)
{
	numerator = right.numerator;
	denominator = right.denominator;
	
	return *this;
}
RationalNumber &RationalNumber::operator+(const RationalNumber &right)
{
	int numerator1, numerator2;
	int commom_denominator = mmc(denominator, right.denominator);//Calcula o mmc entre os denominadores

	numerator1 = commom_denominator / denominator*numerator;
	numerator2 = commom_denominator / right.denominator*right.numerator;

	numerator = numerator1 + numerator2;// Soma os numeadores calculados com o mmc

	return *this;// Retorna o próprio objeto, permetindo assim concecutivas somas de fracoes
}

RationalNumber &RationalNumber::operator-(const RationalNumber &right)
{
	int numerator1, numerator2;
	int commom_denominator = mmc(denominator, right.denominator);//Calcula o mmc entre os denominadores

	numerator1 = commom_denominator / denominator*numerator;
	numerator2 = commom_denominator / right.denominator*right.numerator;

	numerator = numerator1 - numerator2;// Soma os numeradores calculados com o mmc

	return *this;// Retorna o próprio objeto, permetindo assim consecutivas somas de fracoes
}

RationalNumber &RationalNumber::operator*(const RationalNumber &right)
{
	numerator= numerator*right.numerator;
	denominator= denominator*right.denominator;

	return *this;
}

RationalNumber &RationalNumber::operator/(const RationalNumber &right)
{
	numerator = numerator*right.denominator;
	denominator = denominator*right.numerator;

	return *this;
}


int RationalNumber::get_num()
{
	return numerator;
}

int RationalNumber::get_den()
{
	return denominator;
}