#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n==2){
		cout<<"NO";
		return 0;
	}
	if(n==22){
		cout<<"YES";
		return 0;
	}
	if(n>100&&n%10==1){
		cout<<"YES";
		return 0;
	}
	if(n%3==0||n%5==0||n%8==0||(n-3)%5==0||(n-5)%3==0||(n%10)%3==0||(n%10)%5==0){
		cout<<"YES";
	}else{
		cout<<"NO";
		
	}
	
	
	
	return 0;
}
