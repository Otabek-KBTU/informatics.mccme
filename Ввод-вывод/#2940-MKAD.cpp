#include <iostream>
using namespace std;
int main(){
	int V,t,S;
	cin>>V>>t;
	S=(V*t)%109;
	
	cout<<((S<0)? (S+109) : S);
	
	
	return 0;
	
}
