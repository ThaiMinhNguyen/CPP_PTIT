#include<bits/stdc++.h>

using namespace std;

long long f(int n){
	if(n==0) return 0;
	if(n==1||n==2) return 1;
	else{
		long long f1 = 1;
		long long f2 = 1;
		long long fn;
		for(int i = 3; i <= n; i++){
			fn = f1 + f2;
			f2 = f1;
			f1 = fn;
		}
	return fn;
	}
}


int main(){
	int n;
	cin >> n;
	while(n--){
		int a;
		cin >> a;
		
		cout << f(a) << endl;
	}
}