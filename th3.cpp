#include<bits/stdc++.h>

using namespace std;

#define ll long long

int tongchuso(ll n){
	int sum = 0;
	while(n > 0){
		sum += n %10;
		n /= 10;
	}
	return sum;
}

int tonguocso(ll n){
	int sum = 0;
	for(long long i = 2; i<= sqrt(n); i++){
		while(n > 0 && n%i == 0){
			sum+=tongchuso(i);
			n/=i;
		}
	}
	if(n!=1) sum +=tongchuso(n);
	return sum;
}

int main(){
	ll n;
	cin >> n;
	if(tongchuso(n) == tonguocso(n)){
		cout << "YES";
	} else {
		cout << "NO";
	}
	//cout << tonguocso(n);
}