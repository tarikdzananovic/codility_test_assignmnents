/***************************************************************************//**
 *  @file
 *  @brief see @ref missing_integer.h
 ******************************************************************************/

#include "missing_integer.h"

static void sort_array(int* A, int N)
{
	for (int i = 0; i < N; ++i)
	{
		for (int j = i + 1; j < N; ++j)
		{
			if (A[i] > A[j])
			{
				int tmp = A[i];
				A[i] = A[j];
				A[j] = tmp;

			}
		}
	}
}

static int remove_duplicit_from_array(int* A, int N)
{
	int size = N;
	for (int i = 0; i < size; ++i)
	{
		for (int j = i + 1; j < size; ++j)
		{
			if (A[i] == A[j])
			{
				/* Delete the current duplicate element */
				for (int k = j; k < size; k++)
				{
					A[k] = A[k + 1];
				}

				/* Decrement size after removing duplicate element */
				size--;

				/* If shifting of elements occur then don't increment j */
				j--;
			}
		}
	}

	return size;
}

/* see header file*/
int find_missing_integer(int A[], int N)
{
	sort_array(A, N);
	int size = remove_duplicit_from_array(A, N);
	int result = 1;
	for (int i = 0; i < size; i++)
	{
		if ((A[i] <= result) && (A[i] > 0))
		{
			result++;;
		}
		else
		{
			continue;
		}
	}
	return result;
}