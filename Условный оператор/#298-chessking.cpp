#include <iostream>
using namespace std;
int main(){
	int a,b,a1,b1;
	cin>>a>>b>>a1>>b1;
	if(((a==a1+1)||(a==a1)||(a==a1-1))&&((b==b1+1)||(b==b1)||(b==b1-1))){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
	
	return 0;
}
