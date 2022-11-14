#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n][n];
	for(int i = 0;i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	int s;
	cin >> s;
	int b[s][s];
	for(int i = 0;i < s; i++){
		for(int j = 0; j < s; j++){
			cin >> b[i][j];
		}
	}
	int m = n/s;
	int k = 0;

	while(k < n){
		for(int i = 0;i < s; i++){
			int l = 0;
			int c = n/s;
			while(c--){
				for(int j = 0; j < s; j++){
					a[i+k][j+l] = a[i+k][j+l]*b[i][j];
				}
				l+=s;
			}
		}
		
		k+=s;
	}
	for(int i = 0;i < n; i++){
		for(int j = 0; j < n; j++){
			cout << a[i][j] << " "; 
		}
		cout << endl;
	}
}