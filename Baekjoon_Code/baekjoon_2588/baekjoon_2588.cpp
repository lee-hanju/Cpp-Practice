#include <iostream>
using namespace std;
int main() {	
	int a, b, c, d,e;
	cin >> a;
	cin >> b;
	c = b / 100; //100�� �ڸ� ��
	d = (b - c * 100) / 10; // 10�ڸ� ��
	e = b - (c * 100 + d * 10);
	cout << a * e << endl;
	cout << a * d << endl;
	cout << a * c << endl;
	cout << a * b;
}