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
	int ct = 1;
	for ( int i = 0; i< s.size() ; i ++)
	{
		if ( s[i] >= 'A' && s[i] <= 'Z')
		ct++;
	}
	cout << ct;





	return 0;
}
