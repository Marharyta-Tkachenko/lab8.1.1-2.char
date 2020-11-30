#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[20] = "sssSQqqq";
			char q[] = "SQ";
			char q1[] = "QS";
			bool b = false;
			b = (strstr(str, q));
			Assert::AreEqual(b, true);
		}
	};
}
