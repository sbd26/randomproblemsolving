/*
 *	Author   : bd26
 *	telegram : @bd26
 *  Northern University of Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;


int main()
{
	string str;
	getline( cin , str);
	char lc;
	int indx ;
	int store[26] = {0};
	for ( int i = 0; i < str.size(); i++)
	{
		if ( str[i] != ' '){
			lc = tolower(str[i]);
			indx = lc - 'a';
			store[indx] = store[indx] + 1;
		}
	}
	int flag = 1;
	for ( int i = 0; i < 26 ; i++)
	{
		if ( store[i] == 0)
		flag = 0; 
	}
	if ( flag == 1)
	cout << "pangram"<< endl;
	else 
	cout << "not pangram" <<endl;


	return 0;
}
