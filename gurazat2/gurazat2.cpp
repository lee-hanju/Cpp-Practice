#include <iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	for (int i = 20; i >= 1; i--)
	{
		cout << a << " " << "*" << i << " " << "=" << a * i << endl;
	}
}