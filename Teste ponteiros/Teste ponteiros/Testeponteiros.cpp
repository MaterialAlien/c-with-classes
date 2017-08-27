#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int val = 1;
	int &ref = val;
	cout << "val is " << val << endl;
	cout << "ref is " << ref << endl;
	cout << "Setting val to 2" << endl;
	val = 2;
	cout << "val is " << val << endl;
	cout << "ref is " << ref << endl;
	cout << "Setting ref to 3" << endl;
	ref = 3;
	cout << "val is " << val << endl;
	cout << "ref is " << ref << endl;
	
#if WIN32 
	system("pause");
#endif
	return 0;
}
