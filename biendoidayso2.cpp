#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		int b[n];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		b[0] = a[0] * a[1];
		cout << b[0] << " ";
		b[n-1] = a[n-1]*a[n-2];
		for(int i = 1; i < n-1;  i++){
			b[i] =a[i-1]*a[i+1];
			cout << b[i] << " ";
		}
		cout << b[n-1] << endl;
	}
}