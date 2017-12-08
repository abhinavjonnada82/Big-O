#include <iostream>
#include "quick.hpp"

using namespace std;



void quick_sort(list array[], int left, int right, int & count);
{
  
	int i = left; j = right;
	int temp;
	int pivot = array[(left + right) / 2];
	
	while (i <= j)
	{
		while (array[i].key < array[pivot].key)
	    	i++;
		while (array.key[j] > array[pivot].key)
		    j--;
		if (i <= j)
		{
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			i++;
			j--;
		}
		count++;
	};
	
	if (left < j)
	    quick_sort(array,left, j, count);
	if (i < right)
	    sort(array, i, right, count);
	  
	  return; 
	}
	
