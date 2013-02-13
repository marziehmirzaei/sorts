//============================================================================
// Name        : shell-sort.cpp
// Author      : 
// Date        :
// Copyright   : 
// Description : Implementation of shell sort in C++
//============================================================================

#include "sort.h"
#include <iostream>

void
ShellSort::sort(int A[], int size)
{
 num_cmps = 0;
 int step = size/2 -1;
 while(step >= 1)
 {
 for(int j = 0; j < step -1; ++j)
	 for(int n = step + j; n < size; n += step)
	 {
		if(A[n] < A[n - step])
		{
			int index = n;
			while(A[index] < A[index - step])
			{
				int temp = A[index];
				A[index] = A[index - step];
				A[index - step] = temp;
				index -= step;
			}
		}
	 }
	 step = (step + 1) / 2 - 1;
	 }
}
