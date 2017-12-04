#include <iostream>
#include "bubble.hpp"

using namespace std;

Bubble_sort::Bubble_sort()
{
	 curr = 0;
	 size = 0;
	 walker = 0;
	 last = 0;
	 count = 0;
	 return;
}

void Bubble_sort::inita_arra(int data)
{
	size = data;
	array[size];
	return;
}

void Bubble_sort::assign_data(int index, int num_data, string str_data)
{
	array1[index].num = num_data;
	array1[index].str = str_data;
}

void Bubble_sort::bubble_sort()

{
	curr = 0;
	sorted = false;
	while (curr <= last && sorted == false)
	{
	  walker = last;	
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
  
  void exchange(int *xp; int *yp)
  {
	  int temp = *xp;
	  *xp = *yp;
	  *yp = temp;
  }
  
  void Bubble_sort::print(){
   
	 for (int i = 0; i<=size; i++)
	 {
		 cout<<"print random numbers"<<array1[i].num<<endl;
		 cout<<"print random string"<<array1[i].str<<endl;
	 }
  
}	  
			  
	
