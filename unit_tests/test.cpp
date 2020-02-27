#include "pch.h"

#include "../test_assignments/binary_gap.h"
#include "../test_assignments/cyclic_rotation.h"


TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

/* Handles test for regular input*/
TEST(BinaryGapTest, HandleRegularInput) {
	EXPECT_EQ(binary_gap(1041), 5);
	EXPECT_EQ(binary_gap(15), 0);
	EXPECT_EQ(binary_gap(32), 0);
	EXPECT_EQ(binary_gap(5), 1);
}

TEST(BinaryGapTest, HandleMedium) {
	EXPECT_EQ(binary_gap(328), 2);
	EXPECT_EQ(binary_gap(11), 1);
}

TEST(CyclicRotattionTest, ExampleTest)
{
	int A1[] = { 3, 8, 9, 7, 6 };
	int K = 3;
	Results res1 = cyclic_rotation(A1, sizeof(A1) / sizeof(int), K);
	int expected_res_array1[] = { 9, 7, 6, 3, 8 };
	EXPECT_TRUE(0 == std::memcmp(res1.A, expected_res_array1, sizeof(expected_res_array1)));

	int A2[] = { 0, 0, 0 };
	K = 1;
	Results res2 = cyclic_rotation(A2, sizeof(A2) / sizeof(int), K);
	int expected_res_array2[] = { 0, 0, 0 };
	EXPECT_TRUE(0 == std::memcmp(res2.A, expected_res_array2, sizeof(expected_res_array2)));

	int A3[] = { 1, 2, 3, 4 };
	K = 4;
	Results res3 = cyclic_rotation(A3, sizeof(A3) / sizeof(int), K);
	int expected_res_array3[] = { 1, 2, 3, 4 };
	EXPECT_TRUE(0 == std::memcmp(res3.A, expected_res_array3, sizeof(expected_res_array3)));
}

TEST(CyclicRotattionTest, CorrectnessTest)
{
	// Emoty array
	int A1[10] = {0};
	int K = 3;
	Results res1 = cyclic_rotation(A1, sizeof(A1) / sizeof(int), K);
	int expected_res_array1[] = { 0 };
	EXPECT_TRUE(0 == std::memcmp(res1.A, expected_res_array1, sizeof(expected_res_array1)));

	// Single element (one element, 0 <= K <= 5)
	int A2[1] = { -4 };
	for (K = 0; K <= 5; K++)
	{
		Results res2 = cyclic_rotation(A2, sizeof(A2) / sizeof(int), K);
		int expected_res_array2[] = { -4 };
		EXPECT_TRUE(0 == std::memcmp(res2.A, expected_res_array2, sizeof(expected_res_array2)));
	}

	int A22[1] = { 0 };
	for (K = 0; K <= 5; K++)
	{
		Results res2 = cyclic_rotation(A22, sizeof(A22) / sizeof(int), K);
		int expected_res_array2[] = { 0 };
		EXPECT_TRUE(0 == std::memcmp(res2.A, expected_res_array2, sizeof(expected_res_array2)));
	}

	int A23[1] = { 1000 };
	for (K = 0; K <= 5; K++)
	{
		Results res2 = cyclic_rotation(A23, sizeof(A23) / sizeof(int), K);
		int expected_res_array2[] = { 1000 };
		EXPECT_TRUE(0 == std::memcmp(res2.A, expected_res_array2, sizeof(expected_res_array2)));
	}

	// double (two elements K<=N)
	int A3[] = { -1000, 5 };
	K = 1;
	Results res3 = cyclic_rotation(A3, sizeof(A3) / sizeof(int), K);
	int expected_res_array3[] = { 5, -1000 };
	EXPECT_TRUE(0 == std::memcmp(res3.A, expected_res_array3, sizeof(expected_res_array3)));

	int A32[] = { -9, 0 };
	K = 2;
	Results res32 = cyclic_rotation(A32, sizeof(A32) / sizeof(int), K);
	int expected_res_array32[] = { -9, 0 };
	EXPECT_TRUE(0 == std::memcmp(res32.A, expected_res_array32, sizeof(expected_res_array32)));
}