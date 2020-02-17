#include <iostream>
using namespace std;
int main() {
	cout << "과목 성적을 입력하십시오." << endl;
	double a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	cout << "국어성적: " << a << endl << "수학성적: " << b << endl << "영어성적: " << c << endl << "사회성적: " << d <<endl<< "과학성적: " << e << endl;
	if ((a+b+c+d+e)/5 >= 80)
	{
		cout << "과목의 평균은? " << (a + b + c + d + e) / 5 << "점 입니다." << endl << "공부좀 하시네요^^";
	}
	else
	{
		cout << "과목의 평균은? " << (a + b + c + d + e) / 5 << "점 입니다." << endl << "빡대가리신가??";
	}
	
}