#include<iostream>
#include<cmath>

using namespace std;


int main(){
	int n;
	cin >> n;
	while(n--){
		int a;
		cin >> a;
		int count = 0;
		int s = sqrt(a);
		for(int i = 2; i <= a; i++){
			int check = 0;
			while(a%i == 0 && a > 0){
				//check ++;
				a=a/i;
				count++;
			}
			if(check > 1){
				count = 0;
				cout << 0;
				break;
			}
		}
		if(count == 3) cout << 1 << endl;
		else cout << 0 << endl;
	}
	return 0;
}