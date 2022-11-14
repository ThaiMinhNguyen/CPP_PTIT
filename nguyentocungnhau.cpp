#include<bits/stdc++.h>

using namespace std;

bool snt(int a){
	if(a < 2) return false;
	else {
		for( int i = 2; i <= sqrt(a); i++){
			if(a % i == 0) return false;
		}
	}
	return true;
}

int main(){
	int n;
	cin >> n;
	while(n--){
		int a;
		cin >> a;
		int count = 0;
		for(int i = 1; i <=a; i++){
			if(__gcd(i,a)==1) count++;
		}
		if(snt(count)){
			cout << 1 << endl;
		} else cout << 0 << endl;
	}
}