/*
 *	Author   : bd26
 *	telegram : @bd26
 *  Northern University of Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	 cin >> s;
	
		int len = s.length();
		vector <char> store;
		for ( int i = 0; i < len; i++)
		{
			if ( !store.empty() && store.back() == s[i])
			store.pop_back();
			else
				store.push_back(s[i]);
			}
			if ( store.empty() ) cout << "Empty String" << endl;
			else
			{
				for ( int i = 0; i <(int) store.size();i++) cout << store[i];
				cout << '\n';
			}
	
}
