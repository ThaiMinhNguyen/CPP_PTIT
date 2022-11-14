#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	int a[t+1], b[t+1];
	int c[t+1];
	int result = 0;
	for(int i = 0; i < t; i++){
		cin >> a[i] >> b[i];
	}
	for(int i = 0; i < t; i++){
		for(int j = i+1; j < t; j++){
			if(a[i] > a[j]){
				swap(a[i], a[j]);
				swap(b[i], b[j]);
			}
		}
	}
//	for(int i = 0; i < t; i++){
//		cout << a[i] << b[i];
//	}
	
	c[0] = a[0]+b[0];
	for(int i = 0; i < t-1; i++){
		c[i] = a[i] + b[i];
		if(c[i] > a[i+1]){
			a[i+1] = c[i];
		}
	}
//	for(int i = 0; i < t; i++){
//		cout << a[i] << b[i];
//	}

	cout << a[t-1] + b[t-1];
}