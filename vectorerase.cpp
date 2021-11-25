#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int line;
	cin >> line;
	vector <int> a(line);
	for (int i = 0 ; i < line; i++)
	{
		cin >> a[i];
	
	}
	
	//vector <int> v;
	int aa,b,c;
	cin >> aa;
	cin >> b >>c;
	a.erase(a.begin()+aa-1);
	a.erase(a.begin()+(b-1), a.begin()+(c-1));
	cout << a.size()<< endl;
	for (int i = 0; i < a.size(); i++)
	{
		cout << a[i] << " ";
	}


}

