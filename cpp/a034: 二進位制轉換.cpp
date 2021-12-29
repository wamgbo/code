#include <iostream>
using namespace std;
int main(){
	int a,b[100],i,c;
	while(cin>>a){
		c=0;
		while(a>0){
			b[c]=a%2;
			a=a/2;
			c++;	
		}
		for(i=c-1;i>=0;i--){
			cout<<b[i];
		}
		cout<<endl;
		for(i=c-1;i>=0;i--){
			b[i]=0;	
		}
	}
}
