#include "pch.h"
#include "CppUnitTest.h"
#include "../Program/CRealNumber.h"
#include "../Program/CRealNumber.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			RealNumber rr(33.1);
			Assert::AreEqual(rr.GetX(), 33.1f);
		}
	};
}
