#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void update (int *pa,int *pb){
    int a = *pa;
    int b = *pb;
    *pa = a + b;
    *pb = a - b;

}


int main()
{
    int a,b;
    cin>>a>>b;
    update(&a,&b);


    cout << a <<endl;
    if (b < 0){
        b = b * -1;
        cout <<b <<endl;
    }
    else 
    cout <<b <<endl;
}