/*
 *	Author   : bd26
 *	telegram : @bd26
 *  Northern University of Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

#define nl printf("\n");



int main()
{
	int tt;
	cin >> tt;
	int arr[tt];
	for ( int i =  0; i < tt; i++)
	cin >> arr[i]; 
	int x,j;
	for ( int i = 1; i < tt; i++)
	{
		x = arr[i];
		j = i-1;
		while ( j>= 0 && x < arr[j])
		{
			arr[j+1] = arr[j];
			j--;
		
		}
		arr[j+1] = x;
		
			for ( int i = 0; i < tt; i++)
		cout << arr[i] << " ";
		nl
		
	}
	




	return 0;
}
