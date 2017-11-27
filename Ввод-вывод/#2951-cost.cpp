#include <iostream>
using namespace std;
int main(){
	int a,b,n;
	cin>>a>>b>>n;
	a = (a*n)+(b*n)/100;
	b =(b*n)%100;
	cout<<a<<" "<<b;
	
	return 0;
}
