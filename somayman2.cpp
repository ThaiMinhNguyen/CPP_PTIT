#include<bits/stdc++.h>

using namespace std;

int check(string s){
	int sum;
	while(s.length()>1){
		sum = 0;
		for(int i = 0 ; i < s.length(); i++){
			sum += (s[i] - '0');
		}	
		s = to_string(sum);
	}
//	return sum;
	if(sum == 9){
		return 1;
	}
	return 0;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		cout << check(s) << endl;
	}
}