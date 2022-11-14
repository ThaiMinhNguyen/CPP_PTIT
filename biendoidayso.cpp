#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n+1];
		for(int i = 0; i < n;i++){
			cin >> a[i];
		}
		int count = 0;
		int i = 0;
		int j = n-1;
		while(i < j){
			if(a[i] == a[j]){
				i++;
				j--;
			}
			if(a[i] > a[j]){
				j--;
				a[j] = a[j]+a[j+1];
				count++;
			}
			if(a[i] < a[j]){
				i++;
				a[i] = a[i]+a[i-1];
				count++;
			}
		}
		cout << count << endl;
	}
}