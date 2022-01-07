#include<windows.h>
#include<iostream>
using namespace std;
int main() { 
	int i;
	string a="'_'",b="-_-";
	for(i=0;i<=10;i++){
		cout<<a;
		Sleep(1000);
		system("cls");
		cout<<b;
		Sleep(1000);
		system("cls");
	}
}
