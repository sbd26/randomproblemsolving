/*
 *	Author   : bd26
 *	telegram : @bd26
 *  Northern University of Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

	vector < int > b(3);
	 vector < int > a(3);
	 int alice, bob;
	 for ( int i = 0 ; i < 3 ; i++)
	 cin >> b[i];
	 for ( int i = 0; i < 3 ; i++)
	 cin >> a[i];
	 for ( int i = 0; i < 3 ; i++)
	 {
		 if ( a[i] < b [i])
		 bob += 1;
		 else if ( a[i] > b[i])
		 alice += 1;
	 }
	 cout << bob <<  " " << alice <<endl;	 




	return 0;
}
