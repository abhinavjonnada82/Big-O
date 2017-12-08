#include <iostream>
#include "selection.hpp"

using namespace std;


int selection_sort(list array[], int last)

int i, j, walker, smallest;
int curr = 0;


for (i = 0; i < n-2; i++)
{
	smallest = curr;
	walker = curr + 1;
	for (j = i +1; j < n ; j++)
	{
		if (array[walker].num < array[smallest].index)
		{
			smallest = walker;
		}
		walker++:
		exchange (curr, smallest);
		curr++;
		x++;
	}
}

void exchange(int *xp; int *yp)
{
	  int temp = *xp;
	  *xp = *yp;
	  *yp = temp;
  }
