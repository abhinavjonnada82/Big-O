#include <iostream>
#include "bubble.hpp"

using namespace std;



int bubble_sort(list array1[], int last)
{
	int curr = 0;
	int count = 0;
	bool sorted = false;
	while (curr <= last && sorted == false)
	{
	 count++;
	 int walker = last;	
	  sorted = true;
	  
	  while (walker > curr)
	  {  
		  if (array1[walker].num < array1[walker -1].num)
		  {
			sorted = false;
			
			exchange( &walker, &walker-1);
		}
		  walker--;
	  }
	  curr ++;
  }
  return count;
}
  
  void exchange(int *xp; int *yp)
  {
	  int temp = *xp;
	  *xp = *yp;
	  *yp = temp;
  }
  

			  
	
