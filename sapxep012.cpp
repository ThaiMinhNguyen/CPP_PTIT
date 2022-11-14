#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int a;
		cin >> a;
		int s[a];
		int ko = 0;
		int mot = 0; int hai = 0;
		for(int i = 0; i < a; i++){
			cin >> s[i];
			if(s[i] == 0) ko++;
			if(s[i] == 1) mot++;
			if(s[i] == 2) hai++;
		}
		for(int i = 0; i < ko; i++){
			cout << 0 << " ";
		}
		for(int i = 0; i < mot; i++){
			cout << 1 << " ";
		}
		for(int i = 0; i < hai; i++){
			cout << 2 << " ";
		}
		cout << endl;
	}
}