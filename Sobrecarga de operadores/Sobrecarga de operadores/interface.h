#pragma once
#include "stdafx.h"
#include <string>
using namespace std;

class palavra
{
private:
	string word;
public:
	string operator*(const int &);
	void get_word();
	string show_word() const;
};
