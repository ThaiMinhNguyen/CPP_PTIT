#include<iostream>
#include<bitset>

using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i = 0; i<n;i++){
		string s;
		cin >> s;
		int check = 1;
		for(int j = 0; j < s.length(); j++){
			if(s[j] == '0' || s[j] == '6' || s[j] == '8'){
				continue;
			}
			else {
				check = 0;
				break;
			}
		}
		if(check == 1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
