#include<bits/stdc++.h>

using namespace std;

bool kt(int n){
	if(n <= 3) return 1;
	int f1 = 1;
	int f2 = 1;
	int fn = 0;
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
		int n;
		cin >> n;
		int a[n+1];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		for(int i = 0; i < n; i++){
			if(kt(a[i])) cout << a[i] << " ";
		}
		cout << endl;
	}
}