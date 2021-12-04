/*
 *	Author   : bd26
 *	telegram : @bd26
 *  Northern University of Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;

#define newline printf("\n");

string myfun( int a,int b, int aa, int bb)
{
	double store = ( a -aa ) / ( bb -b);
	if ( store == floor(store) && store >= 0)
	return string("YES");
	
	return string ("NO"); 
}

int main()
{
	int a,b,aa,bb;
	cin >> a >> b >> aa >> bb;
	 cout << myfun(a,b,aa,bb);
	



	return 0;
}
