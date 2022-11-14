#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin.ignore();
		getline(cin , s);
		stringstream is(s);
		int count = 0;
		while(is >> s){
			count ++;
		}
		cout << count << endl;
	}
}