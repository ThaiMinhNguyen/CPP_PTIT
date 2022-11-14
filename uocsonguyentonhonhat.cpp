#include<iostream>
#include<cmath>

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

int sntdautien(int n){
	if(n == 1){
		return n;
	} else{
		if(snt(n)){
		 return n;	
		} else{
			for(int i = 2; i < n; i++){
				if(snt(i) && n%i ==0) return i;	
			}
		}
	}
}

int main(){
	int n;
	cin >> n;
	while(n--){
		int a;
		cin >> a;
		for(int i = 1; i <= a; i++){
			cout << sntdautien(i) << " ";
		}
		cout << endl;
	}
}