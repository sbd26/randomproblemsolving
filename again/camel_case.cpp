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
	int counter = 1;
	for ( int i = 0; i < s.size(); i++)
		if ( s[i] >= 'A' && s[i] <='Z')
		counter++;
	
		cout << counter;

	return 0;
}
