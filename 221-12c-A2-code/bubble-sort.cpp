//============================================================================
// Name        : bubble-sort.cpp
// Author      : 
// Date        :
// Copyright   : 
// Description : Implementation of bubble sort in C++
//============================================================================

#include "sort.h"

void 
BubbleSort::sort(int A[], int size)			// main entry point
{
  num_cmps = 0;
  int num_swaps = 1;
  int num_sorted = 1;
  while(num_swaps > 0 && num_sorted < size)
  {
	num_swaps = 0;
	num_cmps += 2;
	for(int n = num_sorted; n < size ; ++n)
	{
		num_swaps = 0;
		num_cmps++;
		if(A[n] < A[n-1])
		{
			int temp = A[n];
			A[n] = A[n-1];
			A[n-1] = temp;
			num_swaps++;
		}
	}
	num_cmps++;
	num_sorted++;
	}
	num_cmps+=2;
}
