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
	string s;
	getline(cin,s);
	int store[26] = {0};
	int flag = 1;
	for ( int i = 0; i < s.size(); i++)
	{
		if ( s[i] >= 'a' && s[i] <= 'z')
			store[s[i] - 'a']++;
		if ( s[i] >= 'A' && s[i] <= 'Z')
			store[s[i] - 'A']++;
		}
		for ( int i = 0; i < 26; i++)
		{
			if ( store[i] == 0){
			flag = 0;
			break;
		}
		}
	
		if ( flag == 1)
		cout << "pangram"<<endl;
		else
		cout << "not pangram" << endl;
	
		



	return 0;
}
