#include<bits/stdc++.h>

using namespace std;

int main(){
	char ch[] = {'0','1','2','3','4','5','6','7','8','9'};
	int t;
	cin >> t;
	while(t--){
		string a, b;
		cin >> a >> b;
		string s;
		for(int i = 0 ; i < b.length(); i++){
			if(b[i]>= 'A' && b[i] <= 'Z'){
				s += b[i];
			}
		}
//		cout << s << endl;
		for(int i = 0; i < s.length(); i++){
			s[i] = ch[(s[i] - 'A')%10];
		}
		if(s== a){
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}