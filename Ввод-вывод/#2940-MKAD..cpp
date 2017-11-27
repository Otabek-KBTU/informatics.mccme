#include <iostream>
using namespace std;
int main(){
	int t,s,v;
	cin>>v>>t;
	s=(v*t)%109;
	s=(s<0)? s+109:s;
	cout<<s;
	
	return 0;
}
