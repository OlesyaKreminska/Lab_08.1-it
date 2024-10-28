#define _CRT_SECURE_NO_WARNINGS
#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_08.1 it/Lab_08.1 it.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81it
{
	TEST_CLASS(UnitTest81it)
	{
	public:

		// Тест для функції Count
		TEST_METHOD(TestCount)
		{
			char str1[] = "n1o";
			char str2[] = "hello n2o world";
			char str3[] = "no pattern here";
			char str4[] = "n3o n4o n5o";

			Assert::AreEqual(1, Count(str1));  // Один збіг
			Assert::AreEqual(1, Count(str2));  // Один збіг
			Assert::AreEqual(0, Count(str3));  // Жодного збігу
			Assert::AreEqual(3, Count(str4));  // Три збіги
		}

		// Тест для функції Change
		TEST_METHOD(TestChange)
		{
			char str1[] = "n1o";
			char str2[] = "hello n2o world";
			char str3[] = "no pattern here";
			char str4[] = "n3o n4o n5o";

			char expected1[] = "**";
			char expected2[] = "hello ** world";
			char expected3[] = "no pattern here";
			char expected4[] = "** ** **";

			// Перевіряємо результати змінених рядків
			Assert::AreEqual(expected1, Change(str1));
			Assert::AreEqual(expected2, Change(str2));
			Assert::AreEqual(expected3, Change(str3));
			Assert::AreEqual(expected4, Change(str4));
		}
	};
}
