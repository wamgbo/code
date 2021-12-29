#include <iostream>
using namespace std;
int main(){
	int	row,a,b,c,d,i,x,y1,y2;
	cin>>row;
	for(i=0;i<=row-1;i++){
		cin>>a>>b>>c>>d;
		if(b/a==c/b){
			x=(b/a)*d;
			cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<x<<endl;
		}
		else if(b-a==c-b){
			x=(b-a)+d;
			cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<x<<endl;
		}
	} 
}
