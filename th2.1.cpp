#include<bits/stdc++.h>

using namespace std;

int max(int a[], int n){
	int max = a[0];
	for(int i = 0; i < n; i++){
		if(a[i] > max){
			max = a[i];
		}
	}
	return max;
}

int max_p(int a[], int n){
	int res = max(a, n);
	int m;
	for(int i = 0; i < n; i++){
		if(res == a[i]){
			m = i;
			break;
		}
	}
	return m;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, s;
		cin >> n >> s;
		int a[n];
		vector<int> res;
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
//		cout << max(a, n) << endl;
		for(int i = 0; i < n; i++){
			if(a[i] < 0){
				res.push_back(a[i]);
			}
		}
		for(int i = 0; i < n; i++){
			if(a[i] >= 0){
				if(i == max_p(a, n)){
					res.push_back(s);
					res.push_back(a[i]);
				} else {
					res.push_back(a[i]);
				}
			}
		}
		for(int i = 0; i < res.size(); i++){
			cout << res[i] << " ";
		}
		cout << endl;
	}
}