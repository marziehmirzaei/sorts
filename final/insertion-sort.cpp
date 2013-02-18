//============================================================================
// Name        : insertion-sort.cpp
// Author      : 
// Date        :
// Copyright   : 
// Description : Implementation of insertion sort in C++
//============================================================================

#include "sort.h"
#include <ostream>

void
InsertionSort::sort(int A[], int size)				// main entry point
{
int j=0;
int temp=0;
int num=0;
num_cmps++;
        for (int i=1; i<size; ++i) 
        {
           temp= A[i];
           j = i-1;
		   num_cmps+=3;
		   for(num=0; (j >= 0) && (A[j] > temp); num+=2)
           {
               A[j+1] = A[j];
               j -= 1;
			   num_cmps+=2;
           }
            A[j+1]=temp;
        }
  }

/*int i=0;
int j=0;
int key=0;
{
for (j=1; j<size; j++)
{
key= array[j];
for (i=j-1; (i>=0) && (array[i]<key); i++)
{
array[i+1]= array[i];
}
array[i+1]=key;
}
return;
}
while(A[i]<A[i-1])
			{
			temp=A[i-1];
			A[i-temp] = A[i];
			A[i]=temp;
			}
			
			
  int temp=0;
  int j = 0;
	for(int i=1; i<size; ++i)
	{
	temp=A[i];
	for(j=i-1; j>=0 && A[j]<temp; ++j)
	A[j+1]=A[j];
	}
	A[j+1]=temp;			*/
		