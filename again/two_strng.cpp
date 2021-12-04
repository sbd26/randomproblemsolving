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
		string a,b;
		cin >> a >> b;
		int f = 0;
		int storea[26] = {0}, storeb[26] = {0};
		for ( int i = 0; i < a.size(); i++)
			storea[a[i] - 'a'] = 1;
		for ( int i = 0; i < b.size(); i++)
			soterb[b[i] - 'a'] = 1;
		for ( int i = 0; i < 26; i++)
		{
			if ( storea[i] == storeb[i])
			{
				cout << "YES" << endl;
				f = 1;
				break;
			}
			else
			 f = 0;
		 }
		 if ( f == 0 )
		 cout << "NO" << endl;
		
	}




	return 0;
}
