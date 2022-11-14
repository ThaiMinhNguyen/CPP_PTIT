#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int check = 0;
		for(int i = 0; i < s.length(); i++){
			if(s[i] == '1'){
				check = (check*2+1) % 5;
			} else {
				check = (check*2) % 5;
			}
		}
		if(check == 0){
			cout << "Yes" << endl;
		} else {
			cout << "No" << endl;
		}
	}
}