#include <iostream>
using namespace std;
int main(){
	int H, A, B;
    cin >> H >> A >> B;
    cout << (H / (A - B) - (A - (H % (A - B))) / (A - B)) + 1;
	
	return 0;
}
