#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		string res;
		int count = 0;
		int check = 0;
		for(int i = 0;i < s.length();i++){
			if(s[i] >= '0' && s[i] <= '9'){
				check = 1;
				count += (s[i] - '0');
			} else {
				res += s[i];
			}
		}
		sort(res.begin(), res.end());
		if(check == 1){
			res += to_string(count);
		}
		cout << res << endl;
	}
}