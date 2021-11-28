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
	char store[10000];
	while ( tt--)
	{
		int count = 0;
		scanf("%s",store);
		int sstore = strlen(store);
		for ( int i = 0 ,j = sstore-1 ; i < sstore/2; i++,j--)
		count = count + abs(store[i] - store[j]);
		cout << count;
		newline
	} 





	return 0;
}
