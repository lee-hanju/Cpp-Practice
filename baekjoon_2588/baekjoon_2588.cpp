#include <iostream>
using namespace std;
int main() {	
	int a, b, c, d,e;
	cin >> a;
	cin >> b;
	c = b / 100; //100의 자리 값
	d = (b - c * 100) / 10; // 10자리 값
	e = b - (c * 100 + d * 10);
	cout << a * e << endl;
	cout << a * d << endl;
	cout << a * c << endl;
	cout << a * b;
}