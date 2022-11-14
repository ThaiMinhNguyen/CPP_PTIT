#include<iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	while(n--){
		int a;
		cin >> a;
		int sum ;
		while(a > 9){
			sum = 0;
			while(a > 0){
				int s = a% 10;
				sum += s;
				a/= 10;
			}
			a = sum;
		}
		cout << sum << endl;
	}
}