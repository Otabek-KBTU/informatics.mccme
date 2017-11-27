#include <iostream>
using namespace std; 
int main(){
	int a,b;
	cin>>a>>b;
	int k=1;
	cout<<(((((a%b)&&(b%a))==0))? k:a+b);
	
	return 0;
}
