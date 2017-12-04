#include <iostream>

using namespace std;


struct bub_arr
{
	int num;
	string str;
}

class Bubble_sort

{
	int curr;
	bool sorted;
	int size;
	int walker;
	int last;
	bub_arr array1;
    public:
    Bubble_sort();
    void inita_arra(int data);
    void assign_data(int index, int num_data, string str_data);
    void bubble_sort();
    void exchange(int *xp, int *yp);
    void print();
    
};



