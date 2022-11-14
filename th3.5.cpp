#include<bits/stdc++.h>

using namespace std;

int main(){
//	freopen("Da.in", "r", stdin);
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string name;
		getline(cin, name);
		int n;
		long long chi;
		cin >> n;
		int a[n];
		for(int i = 0; i < n;i++){
			cin >> a[i];
			if(a[i] < 0){
				chi -= a[i];
			}
		}
//		for(int i = 0; i < n;i++){
//			if(a[i] < 0){
//				chi -= a[i];
//			}
//		}
		if(chi < 100000000){
			cout << "NO" << endl;
		} else {
			cout << "YES" << endl;
		}
		cin.ignore();
	}
}