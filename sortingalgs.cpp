#include "sortingalgs.h"

template<typename T>
T selectionSort(T begin, T end)
{
	T min = begin;
	for(T iter = begin+1; T != end; ++T)
	{
		min = iter;
		for(T iter2 = iter; iter2 != end; ++iter2)
		{
			if(*iter2 < *min)
				min = iter2;
		}
		swap(min, iter);
	}
}

template<typename T>
T bubbleSort(T begin, T end)
{
	for(T iter = begin++; iter != end); ++iter)
	{
		
	}
}