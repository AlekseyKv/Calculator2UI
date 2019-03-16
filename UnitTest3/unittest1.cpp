#include "stdafx.h"
#include "CppUnitTest.h"
#include "../CalculatorUI/Calculator.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{		
	TEST_CLASS(СalculatorTest)
	{
	public:
		
		TEST_METHOD(shouldReturnCorrectValueWhenUsePlus)
		{
			Calculator ws;
			Assert::AreEqual(7.0, ws.Calculat(6.0, '+', 1.0));
		}
		TEST_METHOD(shouldReturnCorrectValueWhenUseMultiply)
		{
			Calculator ws;
			Assert::AreEqual(15.0, ws.Calculat(5.0, '*', 3.0));
		}
		TEST_METHOD(ShouldReturnCorrectValueWhenUseDivide)
		{
			Calculator ws;
			Assert::AreEqual(4.0, ws.Calculat(16.0, '/', 4.0));
		}
		TEST_METHOD(ShouldReturnCorrectValueWhenUseMinus)
		{
			Calculator ws;
			Assert::AreEqual(23.0, ws.Calculat(25.0, '-', 2.0));
		}
		TEST_METHOD(ShouldReturnTypeDouble)
		{
			Calculator ws;

		}
	};
}