#include <iostream>
using namespace std;
int main(){
	int a,b;
	cin>>a>>b;
	if(a==0&&b!=0){
		cout<<"NO"<<endl;
	}else if(a==0 && b==0){
		cout<<"INF"<<endl;
	}else if(-1*b%a==0){
		cout<<-1*b/a;
	}else{
		cout<<"NO";
	}
	
	
	return 0;
}
