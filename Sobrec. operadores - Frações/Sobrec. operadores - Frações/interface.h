#pragma once

class RationalNumber
{
private:
	int numerator;
	int denominator;
public:
	RationalNumber();
	RationalNumber(int num, int den);
	RationalNumber(const RationalNumber &right);
	RationalNumber &operator+(const RationalNumber &right);
	RationalNumber &operator-(const RationalNumber &right);
	RationalNumber &operator=(const RationalNumber &right);
	RationalNumber &operator*(const RationalNumber &right);
	RationalNumber &operator/(const RationalNumber &right);
	int mmc(int num1, int num2);
	int get_num();
	int get_den();
};

