/*
 *	Author   : bd26
 *	telegram : @bd26
 *  Northern University of Bangladesh
*/

#include <iostream>
#include <vector>
using namespace std;
#define newline cout << '\n';
#define fori(a,n)		for(int i = a; i<n; i++)


int binarysearch(int array[],int low,int high, int search)
{
	int low = 0, high = size-1,x = search;
	while ( low <= high)
	{
		int mid = low + (high - low) / 2;
		if ( array[mid] ==  x)
		return mid;
		if (array[mid] < x)
		low = mid + 1;
		else 
		high = mid - 1;
	}
	return -1;	
}


int main()
{
	vector <int> mvector(10,100);
	for ( int i:mvector)
	cout << i << endl;

	return 0;
}
