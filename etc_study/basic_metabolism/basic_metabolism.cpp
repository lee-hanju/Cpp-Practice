#include <iostream>
using namespace std;
int main() {
	
	string x;
	cout << "����� ������ �����Դϱ�?"<<endl<<endl;
	cin >> x;
	if (x == "����")
	{
		cout << "����� ���̴� �� �� �Դϱ�?" << endl << endl;
		double a;
		cin >> a;
		cout << a << "��" << endl << endl;
		cout << "����� ������ �� cm�Դϱ�?" << endl << endl;
		double b;
		cin >> b;
		cout << b << "cm" << endl << endl;
		cout << "����� ü���� �� kg�Դϱ�?" << endl << endl;
		double c;
		cin >> c;
		cout << c << "kg" << endl << endl;
		cout << "����� ���ʴ�緮�� " << 66.47 + (13.75 * c) + (5 * b) - (6.76 * a) << "kcal �Դϴ�!";
	}
	else if (x == "����")
	{
		cout << "����� ���̴� �� �� �Դϱ�?" << endl << endl;
		double a;
		cin >> a;
		cout << a << "��" << endl << endl;
		cout << "����� ������ �� cm�Դϱ�?" << endl << endl;
		double b;
		cin >> b;
		cout << b << "cm" << endl << endl;
		cout << "����� ü���� �� kg�Դϱ�?" << endl << endl;
		double c;
		cin >> c;
		cout << c << "kg" << endl << endl;
		cout << "����� ���ʴ�緮�� " << 655.1 + (9.56 * c) + (1.85 * b) - (4.68 * a) << "kcal �Դϴ�!";
	}
	
			 
	
}