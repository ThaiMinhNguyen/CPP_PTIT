#include<iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	for(int l = 0; l < n; l++){
		string s;
		cin >> s;
		int i = s.length();
		if(s[i-1] == '6' && s[i-2]=='8'){
			cout << 1 << endl;
		} else cout << 0 << endl;
	}
}