#include<bits/stdc++.h>

using namespace std;

#define modulo 1000000007
#define ll long long

ll power(int x, int n)
{
    ll result = 1;
    while(n>0){
    	result = ((result % modulo) * (x % modulo)) % modulo;
    	n--;
	}
    return result;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, x;
		cin >> n >> x;
		int p[n+1];
		long long sum = 0;
		for(int i = n-1;i >= 0; i--){
			cin >> p[i];
		}
		for(int i = 0; i < n ; i++){
			sum = (sum%modulo+((p[i]%modulo)*power(x, i))%modulo)%modulo;
		}
		cout << sum << endl;
	}
}