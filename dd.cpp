/*
 *	Author   : bd26
 *	telegram : @bd26
 *  Northern University of Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

	int tt;
		cin >> tt;
		int a, b;
		for (int i = 0 ; i < tt; i++)
		for ( int j = 0;j < tt; j++)
		{
			int aa;
			cin >> aa;
			if ( i == j )
				a += aa;
			if ( i+j == tt-1)
				b += aa;
		 }
		cout << abs ( a - b) ;	
	 
	 
	 




	return 0;
}
