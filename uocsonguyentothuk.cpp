#include<iostream>
#include<cmath>

//bool snt(int a){
//	if(a < 2) return false;
//	else {
//		for( int i = 2; i <= sqrt(a); i++){
//			if(a % i == 0) return false;
//		}
//	}
//	return true;
//}
//
using namespace std;

int main(){
	int n;
	cin >> n;
	while(n--){
		int a;
		int k;
		cin >> a >> k;
		int res = -1;
			for(int i = 2; i <= sqrt(a); i++){
				while(a%i == 0 && a > 0){
					a=a/i;
					k--;
					if(k == 0) res = i;
				}	
			}
			if(a!= 1 && k == 1) res = a;
		cout << res << endl;
	}
	return 0;
}