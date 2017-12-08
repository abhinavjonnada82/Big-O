#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include "data.cpp"


using namespace std;

void swap_data(list &x, list &y);
void print(list arr[], int n);

const int case1 = 50;
//const int case2 = 5000;
//const int case3 = 10000;
c

int string_length = sizeof(alphanum) - 1;


char gen_RandStr()  // Random string generator function.
{

    return alphanum[rand() % string_length];
}

int gen_RandNum()
{    
	return rand() % 100;
}


int main()
{
    ifstream infile;
    ofstream outfile;
    ofstream sortedfile;
    
    string random_char = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	
	
	list array[case1];
	
    /* initialize random seed: */
    srand (time(NULL));
    
    int key = 0;
    string str = "abcd";
    
    outfile.open("50.txt", ios::trunc);
    for (int i = 0; i< 50; i++)
    {
		key = rand() % 101;
		for (int j = 0; j<5; j++)
		{
			str[j] = random_char [rand() % 52];
		}
		outfile << key << ""<< str << end;
	}
	
	outfile.open("5000.txt", ios::trunc);
    for (int i = 0; i< 5000; i++)
    {
		key = rand() % 101;
		for (int j = 0; j<5; j++)
		{
			str[j] = random_char [rand() % 52];
		}
		outfile << key << ""<< str << end;
	}
	
	outfile.open("10000.txt", ios::trunc);
    for (int i = 0; i< 10000; i++)
    {
		key = rand() % 101;
		for (int j = 0; j<5; j++)
		{
			str[j] = random_char [rand() % 52];
		}
		outfile << key << ""<< str << end;
	}
	
	/////////////////////////////////////////////////////////////////////////////
    infile.open ("50.txt");
    list* array50 = new list[50];
    for (int i = 0; i < 50 ; i++)
    {
		infile >> array50[i].key;
		infile >> array50[i].str;
	}
	infile.close();
	
	infile.open ("5000.txt");
    list* array5000 = new list[5000];
    for (int i = 0; i < 5000 ; i++)
    {
		infile >> array5000[i].key;
		infile >> array5000[i].str;
	}
	infile.close();
	
	infile.open ("10000.txt");
    list* array10000 = new list[10000];
    for (int i = 0; i < 10000 ; i++)
    {
		infile >> array10000[i].key;
		infile >> array10000[i].str;
	}
	infile.close();
	
	infile.open ("10000.txt");
    list* array10000 = new list[10000];
    for (int i = 0; i < 10000 ; i++)
    {
		infile >> array10000[i].key;
		infile >> array10000[i].str;
	}
	infile.close();
	
	infile.open ("10000sorted.txt");
    list* array10000_sorted = new list[10000];
    for (int i = 0; i < 10000 ; i++)
    {
		infile >> array10000_sorted[i].key;
		infile >> array10000_sorted[i].str;
	}
	infile.close();



  

  /* creating another array to hold unsorted values */
     list* array50_copy = new list[50];
     for (int i = 0; i<=50; i++)
     {    
		 array50_copy[i].key = array50[i].key;
		 array50_copy[i].str = array50[i].str;
	 }
	 
	 cout << "Sorting on 50 data entries." << endl;
	 //Selection sort on array50
	 selection_sort(array50, 49);
	 //outputting to file
	 for (int i = 0; i < 50; i++)
	 {
		 outfile << array50[i].key << "" << array50[i].str << endl;
	 }
	 outfile.close();
	 
	 cout<<"--------------------------------------------------------------------------------"<<endl;
	 
	 
	 cout << "Selection sort has been successfull" << endl;
	 cout << "Preparing Bubble sort" << endl;
	 
	 for (int i = 0; i<=50; i++)
     {    
		 array50_copy[i].key = array50[i].key;
		 array50_copy[i].str = array50[i].str;
	 }
	  bubble_sort(array50, 49);
	  outfile.open("buba50.txt", ios::trunc); 
	 //print out the array
	 for (int i = 0; i< 50; i++)
	 {
		 outfile << array50[i].key<< "" << array50[i].str << endl;
		 
	 }
	 outfile.close();
	
     cout<<"--------------------------------------------------------------------------------"<<endl;
	 cout << "Bubble sort has been successfull" << endl;
	 cout << "Preparing Quick sort" << endl;
	  for (int i = 0; i < 50; i++)
   {
	   array50[i].key = array50Copy[i].key;
	   array50[i].str = array50Copy[i].str;
   }

	 //Quick Sort on array50
	 int count;
	 count = 0;
	 
	 
	 quick_sort(array50, 0, 49, count);
	 outfile.open("quick50.txt", ios::trunc); 
	 //outputting to file
	 for (int i = 0; i < 50; i++)
	 {
		 outfile << array50[i].key << "" << array50[i].str << endl;
	 }
	 outfile.close();
	 cout << "Quick sort has been successfull" << endl;
	 
	 
	 
	 
	 
	 return 0;
	 
}

