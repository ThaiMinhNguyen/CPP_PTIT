#include<bits/stdc++.h>

using namespace std;

int main(){
	int n , k , b;
	cin >> n >> k >> b;
	int a[n];
	for(int i = 0; i < n;i++){
		a[i] = 1;
	}
	for(int i = 0; i < b;i++){
		int k;
		cin >> k;
		a[k-1] = 0;
	}
//	for(auto x:a){
//		cout << x << " ";
//	}
	int cnt = 0;
	for(int i = 0; i < k;i++){
		if(a[i] == 0){
			cnt++;
		}
	}
	int min = cnt;
	for(int i = 0, j = k;j < n;i++, j++){
		if(a[i] == 0){
			cnt--;
		}
		if(a[j] == 0){
			cnt++;
		}
		if(min > cnt){
			min = cnt;
		}
	}
	cout << min << endl;
}