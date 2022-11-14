#include<bits/stdc++.h>

using namespace std;

int dongdu(int a[], int n){
	int res = 0;
	if(n==1) return 0;
	sort(a, a+n);
	int d = a[n-1] - a[0];
	if(d==0) return 0;
	vector<int> v;
	for(int i = 1; i*i <= d; i++){
		if(d%i==0){
			v.push_back(i);
			if(i!=d/i){
				v.push_back(d/i);
			}
		}
	}
	for(auto x : v){
		int temp = a[0]%x;
		int check = 1;
		for(int i = 1; i < n; i++){
			if(a[i]%x != temp){
				check = 0;
				break;
			}
		}
		if(check == 1){
			res++;
		}
	}
	return res;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n;i++){
			cin >> a[i];
		}
		cout << dongdu(a, n) << endl;
	}
}