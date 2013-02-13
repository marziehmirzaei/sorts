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
int temp = 0;
 num_cmps = 0;
 int step = size/2;
 while(step > 0)
 {
	for(int i = step; i < size; ++i)
	{
		temp = A[i];
		for(int j = i; j >= step && A[j-step]; j -= step)
		{
			A[j] = A[j-step];
			A[j - step] = temp;
		}
	}
	step /= 2;
}
}
