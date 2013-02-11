//============================================================================
// Name        : selection-sort.cpp
// Author      : 
// Date        :
// Copyright   : 
// Description : Implementation of selection sort in C++
//============================================================================

#include "sort.h"
#include <iostream>

void
SelectionSort::sort(int A[], int size)				// main entry point
{
	num_cmps = 0;
	int min = 0;
	int temp = 0;
	for(int n = 1; n < size; ++n)
	{	
		num_cmps++;
		min = n-1;
		for(int j = n; j < size; ++n)
		{
			num_cmps++;
			if(A[j] < A[min])
				min = j;
		}
		num_cmps++;
		temp = A[n];
		A[n] = A[min];
		A[min] = temp;
	}
}
