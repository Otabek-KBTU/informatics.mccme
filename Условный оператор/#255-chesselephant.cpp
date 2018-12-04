#include <iostream>
using namespace std;
int main(){
	int a,b,a1,b1;
	cin>>a>>b>>a1>>b1;
	if((a-b==a1-b1)||(a+b==a1+b1)||(b-a==b1-a1)){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
	
	return 0; 
}
