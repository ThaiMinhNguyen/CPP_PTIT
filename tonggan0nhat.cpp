#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		long long res = 10e7;
		for(int i = 0;i < n;i++){
			cin >> a[i];
		}
		for(int i = 0;i < n;i++){
			for(int j = i+1;j < n;j++){
				long long s = a[i] + a[j];
				if(abs(s) < abs(res)){
					res = s;
				}
			}
		}
		cout << res << endl;
	}
}