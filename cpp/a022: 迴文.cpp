#include <iostream>
#include <string>
using namespace std;
int main(){
	string a,output;
	int i,j,b=0;
	cin>>a;
	for(i=0;i<=a.size();i++){
		if(a[i]!=a[a.size()-1-i]){
			output="no";
		}
		if(a[i]==a[a.size()-1-i]){
			output="yes";
		}
	} 
	cout<<output;
}
