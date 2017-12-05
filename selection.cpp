#include <iostream>
#include "selection.hpp"

using namespace std;

Selection::Selection(void)
{
	i = 0;
	j = 0;
	size = 0;
	key = 0;
}

void Selection::selection_sort(int list, int last)

int i, j, walker, smallest;
int curr = 0;

for (i = 0; i < n-1; i++)
{
	smallest = curr;
	walker = curr + 1;
	for (j = i +1; j < n ; j++)
	{
		if (walker[j] < smallest[i])
		{
			smallest = walker;
		}
		exchange (curr, smallest)
		{
			tmep = curr;
			curr = smallest;
			smallest = tmp;
		}
	}
}
