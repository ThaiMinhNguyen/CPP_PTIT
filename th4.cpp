#include<bits/stdc++.h>

using namespace std;

#define ll long long

bool kt(long long n){
	if(n < 3) return 1;
	ll f1 =1;
	ll f2 = 1;
	ll fn = 0;
	while(fn <= n){
		fn = f1+f2;
		if(fn == n) return 1;
		f2= f1;
		f1 = fn;
	}
	return 0;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		if(kt(n)){
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}