#include <iostream>
using namespace std;
int main(){
	int a,h,m,s;
	cin>>a;
	h=(a/3600)%24;
	m=(a/60)%60;
	s=a%60;
	
	cout<<h<<":";
	cout<<((m<10)? 0:m/10)<<((m<10)? m:m%10)<<":";
	cout<<((s<10)? 0:s/10)<<((s<10)? s:s%10);
	// so here we did not used loop condition, 
	//because in this course we did not learn loop condition yet.
	//So, I decide to not use loop, the answer is correct...
	
	return 0; 
}
