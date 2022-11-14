#include<bits/stdc++.h>

using namespace std;

int fi(long long n){
	if(n < 2) return n;
	long long f1 = 1;
	long long f2 = 1;
	long long fn;
	for(int i = 3;i<=92;i++){
		fn = f1+f2;
		if(fn==n) return 1;
		f2 = f1;
		f1 = fn;
	}
	return -1;
}

int main(){
	int n;
	cin >> n;
	while(n--){
		long long a;
		cin >> a;
		if(fi(a) != -1){
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}