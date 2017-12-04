#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>


using namespace std;

const int case1 = 50;
//const int case2 = 5000;
//const int case3 = 10000;
const char alphanum[] =
	 "0123456789"
	 "!@#$%^&*"
	 "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
	 "abcdefghijklmnopqrstuvwxyz";

int string_length = sizeof(alphanum) - 1;


char gen_RandStr()  // Random string generator function.
{

    return alphanum[rand() % string_length];
}

int gen_RandNum()
{    
	return rand() % 100;
}

struct list
{
	int key;
	string rand_str;
};

int main()
{
    
	
	list array[case1];
	
    /* initialize random seed: */
    srand (time(NULL));
    
    bubble.init_arra(case1);

  /* generate number between 0 and 50: */
     
     for (int i = 0; i<=case1; i++)
     {    
		 array[i].key = gen_RandNum();
		 array[i].rand_str = gen_RandStr();
	 }
	  
	 //print out the array
	 
	 for (int i = 0; i<=case1; i++)
	 {
		 cout<<"print random numbers"<<array[i].key<<endl;
		 cout<<"print random string"<<array[i].rand_str<<endl;
	 }
	 
	 
	 return 0;
	 
}

 




