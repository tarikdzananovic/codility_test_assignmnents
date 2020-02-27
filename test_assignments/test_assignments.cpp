// test_assignments.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "missing_integer.h"
#include "binary_gap.h"
#include "cyclic_rotation.h"

static void find_missing_integer();
static void find_binary_gap();
static void find_cyclic_rotation();


int main()
{
	find_missing_integer();
	find_binary_gap();
	find_cyclic_rotation();
}

static void find_missing_integer()
{
	int A1[] = { 1, 3, 6, 4, 1, 2 };
	int A2[] = { 1, 2, 3 };
	int A3[] = { -1, -3 };
	int A4[] = { -1, 2, 6, 12, 19, 8, 3, 5, 1 };

	std::cout << "Missing integer result: " << find_missing_integer(A1, sizeof(A1) / sizeof(int)) << "\n";
	std::cout << "Missing integer result: " << find_missing_integer(A2, sizeof(A2) / sizeof(int)) << "\n";
	std::cout << "Missing integer result: " << find_missing_integer(A3, sizeof(A3) / sizeof(int)) << "\n";
	std::cout << "Missing integer result: " << find_missing_integer(A4, sizeof(A4) / sizeof(int)) << "\n";
}

static void find_binary_gap()
{
	int N1 = 1041;
	std::cout << "Binary gap result: " << binary_gap(N1) << "\n";

	int N2 = 15;
	std::cout << "Binary gap result: " << binary_gap(N2) << "\n";

	int N3 = 32;
	std::cout << "Binary gap result: " << binary_gap(N3) << "\n";

	int N4 = 5;
	std::cout << "Binary gap result: " << binary_gap(N4) << "\n";

	int N5 = 328;
	std::cout << "Binary gap result: " << binary_gap(N5) << "\n";

	int N6 = 11;
	std::cout << "Binary gap result: " << binary_gap(N6) << "\n";

	int N7 = 19;
	std::cout << "Binary gap result: " << binary_gap(N7) << "\n";

	int N8 = 42;
	std::cout << "Binary gap result: " << binary_gap(N8) << "\n";

	int N9 = 1162;
	std::cout << "Binary gap result: " << binary_gap(N9) << "\n";

	int N10 = 1376796946;
	std::cout << "Binary gap result: " << binary_gap(N10) << "\n";
}

static void find_cyclic_rotation()
{
	int A1[] = { 3, 8, 9, 7, 6};
	int K1 = 3;
	Results r1 = cyclic_rotation(A1, sizeof(A1) / sizeof(int), K1);
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Cyclic rotated array element: " << r1.A[i] << "\n";
	}

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
