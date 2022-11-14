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

int main(){
	int n;
	cin >> n;
	for(int j = 0 ; j < n; j++){
		int a;
		cin >> a;
		for(int i = 2; i <= a; i++){
			int count = 0;
			while(a%i == 0 && a > 0){
				a=a/i;
				count++;
			}
			if(count > 0){
				cout << i << " " << count << " ";
			}
		}
		cout << endl;
	}
	return 0;
}