#pragma once
class Str
{
public:
	Str();
	Str(const char* str);
	Str(const Str&);
	~Str();
	int setStr(const char* str);
	void print();
private:
	char* p;
};

