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
	while (tt--)
	{
		string s;
		cin >> s;
		set <char> c;
		for ( int i = 0; i < s.size(); i++)
		c.insert(s[i]);
		cout << c.size();
		nl;
		
		
	}
	






	return 0;
}
