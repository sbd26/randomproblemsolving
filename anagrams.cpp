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
	string a,b;
	int ans = 0, store[26] = {0};
	cin >> a >> b;
	for ( int i = 0; i < a.size(); i++)
		store[a[i] - 'a']++;
	for ( int i = 0; i< b.size(); i++)
	store[b[i] - 'a']--;
	for ( int i = 0; i < 26 ; i++)
		ans += abs(store[i]);
	cout << ans;
	newline





	return 0;
}
