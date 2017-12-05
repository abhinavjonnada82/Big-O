#include <iostream>

using namespace std;


#ifndef __SELECTION__
#define __SELECTION__

class Selection
{
	int i, j, size, key;

public:
    Selection();
    void selection_sort(int array[], int last);
}

#endif
