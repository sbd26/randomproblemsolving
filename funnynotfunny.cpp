/*
 *	Author   : bd26
 *	telegram : @bd26
 *  Northern University of Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int line;
	cin >> line;
	while ( line--)
	{
	string s;
	cin >> s;
	int st_array[s.size()],rev_array[s.size()];
	string rev = s;
	reverse ( rev.begin(),rev.end());

	int j = s.size()-1;
	for ( int i = 0; i< s.size(); i++)
	{
		st_array[i] = (int) s[i];
		rev_array [i] = (int) rev[i];
	}
	
	
	int stores[s.size()-1],storer[s.size()-1],flag = 0;
	for(int i = 0; i < s.size()-1;i++)
	{
		stores[i] = abs ( st_array[i] - st_array[i+1]);
		storer[i] = abs (rev_array[i] - rev_array[i+1]);
		if ( stores[i] == storer[i])
			flag = 1;
		else {
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
