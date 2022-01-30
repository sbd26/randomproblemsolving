/*
 *	Author   : bd26
 *	telegram : @bd26
 *  Northern University of Bangladesh
*/

#include <iostream>
using namespace std;

#define nl printf("\n");






int main()
{
	int tt;
	cin >> tt;
	int last = 0, current = 0, i = 0;
	while(tt > 0)
	{
		i++;
		current =  last + i;
		last = current;
		tt -= last;
		if ( tt < 0)
			i--;
		
	}
	cout << i;

	


	return 0;
}
