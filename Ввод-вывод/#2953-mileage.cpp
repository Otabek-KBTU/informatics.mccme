#include <iostream>
using namespace std;
int main(){
	int n,m,n1;
	cin>>n>>m;
	n1=m/n;
	cout<<(((m%n>0)&&(m%n!=0))? (n1+1):n1);
	
	return 0;
}
