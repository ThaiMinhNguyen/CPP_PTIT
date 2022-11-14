#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int n;
	cin >> n;
	int c = 1;
	if(n < 2) {
		c = 0;
	}
	else {
		for(int i = 2; i <= sqrt(n); i++){
			if(n%i==0){
				c = 0;
				break;
			}
		}
	}
	(c == 0) ? cout << "NO" : cout << "YES";
}