#include "stdafx.h"
#include "CppUnitTest.h"
#include "../CalculatorUI/Calculator.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Calculator ws;
			Assert::AreEqual(2.0, ws.Calculat(1.0, '+', 1.0));
		}

	};
}