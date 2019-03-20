#include "pch.h"
#include <iostream>
#include "Calculator.h"
#include<string>
#include<cstdio>
using namespace std;
int main()
{
	double x = 0.0;
	double y = 0.0;
	double result = 0.0;
	char oper = '+';
	char exit = '0';
	string transform;
	FILE*ptrFile;
	fopen_s(&ptrFile, "Calculator.txt", "a");
	cout << "Calculator Console Application" << endl << endl;
	cout << "Please enter the operation to perform. Format: a+b |a-b| a*b a/b" << endl;
	const char* Hepter1 = "Calculator Console Application\n";
	fputs(Hepter1, ptrFile);
	const char* Hepter2 = "Please enter the operation to perform. Format: a+b |a-b| a*b a/b\n\n\n";
	fputs(Hepter2, ptrFile);
	Calculator c;
	do {
		cin >> x >> oper >> y;
		if ((y == 0) && (oper == '/')) {
			const char* sentence = "It is divide by zero\n";
			fputs(sentence, ptrFile);
		}
		if (cin.fail()) {
			cin.clear();
			cout << "It is error" << endl;
			break;
		}
		else {
			result = c.Calculat(x, oper, y);
			cout << result << endl;
			transform = "Result of operation " + to_string(x) + oper + to_string(y) + "=" + to_string(result) + "\n";
			const char*c = transform.c_str();
			fputs(c, ptrFile);
		}
		cout << "Do you wish to continue Y/N" << endl;
		cin >> exit;
		if (exit == 'N')return 1;
	} while (exit != 'N');
}