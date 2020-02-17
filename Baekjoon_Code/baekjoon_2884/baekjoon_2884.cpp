#include <iostream>
using namespace std;
int main() {
	int H, M;
	cin >> H >> M;
	if (H >= 0 && H <= 23)
	{
		if (M >= 0 && M <= 59)
		{
			if (M - 45 >= 0)
			{
				cout << H << " " << M - 45;
			}
			else
			{
				if (H == 0)
				{
					H = 24;
				}
					cout << H - 1 << " " << 60 + (M - 45);
			}
		}
	}
}