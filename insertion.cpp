#include <iostream>
#include "selection.hpp"

using namespace std;

void Selection::selection_sort(int list, int last)
{
	int i, key, j;
	for (i=1; i <n; i++)
	{
		key = arr[i];
		j = i-1;
		 while (j >= 0 && arr[j].num > key)
		 {
			 arr[j+1].num = arr[j].num;
			 j--;
		 }
		 arr[j+1].num = key;
	 }
	 return 0;

}


