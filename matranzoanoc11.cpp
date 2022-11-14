#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int a[n+1][m+1];
		int hang = n;
		int cot = m;
		for(int i = 0; i < n; i++){
			for(int j = 0 ; j < m; j++){
				cin >> a[i][j];
			}
		}
		int d = 0; //hang
		//int c = 0; //cot
		int c = 0;
		int b[m*n];
		while(c < m*n){
			for(int i = d; i < cot; i++){
				b[c++] = a[d][i];
			}
			for(int i = d+1; i < hang; i++){
				b[c++] = a[i][cot - 1];
			}
			for(int i = cot - 2; i >= d; i--){
				b[c++] = a[hang-1][i];
			}
			for(int i = hang - 2; i > d; i--){
				b[c++] = a[i][d];
			}
			d++;
			hang--;
			cot--;
		}
		for(int i = 0 ; i < m*n; i++){
			cout << b[i] << " ";
		}
		cout << endl;
	}
}