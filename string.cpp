#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a,b;
    
    getline(cin,a);
    getline(cin,b);
    char *A = &a[0];
    char *B = &b[0];
    cout<< a.size() << " " << b.size()<<endl;
    cout <<a<<b << endl;
    char temp = *A;
    *A = *B;
    *B = temp;
    cout << a << " " << b;
   
  

}