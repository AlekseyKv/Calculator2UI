#include "pch.h"
#include "Calculator.h"


double Calculator::Calculat(double x, char oper, double y)
{
	
	switch (oper)
	{
	case '+':
		return x + y;
	case '-':
		return x - y;
	case '*':
		return x * y;
	case '/':
		return x / y;
	default:
		return 0;
	}

}



