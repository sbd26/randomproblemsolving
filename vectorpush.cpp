#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v;
    int line;
    cin >> line;
    int arr;
    for (int i = 0;i<line;i++){
        cin >> arr;
        v.push_back(arr);

    }
    sort(v.begin(),v.end());
    for (int i=0;i<line;i++)
    {
        cout << v[i] << " ";
    }
    



}