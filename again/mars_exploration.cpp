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

	string s;
	cin >> s;
	int counter = 0;
	for ( int i = 0; i < s.size(); i++)
	{
		if ( i  % 3 == 1)
		{
			if ( s[i] != 'O')
			counter++;
		}
		else
			if ( s[i] != 'S')
			counter++;
		}
		cout << counter;




	return 0;
}
