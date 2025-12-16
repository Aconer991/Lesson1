#pragma once

#include <iostream>
#include <string>
#ifndef STRNGBAD_H
#define STRNGBAD_H

using std::string;
class StringBad
{
private:
	char* str;
	int len;
	static int num_strings;
public:
	StringBad(const char* s);
	StringBad();
	~StringBad();

	//дружественная функция
	friend std::ostream& operator<<(std::ostream & os, const StringBad & st);
};
#endif