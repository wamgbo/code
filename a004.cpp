
#include <iostream>
using namespace std;
int main()
{
	int year1;
	cin >> year1;
	if (year1 % 4 == 0 && year1 % 100 != 0 || year1 % 400 == 0) {
		cout << "閏年";
	}	
		else {
				cout << "平年";
		}

}
