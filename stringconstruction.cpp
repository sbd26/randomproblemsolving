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
	
	
	while ( tt--)
	{
		char s[100001];
		int stores[26] = {0},count = 0;
		scanf("%s",s);
		for ( int i = 0 ; s[i] != '\0'; i++)
			stores[s[i] - 'a'] = 1;
		
		for ( int i = 0 ; i < 26 ; i++)
		{
			if ( stores[i] == 1)
			count++;
		}
		cout << count;
		newline
	
	}
			
			
		




	return 0;
}
