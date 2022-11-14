#include<iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	for(int l = 0; l < n; l++){
		long long a;
		cin >> a;
		string s = to_string(a);
		int k;
		for(int i = 0; i < s.length();i++){
			if(s[i] == '0' && s[i+1] == '8' && s[i+2] == '4'){
				k = i;
				break;
			}
		//	cout << s[i];
		}
		//cout << endl;
		s.erase(k, 3);
		cout << s << endl;
	}
	return 0;
}