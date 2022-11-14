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
		int check = 0;
		for(int i = 2; i <= a; i++){
			if(snt(i) == 1 && snt(a-i) == 1){
				cout << i << " " << a-i << endl;
				check = 1;
				break;
			}
		}
		if(check == 0) cout << -1 << endl;
	}
}