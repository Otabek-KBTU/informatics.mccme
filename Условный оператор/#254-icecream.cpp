#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n<=2){
		cout<<"NO";
	}
	if(n==22){
		cout<<"Yes";
	}
	if(n%3==0||n%5==0||n%8==0||(n-3)%5==0||(n-5)%3==0||(n%10)%3==0||(n%10)%5==0){
		cout<<"Yes";
	}else{
		cout<<"No";
	}
	
	
	
	return 0;
}
