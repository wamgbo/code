#include <iostream>
using namespace std;
int main()
{
	int year1;
	while(cin>>year1){
	if (year1 % 4 == 0 && year1 % 100 != 0 || year1 % 400 == 0) {
		cout << "閏年" <<endl;
	}	
		else {
				cout << "平年"<<endl;
		}
}
}
