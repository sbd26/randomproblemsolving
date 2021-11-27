/*
 *	Author   : bd26
 *	telegram : @bd26
 *  Northern University of Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

	string s;
	cin >> s;
	int flag  = 0;
	for ( int i = 0; i < s.length(); i++)
	{
		
		if ( i % 3 == 1 )
		{
			if ( s [i] != 'O')
			flag++;
			
		}
		else
		{
			if ( s [i] != 'S')
			flag++;
			
		}	
		}
		for ( int i = 0; i < s.length(); i++)
		printf ("ARRAY[%d] = [%c] \n", i, s[i]);
	cout << flag;
	return 0;
}
