#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	int t; 
	cin >> t;
	while(t--){
		int a , n;
		cin >> a >> n;
		int s[a];
		for(int i = 0; i< a; i++){
			cin >> s[i];
		}
		while(n--){
			int q[2];
			int sum = 0;
			for(int i = 0; i < 2; i++){
				cin >> q[i];
			}
			for(int i = q[0] - 1; i< q[1]; i++){
				sum += s[i];
			}
			cout << sum << endl;
		}
	}
}