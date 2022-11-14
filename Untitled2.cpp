#include<bits/stdc++.h>

using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	int a[k+1];
	for(int i = 1; i <= k; i++){
		a[i] = i;
	}
	for(int s = 1 ; s <= k; s++){
		cout << a[s] << " ";
	}
	cout << endl;
	int check = 1;
	while(check == 1){
		int i = k;
		while(i > 0 && a[i] == n - k + i){
			i--;
		}
		if(i > 0){
				for(int j = i; j <= k; j++){
					if(j == i){
						a[j] = a[j] + 1;
					}
					if(j > i) {
						a[j] = a[i] + (j - i);
					}
				}
				for(int s = 1 ; s <= k; s++){
					cout << a[s] << " ";
				}
				cout << endl;
		}
		if(i == 0){
			check = 0;
		}
	}
}