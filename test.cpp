/*
 *	Author   : bd26
 *	telegram : @bd26
 *  Northern University of Bangladesh
*/

#include <bits/stdc++.h>
using namespace std;
#define newline cout << '\n';


int main()
{
	char s[100];
	scanf("%s",s);
	int one = 0,zero = 0;
	int n = strlen(s);
	int i =0;
	xx:
	if(i < n)
	{
		if ( s[i] == '1')
		one++;
		else
		zero++;
		i++;
		goto xx;
	}
	
	
	
	printf("One = %d, Zero = %d", one,zero);
	newline


	return 0;
}
