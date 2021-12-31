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
	vector <int> cand(tt);
	for(int i = 0; i < tt; i ++)
	 cin >> cand[i];
	int max = *max_element(cand.begin(),cand.end());
	int counter = 0;
	for ( int i = 0; i < tt; i++)
	if (max == cand[i])
		counter++;
	cout << counter;




	return 0;
}
