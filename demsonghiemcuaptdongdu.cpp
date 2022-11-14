#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long b, p;
		int count = 0;
		cin >> b >> p;
		for(long long i = 1; i < p; i++){
			if((i*i) % p == 1){
				long long last = i + (b/p)*p;
				if(last > b){
					last -= p;
				}
				count += ((last - i)/p +1);
			}
		}
		cout << count << endl;
	}
}