#include<bits/stdc++.h>

using namespace std;

bool snt(int a){
	if(a < 2) return false;
	else {
		for( int i = 2; i <= sqrt(a); i++){
			if(a % i == 0) return false;
		}
	}
	return true;
}

int main(){
	int n;
	cin >> n;
	while(n--){
		int a;
		cin >> a;
		for(int i = 1; i <=a ; i++){
			if(snt(i) == 1 || i == 1){
				cout << i << " ";
			} else {
				for(int j = 2; j <= i; j++){
					if(i%j == 0){
						cout << j << " ";
						break;
					}
				}
			}
		}
		cout << endl;
	}
}