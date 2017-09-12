#include "stdafx.h"
#include "interface.h"
#include <iostream>
using namespace std;

void print(numero &numero_, int xy)
{
	numero_.x = xy;

cout << numero_.x<<endl;
}