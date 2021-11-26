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
	 int tt,a;
	 float pos=0, neg = 0, zer = 0;
	 cin >> tt;
	 for ( int i = 0;i < tt; i++)
	 {
		 cin >> a;
		 if ( a > 0)
		 pos += 1;
		 if ( a < 0)
		 neg += 1;
		 if ( a==0)
		 zer += 1;
	 }
	 cout <<  (pos/tt) << '\n' <<  ( neg / tt) << '\n' << (zer / tt) << '\n'; 
	 
	 
	 
	 
	 
	 
	 return 0;
 }
 
