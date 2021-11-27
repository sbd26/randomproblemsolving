/*
 *	Author   : bd26
 *	telegram : @bd26
 *  Northern University of Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

int checkfunction(void)
{
	string s;
	cin >> s;
	int st_array[s.size()],rev_array[s.size()];
	string rev = s;
	reverse ( rev.begin(),rev.end());
	int stores[s.size()-1];
	int storer[s.size()-1];
	int flag = 0;
	int i ;
	for( i = 0; i < s.size()-1;i++)
	{
		stores[i] = abs ( s[i] - s[i+1]);
		storer[i] = abs (rev[i] - rev[i+1]);
		if ( stores[i] == storer[i])
			flag = 1;
		else {
			flag = 0;
			break;
		}
	}
	
		
	return flag; 
	
}
int main()
{
	int line;
	cin >> line;
	while ( line--)
	{
		int flag = checkfunction();
		if ( flag == 1)
	cout << "Funny" << endl;
	else
	cout << "Not Funny"<< endl;

	
	}
	


	return 0;
}
