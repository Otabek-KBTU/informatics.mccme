#include <iostream>
using namespace std;
int main(){
	int a,b,c,d;
	cin>>a;
	b=a/100;
	c=a%100;
	d=((b%10*10)+b/10)-(c%10+(c/10*10));
	cout<<(d*d)+1;
	
	return 0;
}

