#include<bits/stdc++.h>
using namespace std;
int main() {
	srand(time(0));
	int x, y, symbol, ans;
	int n, temp, sum = 0;
	for (int i = 0; i < 100; i++) {
		x = rand() % 100 + 1;
		y = rand() % 100 + 1;
		symbol = rand() % 2;
		if (x < y && symbol == 1) {
			temp = x;
			x = y;
			y = temp;
		}
		switch (symbol) {
			case 0:
				ans = x + y;
				cout << x << '+' << y << '=';
				break;
			case 1:
				ans = x - y;
				cout << x << '-' << y << '=';
				break;
			case 2:
				ans = x * y;
				cout << x << '*' << y << '=';
				break;
			case 3:
				ans = x / y;
				cout << x << '/' << y << '=';
				break;

		}
		cin >> n;
		if (n == ans) {
			sum += 1;
			cout << "	¶Ô£¡" << endl;
		} else
			cout << "	´í£¡" << endl;
	}
	cout << "µÃ·Ö: " << sum << endl;
	return 0;
}
