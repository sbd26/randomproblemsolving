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
	char store[tt][100];
	int iarray[tt][26],flag = 0,count=0;
	
	for ( int i = 0; i < tt; i++)
	{
		scanf("%s",store[i]);
		for ( int j = 0; store[i][j] != '\0'; j++)
		{
			iarray[i][store[i][j]-97] = 1;
		}
	}
	
	for ( int i = 0; i < 26; i++){
		for (int j = 0; j < tt; j++)
		{  
			if ( iarray[j][i] == 1){
			flag = 1;
			}
			else
					{
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
