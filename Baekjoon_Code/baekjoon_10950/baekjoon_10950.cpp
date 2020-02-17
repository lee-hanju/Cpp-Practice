#include <iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	int sum = 0;
	for (int i = 0; i < t; i++)
	{
		int a, b;
		cin >> a >> b;
		sum = a + b;
		cout << sum << endl;
	}
}