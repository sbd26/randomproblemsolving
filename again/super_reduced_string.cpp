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
	cin >> s;
	vector <char> store;
	for ( int i = 0; i < (int) s.length(); i++)
	{
		if ( !store.empty() && store.back() == s[i] )
			store.pop_back();
		else
			store.push_back(s[i]);
	}
		if (store.empty())
		cout << "Empty String"<<endl;
		else
		{
		for ( int i = 0; i < (int) store.size(); i++)
		cout<< store[i];
	}
		


	return 0;
}
