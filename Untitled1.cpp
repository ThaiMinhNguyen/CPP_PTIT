#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, k;
	cin >> n >> k;
	int c = n-k;
	string s;
	string end(c, '0');
	while(k--){
		s = s+'1';
		end = '1' + end;
	}
	while(c--){
		s = '0' + s;
	}
	cout << s << endl;
	while(s != end){
		int check;
		for(int i = n-1;i >= 0;i--){
			if(s[i] == '0'){
				check = i;
				break;
			}
		}
		s[check] = '1';
		s[check+1] = '0';
		cout << s << endl;
	}
}