/*
 *	Author   : bd26
 *	telegram : @bd26
 *  Northern University of Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;



int main()
{

	int tt; 
	cin >> tt;
	string ui;
	cin >> ui;
	int ans = 0;
	for ( int i = 0; i < tt; i++)
	{
		if ( ui[i] == '0' && ui[i+1] == '1' && ui[i+2] == '0')
		{	
			ui[i+2] = 1;
			ans++;
		}
	}
	cout << ans;




	return 0;
}
