//============================================================================
// Name        : selection-sort.cpp
// Author      : 
// Date        :
// Copyright   : 
// Description : Implementation of selection sort in C++
//============================================================================

#include "sort.h"
#include <iostream>
using namespace std; 
void
SelectionSort::sort(int A[], int size)				// main entry point
{
	cout << "Selection Sort!" << endl;
	num_cmps = 0;
	int min = 0;
	int temp = 0;
	for(int n = 0; n < size; ++n)
	{	
		num_cmps++;
		min = n;
		for(int j = n + 1; j < size; ++j)
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
