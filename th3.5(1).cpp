#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		int n;
		cin >> n;
		int a[n];
		long long res;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			if(a[i] < 0){
				res += abs(a[i]);
			}
		}
		if(res >= 100000000){
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
		cin.ignore();
	}
}