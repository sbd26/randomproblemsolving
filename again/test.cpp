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

	string test[100],input[100];
	int i = 0;
	while (1)
	{	
		if ( i < 100)
		{
			cin >> test[i];
			if ( test[i] == "exit" )
			break;
			i++;
			
		}
		
	}
	int j = 0;
	while (1)
	{
		if ( j < i )
		cin >> input[j];
		if ( input [j] == test [j] )
		{
			cout << "nice";
			//break;
		}
		j++;
	}



	return 0;
}
