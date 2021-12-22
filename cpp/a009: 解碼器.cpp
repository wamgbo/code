#include<iostream>
using namespace std;
int main() {
	int k=7,i;
	string a;
	cin>>a;
	for(i=0; i<=a.size()-1; i++) {
		a[i]=a[i]-k;
		cout<<a[i];
	}
}
