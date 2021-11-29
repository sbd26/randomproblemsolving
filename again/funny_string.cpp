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
	while (tt--)
	{
		int flag = 1;
		string s;
		cin >> s;
		string rev = s;
		reverse ( rev.begin(),rev.end());
		
		for ( int i = 0; i < s.size() -1 ; i++)
		{
			if ( (abs (s[i] - s[i+1])) != (abs(rev[i] - rev[i+1])))
			{
			flag = 0;
			break;
			}
		}
		if ( flag == 1) 
		cout << "Funny" << endl;
		else
		cout << "Not Funny"<< endl;
		
	}





	return 0;
}
