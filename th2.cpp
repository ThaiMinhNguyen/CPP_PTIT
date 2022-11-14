#include<bits/stdc++.h>

using namespace std;

long long tong(long long n){
	long long sum = 0;
	for(int i = 1;i <= sqrt(n);i++){
		if(n%i==0){
			if(n/i==n){
				sum += i;
			} else {
				sum += i + n/i;
			}
		}
	}
	return sum;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		cout << tong(n) << endl;
	}
}