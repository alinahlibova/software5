#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Alina\Desktop\c++\software5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(calculate_Tests)
	{
	public:

		TEST_METHOD(calculate_get3and7_9returned)
		{
			int n = 3;
			int x = 4;
			int expected = 1000;

			int actual = calculate(n, x);

			Assert::AreEqual(expected, actual);

		}
	public:
		TEST_METHOD(calculate_get5and7_77returned)
		{
			int n = 5;
			int x = 7;
			int expected = 77;

			int actual = calculate(n, x);

			Assert::AreEqual(expected, actual);
		}
    };
	TEST_CLASS(CheckValidParams_Tests)
	{
	public:
		TEST_METHOD(checkValidParams_get10_exceptionNotThrown)
		{
			int n = 10;

			try
			{
				checkValidParams(n);
				Assert::IsTrue(true);
			}
			catch (...)
			{
				Assert::Fail();
			}
		}

	public:
		TEST_METHOD(checkValidParams_get1_exceptionThrown)
		{
			int n = 3;

			try
			{
				checkValidParams(n);
				Assert::Fail();
			}
			catch (...)
			{
				Assert::IsTrue(true);
			}
		}
};
}
