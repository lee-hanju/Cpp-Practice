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
		cout << "a�� 1���� ũ��,b�� 10000���� �۰� �Է��ϼ���";
	}
}