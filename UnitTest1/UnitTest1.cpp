#include "pch.h"
#include "CppUnitTest.h"
#include "..\CICDGroup2\CICDGroup2.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			auto val = TestCase(5);
			Assert::AreEqual(600, val);
		}
	};
}
