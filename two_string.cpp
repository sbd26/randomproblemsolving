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
	int line;
	cin >> line;
	while ( line --)
	{
		string a,b;
		int flag = 0, store[26] = {0}, store2[26] = {0};
		cin >> a >> b;
		for ( int i = 0;i < a.size(); i++)
		store[a[i] - 'a'] = 1;
		for ( int i = 0; i < b.size(); i++)
		store2[b[i] - 'a'] = 1;
		
		for ( int i = 0; i < 26; i++)
		{
			if ( store[i] == 1 && store2[i] ==1)
			{
				flag = 1;
			}
		
		}
		if (flag == 1)
			cout << "YES";
		else
		cout << "NO";
		
		newline
	}
	 





	return 0;
}
