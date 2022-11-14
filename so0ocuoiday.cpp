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
		for(int i = 0; i < n; i++){
			b[i] = 0;
			for(int j = i;j < n; j++){
				if(a[j] > 0){
					b[i] = a[j];
					a[j] = -1;
					break;
				}
			}
		}
		for(int i = 0; i < n; i++){
			cout << b[i] << " ";
		}
		cout << endl;
	}
}