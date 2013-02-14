//============================================================================
// Name        : radix-sort.cpp
// Author      : Derek Wene
// Date        :
// Copyright   : Sure, lets say its copyrighted.
// Description : Implementation of radix sort in C++
//============================================================================

#include "sort.h"
#include <iostream>

void
RadixSort::sort(int A[], int size)
{
int digits=0;
int x=0;
for(int i =0; i<size; ++i)//Find largest number
	{
		if(A[i]>digits)
		digits=A[i];
	}
digits=log10(digits);//find highest digit number
int B[10];
int C[size];
int D[size];
pow=1;
while(true)//Get all the digits in the array
	{
	for(int j=0; j<size; ++j)//Set digits
		{
			D[j]=(A[j]/(pow))%10;
		}
		
	//Counting sort starts here
	for(int k=0; k<size; ++k)//Set number of each digit.
		{
			B[D[k]]++;
		}
	for(int l=1; l<10; ++l)//Do the less than equal part.
		{	
			B[l]=B[l]+B[l-1];
		}
	for(int m=0; m<size; ++m)//Actual Sorting Here
		{
		C[B[D[m]]-1]=A[m];
		--B[D[m]];
		}
	for(int n=0; n<size; ++n)//reset A with new sorted part
		{
			A[n]=C[n];
		}
		if(digits=pow/10)//Detects if done with digits
			break;
		pow*=10;
	}		
		
}
