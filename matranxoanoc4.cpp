#include<bits/stdc++.h>

using namespace std;

int main(){
		int n;
		cin >> n;
		int b[n*n];
		int hang = n;
		int cot = n;
		for(int i = 0; i < n*n; i++){
			cin >> b[i];
		}
		sort(b, b+n*n);
		int d = 0; //hang
		//int c = 0; //cot
		int c = 0;
		int a[n][n];
		while(c < n*n){
			for(int i = d; i < cot; i++){
				a[d][i] = b[c++];
			}
			for(int i = d+1; i < hang; i++){
				a[i][cot - 1] = b[c++];
			}
			for(int i = cot - 2; i >= d; i--){
				a[hang-1][i] = b[c++];
			}
			for(int i = hang - 2; i > d; i--){
				a[i][d] = b[c++];
			}
			d++;
			hang--;
			cot--;
		}
		for(int i = 0 ; i < n; i++){
			for(int j = 0; j < n; j++){
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
}