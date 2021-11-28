/*
 *	Author   : bd26
 *	telegram : @bd26
 *  Northern University of Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

#define newline printf("\n");



int main()
{
	int tt;
	cin >> tt;
	for ( int i = 1; i <=tt; i++)
	{
		for ( int j = 1; j <= tt - i; j++)
		cout << " ";
		for ( int k = 1; k <= i; k++)
		cout << "#";
		newline;
	}  


	return 0;
}
