#include <iostream>
using namespace std;
int main(){ 
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a==0 && b!=0|| c==0&& d==0||c!=0&d==0){
		cout<<"NO"<<endl;
	}else if(a==0&&b==0||c==0&&d!=0&&c!=0&&d==0 ){
		cout<<"INF"<<endl;
	}else if(-1*b%a==0 && -1*d%c!=0){
		cout<<(-1*b/a)-(-1*d/c);
	}else{
		cout<<"NO"<<endl;
	}
	
	
	
	return 0;
}

