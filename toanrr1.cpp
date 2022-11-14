#include<bits/stdc++.h>

using namespace std;

int a[1000], x[1000], n , p , k;

//bool check1(){
//	int sum = 0;
//	for(int i = 0; i < k; i++){
//		sum += a[x[i]];
//	}
//	if(sum == p){
//		return 1;
//	}
//	return 0;
//}

void taodaysinh(){
	cin >> n >> k >> p;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	for(int i = 1; i <= k; i++){
		x[i]= i;
	}
	int check = 1;
	while(check){
		int i = k;
		while(i > 0 && x[i] == n - k + i){
			i--;
		}
		if(i > 0){
			for(int j = i; j <= k; j++){
					if(j == i){
						x[j] = x[i] + 1;
					}
					if(j > i) {
						x[j] = x[i] + (j - i);
					}
			}
			int sum = 0;
			for(int i = 1; i <= k; i++){
				sum+=a[x[i]];
			}
			if(sum == p){
				for(int i = 1; i <= k; i++){
					cout << a[x[i]] << " ";
				}
				cout << endl;	
			}
		}
		if(i == 0){
			check = 0;
		}
	}
	
}



int main(){
//	cin >> n >> k >> p;
//	a[n+1];
//	for(int i = 1; i <= n; i++){
//		cin >> a[i];
//	}
	taodaysinh();
}