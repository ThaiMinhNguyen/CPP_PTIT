#include<iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	while(n--){
		int m, n, a, b;
		int count = 0;
		cin >> m >> n >> a >> b;
		if(m > n) swap(m,n);
		for(int i = m; i <=n ; i++){
			if(i%a == 0) count++;
			if(i%b == 0) count++;
			if(i%a == 0 && i%b == 0){
				count--;
			}
		}
		cout << count << endl;
	}
}