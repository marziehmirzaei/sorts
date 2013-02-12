//============================================================================
// Name        : insertion-sort.cpp
// Author      : 
// Date        :
// Copyright   : 
// Description : Implementation of insertion sort in C++
//============================================================================

#include "sort.h"

void
InsertionSort::sort(int A[], int size)				// main entry point
{
  /* Complete this function with the implementation of insertion sort algorithm 
  Record number of comparisons in variable num_cmps of class Sort
  */
  int temp;
	for(int i=1; i<size-1; ++i)
	{
		if(A[i]<A[i-1])
		{
			int temp=2;
			while(A[i]<A[i-temp]&&(i-temp)>=0])
			{
			++temp;
			}
		temp=A[i-temp];
		A[i]=temp;
		temp=A[i];
		}
	
	}
  }