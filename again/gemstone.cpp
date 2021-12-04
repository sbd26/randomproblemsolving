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
	char s[tt][100];
	int istore[tt][26] = {0},flag = 0, count = 0;
	for ( int i = 0; i < tt; i++)
	{
		scanf("%s",s[i]);
		for ( int j = 0; s[i][j] != '\0'; j++)
				istore[i][s[i][j] - 97] = 1;
	}
	
	for ( int i = 0; i < 26; i++)
	{
		for ( int j = 0; j < tt; j++)
		{
			if (istore[j][i] == 1)
			flag = 1;
			else{
				flag = 0;
				break;
			}
		}
		if ( flag == 1)
		count++;
	}
	cout << count;
	




	return 0;
}
