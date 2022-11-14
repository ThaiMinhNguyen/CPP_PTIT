#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long a[n];
		long long b[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a+n);
		for(int i = 0; i < n; i++){
			b[i] = -1;
			for(int j = 0;j < n; j++){
				if(i == a[j]){
					b[i] = a[j];
					a[j] = -1;
				}
			}
		}
		for(int i = 0; i < n; i++){
			cout << b[i] << " ";
		}
		cout << endl;
	}
}