/***************************************************************************//**
 *  @file
 *  @brief see @ref binary_gap.h
 ******************************************************************************/

#include <iostream>
#include "binary_gap.h"

 /* see header file*/
int binary_gap(int N) {
	// write your code in C99 (gcc 6.2.0)
	int res = N >> 1;
	uint8_t start_gap = N & 1;
	uint8_t end_gap = 0;
	int gap_current = 0;
	int gap_max = 0;
	while (res > 0)
	{
		end_gap = res & 1;
		if (start_gap && !end_gap)
		{
			gap_current++;
		}
		else
		{
			if (gap_current > gap_max)
			{
				gap_max = gap_current;
			}
			gap_current = 0;
		}
		res = res >> 1;
		if (!start_gap)
		{
			start_gap = res & 1;
		}
	}

	return gap_max;
}