/*
 *  Author : bd26
 * 	Telegram : @bd26
 * 	Northern University of Bangladesh
 * 
 */
 
 #include <iostream>
 using namespace std;
 
 int main()
 {
	 
	 int s,t,a,b,apple,orrange,fa,acount = 0, ocount = 0;
	 cin >> s >> t;
	 cin >> a >> b;
	 cin >> apple >> orrange;
	 for ( int i = 0; i < apple; i++)
	 {
		 cin >> fa;
		 if ( (a+fa >= s) && (a+fa <= t))
		 acount += 1;
	 } 
	 for ( int i = 0; i < orrange; i++)
	 {
		 cin >> fa;
		 if ( (b+fa >= s) && (b+fa <= t))
		 ocount += 1;
	 }
	 cout << acount << '\n' << ocount;
		 
	 
	 
	 
	 
	 
	 return 0;
 }
 
