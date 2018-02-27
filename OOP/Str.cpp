#define _CRT_SECURE_NO_WARNINGS
#include "Str.h"
#include "string.h"
#include "iostream"
Str::Str()
{
	this->p = new char[1];
	this->p[0] = '\0';
}

Str::Str(const char* str) 
{
	int length = strlen(str) + 1;
	this->p = new char[length];
	strcpy(this->p, str);
}

Str::Str(const Str& str)
{
	int length = strlen(str.p) + 1;
	this->p = new char[length];
	strcpy(this->p, str.p);
}


Str::~Str()
{
}

void Str::print() 
{
	std::cout << this->p;

}

int Str::setStr(const char* str) 
{
	int length = strlen(str) + 1;
	delete[] this->p;
	this->p = new char[length];
	strcpy(this->p, str);
	return 0;
}
