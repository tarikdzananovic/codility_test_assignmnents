/***************************************************************************//**
 *  @file
 *  @brief see @ref cyclic_rotation.h
 ******************************************************************************/

#include <iostream>
#include "cyclic_rotation.h"

static int res[100];

 /* see header file*/
Results cyclic_rotation(int A[], int N, int K) {
	struct Results result;

	memcpy(res, A, N * sizeof(int));

	// write your code in C99 (gcc 6.2.0)
	for (int j = 0; j < K; j++)
	{
		res[0] = A[N - 1];
		for (int i = 1; i < N; i++)
		{
			res[i] = A[i - 1];
		}
		memcpy(A, res, N * sizeof(int));
	}
	result.A = res;
	result.N = N;
	return result;
}