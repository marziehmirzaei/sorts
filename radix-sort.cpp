//============================================================================
// Name        : radix-sort.cpp
// Author      : Derek Wene
// Date        :
// Copyright   : Sure, lets say its copyrighted.
// Description : Implementation of radix sort in C++
//============================================================================

#include "sort.h"
#include <iostream>
#include <cmath>
using namespace std;

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
digits=log(digits);//find highest digit number
int B[10];
int C[size];
int D[size];
int power=1;
int total = 0;
while(power/10 )//Get all the digits in the array
	{
	for(int j=0; j<size; ++j)//Set digits
		{
			D[j] = (A[j]/(pow(10,power)))%10;
		}
		
	//Counting sort starts here
	for(int k=0; k<size; ++k)//Set number of each digit.
		{
			B[D[k]]++;
		}
	for(int l=0; l<10; ++l)//Do the less than equal part.
		{	
			int temp = B[l];
			B[l] = total;
			total += temp;
		}
	for(int m=0; m<size; ++m)//Actual Sorting Here
		{
		C[B[D[m]]]=A[m];
		++B[D[m]];
		}
	for(int n=0; n<size; ++n)//reset A with new sorted part
		{
			A[n] = C[n];
			C[n] = 0;
			D[n] = 0;
		}
	for(int n = 0; n < 10; ++n)
		{
		B[n] = 0;
		}
		power += 1;
	}		
		
}
