#include <iostream>
using namespace std;
int main(){
	int	row,a,b,c,d,i,x1,x2,y1,y2;
	cin>>row;
	for(i=0;i<=row-1;i++){
		cin>>a>>b>>c>>d;
		x2=b-a;
		x1=b/a;
		if(x1=c/b){
			y1=d*x1;
			cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<y1<<endl;
		}
		else{
			y2=d+x2;
			cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<y2<<endl;
		}
	} 
}
