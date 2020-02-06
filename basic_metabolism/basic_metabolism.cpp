#include <iostream>
using namespace std;
int main() {
	
	string x;
	cout << "당신의 성별은 무엇입니까?"<<endl<<endl;
	cin >> x;
	if (x == "남자")
	{
		cout << "당신의 나이는 몇 세 입니까?" << endl << endl;
		double a;
		cin >> a;
		cout << a << "세" << endl << endl;
		cout << "당신의 신장은 몇 cm입니까?" << endl << endl;
		double b;
		cin >> b;
		cout << b << "cm" << endl << endl;
		cout << "당신의 체중은 몇 kg입니까?" << endl << endl;
		double c;
		cin >> c;
		cout << c << "kg" << endl << endl;
		cout << "당신의 기초대사량은 " << 66.47 + (13.75 * c) + (5 * b) - (6.76 * a) << "kcal 입니다!";
	}
	else if (x == "여자")
	{
		cout << "당신의 나이는 몇 세 입니까?" << endl << endl;
		double a;
		cin >> a;
		cout << a << "세" << endl << endl;
		cout << "당신의 신장은 몇 cm입니까?" << endl << endl;
		double b;
		cin >> b;
		cout << b << "cm" << endl << endl;
		cout << "당신의 체중은 몇 kg입니까?" << endl << endl;
		double c;
		cin >> c;
		cout << c << "kg" << endl << endl;
		cout << "당신의 기초대사량은 " << 655.1 + (9.56 * c) + (1.85 * b) - (4.68 * a) << "kcal 입니다!";
	}
	
			 
	
}