#include<iostream>
using namespace std;


int main()
{
	int arr[6] = {6,5,4,3,2,1};
	int x,j;
	//for ( int i = 0; i < 6; i++) cin >> arr[i];
	for ( int i = 1; i < 6; i++)
	{
		x = arr[i];
		j = i-1;
		while ( j>= 0 && x < arr[j])
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = x;
		for ( int i = 0; i < 6; i++) cout << arr[i] << " ";
		cout << '\n';
	}
	for ( int i = 0; i < 6; i++) cout << arr[i] << " "; 
}
