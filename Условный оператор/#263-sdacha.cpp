#include <iostream>
using namespace std;
int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a<=c&&b<=d){
		cout<<c-a<<" "<<d-b;
	}else if(b>d){
		c=c-1;
		d=d+100;
		cout<<c-a<<" "<<d-b;
	}
	
	
	
	return 0;
}
