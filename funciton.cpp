#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int maximum(int a,int b,int c,int d)
{
    int max,max2;
     max = (a > b) ? (a >c ? a : c) :(b>c ? b: c);
     max2 = (max > d) ? max : d;
    return max2;


}

int main()
{
    int a,b,c,d;
    cin >> a >>b >>c>>d;
    int re = maximum(a,b,c,d);
    cout <<re<<endl;

}