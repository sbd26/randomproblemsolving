/* 
 * 		author 	: bd26
 * 		github	: https://github.com/sbd26
 * 		telegram : @bd262002
 * 		
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
	 ios_base::sync_with_stdio(false);
	 cin.tie(NULL);
	 int tt;
	 int a,b;
	 cin >> tt;
	 set < int > s;
	 while ( tt--){
		 cin >> a >> b;
		 if ( a == 1)
			s.insert (b);
		 if ( a==2)
			s.erase (b);
		 if ( a==3)
		{
			set <int> :: iterator itr = s.find(b);
			if (itr == s.end())
			cout << "NO" << endl;
			else {
				cout << "YES" << endl;
			}
			}
		}

	 
	 return 0;
}
