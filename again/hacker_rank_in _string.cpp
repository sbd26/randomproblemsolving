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
	string news = "hackerrank";
	int tt;
	cin >> tt;
	while ( tt--)
	{
		int flag = 0;
		string s;
		cin >> s;
		for ( int i = 0; i < s.size() ; i++)
		{
			if ( flag == news.size() - 1)
			break;
			if (news[flag] == s[i])
			flag++;
		}
		if ( flag == news.size()-1)
		{
			cout << "YES";
			newline
		}
		else
		{
			cout << "NO";
			newline
		}
	}
	
	
	return 0;
}
