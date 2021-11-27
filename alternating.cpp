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

	int tt,cnt = 0;
	cin >> tt;
	string s;
	for ( int i = 0; i < tt; i++)
	{
		cnt = 0;
		cin >> s;
		for (int j = 0; j < s.size()-1; j++)
		{
			if ( s[j] == s[j+1] )
			cnt++;
		}
		
		cout << cnt;
		newline
	}
	
	
		




	return 0;
}
