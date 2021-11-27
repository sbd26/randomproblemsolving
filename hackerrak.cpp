/*
 *	Author   : bd26
 *	telegram : @bd26
 *  Northern University of Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;
const string hkr = "hackerrank";

string mfunc( string s)
{
	int flag = 0;
	for ( int i = 0; i < s.size(); i++)
	{
		if ( flag == hkr.size()-1)
		break;
		if ( s[i] == hkr[flag] )
		flag++;
	}
	return ( flag == hkr.size()-1) ? "YES" : "NO"; 
}


int main()
{
		int line;
		cin >> line;
		while ( line -- ){
		string uin;
		cin >> uin;
		cout << mfunc(uin) << endl;
	}

	return 0;
}
