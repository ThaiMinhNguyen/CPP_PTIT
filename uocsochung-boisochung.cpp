#include<iostream>

using namespace std;

int UCLN(int a, int b){
	if(a == 0 || b == 0) return a+b;
	while(a!=b){
		if(a > b){
			a = a - b;
		} else {
			b = b - a;
		}
	}
	return b;
}

int main(){
	int n;
	cin >> n;
	while(n--){
		int a, b;
		cin >> a >> b;
		cout << (long long)a*b/UCLN(a, b) << " " << UCLN(a, b) << endl; ;
	}
}