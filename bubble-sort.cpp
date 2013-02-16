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
  bool done = false;
  while(!done)
  {
	done = true;
	for(int n = 0; n < size ; ++n)
	{
		num_cmps += 2;
		if(A[n] < A[n-1])
		{
			int temp = A[n];
			A[n] = A[n-1];
			A[n-1] = temp;
			done = false;
		}
	}
	num_cmps++;
	}
}
