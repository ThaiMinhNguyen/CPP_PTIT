#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i= 0; i < n; i++){
		cin >> a[i];
	}
	int gcd = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0;j < n; j++){
			if(j == i){
				continue;
			} else {
				int s = __gcd(a[i], a[j]);
				if(gcd < s){
					gcd = s;
				}
			}
		}
	}
	cout << gcd;
}