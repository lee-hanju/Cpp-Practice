#include <iostream>
using namespace std;
int main() {	
	int a, b;
	cin >> a;
	cin >> b;
	if (a>=1||b<=10000)
	{
		cout << a + b << endl;
		cout << a - b << endl;
		cout << a * b << endl;
		cout << a / b << endl;
		cout << a % b;
	}
	else
	{
		cout << "a는 1보다 크게,b는 10000보다 작게 입력하세요";
	}
}