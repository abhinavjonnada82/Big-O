


using namespace std;

int shell_sort (record ar[], int size)
{
	int j;
	
	for (int gap = size /2; gap > 0; gap /=2)
	{
		for (int i = gap; i < size; ++i)
		{
			record temp = ar[i];
			for (j = i; j> = gap && temp.number < ar[j - gap].number; 
	
}
