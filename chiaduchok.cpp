#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	while(n--){
		int a;
		long long k;
		cin >> a >> k;
		long long s = 0;
		for(int i = 1; i <=a; i++){
			s += i%k;
		}
		if(s==k) cout << 1 << endl;
		else cout << 0 << endl;
	}
}