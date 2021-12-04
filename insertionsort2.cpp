/*
 *	Author   : bd26
 *	telegram : @bd26
 *  Northern University of Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

#define nl printf("\n");

void insertion_sort(int arr[],int size)
{
	int count = 0;
	int x,j;
	for ( int i = 1; i < size; i++)
	{
		x = arr[i];
		j = i-1;
		while( j >=0 && x < arr[j])
		{
			count++;
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = x;
	}
	cout << count;
	
	
}


int main()
{
	int tt;
	cin >> tt;
	int arr[tt];
	for ( int i = 0; i < tt; i++)
	cin >> arr[i];
	insertion_sort(arr,tt);





	return 0;
}
