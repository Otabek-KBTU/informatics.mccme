#include <iostream>
using namespace std;
int main(){
	int a,s;
	cin>>a;
	s=a/100;
	a%=100;
	s+=a/10;
	a%=10;
	s+=a;
	cout<<s;
	return 0;
}
