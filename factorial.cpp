/*
 *  Author : bd26
 * 	Telegram : @bd26
 * 	Northern University of Bangladesh
 * 
 */
 
 #include <iostream>
 using namespace std;
 #define ll double long
 int factorial ( ll a )
{
	if ( a == 0 || a ==1 )
	return 1;
	else 
		return a * factorial(a-1);
} 
 
 int main()
 {
	 int n;
	 cin >> n;
	 cout <<factorial (n);
	
	 
	 return 0;
 }
 
