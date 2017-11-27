#include <iostream>
using namespace std;
int main(){
	int a,b,c,a1,b1,c1;
	cin>>a>>b>>c>>a1>>b1>>c1;
	a=a1-a;
	b=b1-b;
	c=(c1-c);
	cout<<a*3600+(b*60)+c;
	
	return 0;
}
