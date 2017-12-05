#include <iostream>
#include "quick.hpp"

using namespace std;

Quick_sort:: Quick_sort()
{   
	  mid = 0;
	  left = 0;
	  right = 0
	  count = 0;
	  return;
}

void Quick_sort::assign_data(int index, int num_data, string str_data)
{
	array1[index].num = num_data;
	array1[index].str = str_data;
}



void Quick_sort::quick_sort()
{
  
	int i = left; j = right;
	in temp;
	int pivot = array[(left + right) / 2];
	
	while (i <= J)
	{
		while (array[i] < pivot)
	    	i++;
		while (array[j] > pivot)
		    j--;
		if (i <= j)
		{
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			i++;
			j--;
		}
	};
	
	if (left < j)
	    sort(array, size, left, j)
	if (i < right)
	    sort(array, size, i, right)
	}
	
