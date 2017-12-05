#include <iostream>

using namespace std;


struct quick_arr;
{
	int num;
	string str;
}

class Quick_sort

{
	int mid;
	int left;
	int right;
	quick_arr array1[];
    public:
    Quick_sort();
    void inita_arra(int data);
    void assign_data(int index, int num_data, string str_data);
    void quick_sort();
    void exchange(int *xp, int *yp);
    void print();
    
};



