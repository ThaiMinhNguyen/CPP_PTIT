#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		string s;
		cin >> s;
		int l = s.length();
		int check = 1;
		for(int i=0; i < l/2; i++){
			if(s[i] != s[l-i-1]){
				check = 0;
				break;
			}
		}
		if(check == 0) cout << "NO" <<endl;
		else cout << "YES" <<endl;
	}
}
