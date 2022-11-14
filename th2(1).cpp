#include<bits/stdc++.h>

using namespace std;

#define ll long long

ll tonguocso(ll n){
	ll r = 0;
	for(int i = 1; i<=sqrt(n) ; i++){
		if(n%i==0){
			if((n/i) == i){
				r += i;
			} else{
				r = r + i + (n/i);
			}
		}
	}
	return r;
}

int main(){
	ll n;
	cin >> n;
	while(n--){
		ll a;
		cin >> a;
		cout << tonguocso(a) << endl;
	}
}