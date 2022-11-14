#include<bits/stdc++.h>

using namespace std;

long long boi(long long a, long long b){
	return a*b/__gcd(a,b);
}

int main(){
	int n;
	cin >> n;
	while(n--){
		int a, b, c, m;
		cin >> a >> b >> c >> m;
		long long check = boi(boi(a,b), c);
		long long result = -1;
		long long dau = pow(10, m-1);
		long long cuoi = pow(10, m);
		long long k = dau/check;
		long long h = cuoi/check;
		if(k < 1 && h < 1){
			cout << -1 << endl;
			continue;
		}
		if(k*check < dau){
			cout << (k+1)*check << endl;
		}
		else cout << k*check << endl;
	}
}