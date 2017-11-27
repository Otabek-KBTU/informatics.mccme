
#include <iostream>
using namespace std;
int main(){
    int h,m,s,h1,m1,s1,n;
    cin>>h>>m>>s;
    cin>>h1>>m1>>s1;
    h1=(h1-h)*3600;
    m1=(m1-m)*60;
    s1=(s1-s)*1;
   
    cout<<h1+m1+s1;
   
   
   
    return 0;
}
