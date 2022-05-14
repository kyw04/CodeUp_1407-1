#include <iostream>
using namespace std;

int main()
{
	string str, temp;
	while (cin >> temp)
		str.append(temp);
	cout << str;
	return 0;
}