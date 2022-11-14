#include<bits/stdc++.h>

using namespace std;

int main(){
	freopen("Da.in", "r", stdin);
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		int p = 100;
		for(int i = 0; i < 100; i++){
			if(s[i] == ' '){
				p = i;
			}
		}
		for(int i = 0; i < p; i++){
			cout << s[i];
		}
		cout << endl;
	}
}