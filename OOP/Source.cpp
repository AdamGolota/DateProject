#include "iostream"
#include "Date.h"
#include "conio.h"
#include "Str.h"

// This code doesn't really matter
// Used for tests mostly
// Latin only!

int main() {
	char str[256];
	std::cout << "Enter a string: ";
	gets_s(str, 256);
	Str sObjEntered;
	sObjEntered.setStr(str);
	sObjEntered.print();
	Str sObj1, sObj2("String"), sObjArr[5];
	std::cout << "\nEmpty Arr Element: ";
	sObjArr[4].print();
	std::cout << "\nObj 1: ";
	sObj1.print();
	std::cout << "\nObj 2: ";
	sObj2.print();
	std::cout << "\nObj3 = Obj 1...";
	Str sObj3 = sObj2;
	std::cout << "\nObj 3 before copying: ";
	sObj3.print();
	sObj3 = sObj1;
	std::cout << "\nObj3 = Obj 1...";
	std::cout << "\nObj 3 after copying: ";
	sObj3.print();
	std::cout << "\nObj 2 after copying: ";
	sObj2.print();
	_getch();
	return 0;
}