#include <iostream>
using namespace std;
int main()
{
	int M, D, S;
	cin >> M >> D;
	S = (M * 2 + D) % 3;
	if (S ==0) {
		cout << "普通";
	}
	if (S == 1) {
		cout << "吉";
	}
	if (S == 2) {
		cout << "大吉";
	}


}
