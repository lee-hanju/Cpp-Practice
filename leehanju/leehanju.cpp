#include <iostream>
using namespace std;
int main() {
	cout << "���� ������ �Է��Ͻʽÿ�." << endl;
	double a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	cout << "�����: " << a << endl << "���м���: " << b << endl << "�����: " << c << endl << "��ȸ����: " << d <<endl<< "���м���: " << e << endl;
	if ((a+b+c+d+e)/5 >= 80)
	{
		cout << "������ �����? " << (a + b + c + d + e) / 5 << "�� �Դϴ�." << endl << "������ �Ͻó׿�^^";
	}
	else
	{
		cout << "������ �����? " << (a + b + c + d + e) / 5 << "�� �Դϴ�." << endl << "���밡���Ű�??";
	}
	
}