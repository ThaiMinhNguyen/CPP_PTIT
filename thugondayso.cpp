#include<bits/stdc++.h>

using namespace std;

void rm(int a[], int n , int &res){
	res--;
	for(int i = n; i < res; i++){
		a[i] = a[i+1];
	}
}

int main(){
	int t;
	cin >> t;
	int res = t;
	int a[t];
	for(int i = 0; i < t;i++){
		cin >> a[i];
	}
	int check = 0;
	while(check == 0){
		check = 1;
		int i = 0; 
		while(i < res-1){
			if((a[i] + a[i+1]) % 2 == 0){
				check = 0;
				rm(a, i , res);
				rm(a, i+1, res);
				break;
			}
			else {
				i++;
			}
		}
	}
//	for(int i = 0; i < res; i++){
//		cout << a[i] << " ";
//	}
	cout << res;
}