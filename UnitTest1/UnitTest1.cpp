#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\user\Desktop\Лаб. з АП\Лабораторні 5.1-5.6\Lab_5.1\Lab_5.1\Lab_5.1\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double h;
				h= (0, 0);
                Assert::AreEqual(h,0.);
		}
	};
}
