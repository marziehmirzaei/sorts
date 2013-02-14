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
#include <ostream>
void
RadixSort::sort(int A[], int size)
{
int digits=0;
int x=0;
for(int i =0; i<size; ++i)//Find largest number
	{
		if(A[i]>digits)
		digits=A[i];

	}//log10(digits);//find highest digit number
			std::cout<<"Largest digit found\n";
int B[10];
int C[size];
int D[size];
int power=1;

//while(power<digits)//Get all the digits in the array
	//{
	
	
	
	
for(int a=0; a<size; a++)
	{
	C[a]=0;
	D[a]=0;
	}
for(int b=0; b<10; b++)
	{
	B[b]=0;
	}
	for(int j=0; j<size; ++j)//Set digits
		{
			D[j]=(A[j]/(power))%10;
			std::cout<<D[j];
		}
		std::cout<<"\nDone making digits file\n";
	//Counting sort starts here
	for(int k=0; k<size; ++k)//Set number of each digit.
		{
			++B[D[k]];
		}
				std::cout<<"\nDone first part B\n";
	for(int l=1; l<10; ++l)//Do the less than equal part.
		{	
			B[l]=B[l]+B[l-1];
					std::cout<<B[l]<<" ";
		}
		std::cout<<"Done second part B\n";
		int fix=size-1;
	for(int m=0; m<size; ++m)//Actual Sorting Here
		{
		C[B[D[m]]-1]=A[m];
		--B[D[m]];
		std::cout<<"m="<<m<<'\n';
		}
		std::cout<<"real sorting done\n";
	for(int n=0; n<size; ++n)//reset A with new sorted part
		{
			A[n]=C[n];
		}
		std::cout<<"refeed done\n";
	
	
	
	
	//	if(digits==power)//Detects if done with digits
	//		break;
	//	power*=10;
	//}		
		
}
