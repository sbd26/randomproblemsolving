#include <bits/stdc++.h>
using namespace std;

void reversearray(int array[],int size){
    for (int i = size-1; i>=0 ; i--)
        cout <<array[i]<<" ";
}

int main()
{

    int size;
    cin >> size;
    int array[size];
    for (int i = 0; i<size; i++){
        cin >> array[i];
    }
    reversearray(array,size);

}