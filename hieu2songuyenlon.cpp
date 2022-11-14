#include<bits/stdc++.h>

using namespace std;

bool smaller(string s1, string s2){
	int n1 = s1.length();
	int n2 = s2.length();
	
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string a;
		string b;
		cin >> a >> b;
		
		int nho = 0;
		reverse(a.begin(), a.end());
		reverse(b.begin(), b.end());	
		for(int i = 0; i < a.length(); i++){
			if((b[i] - '0') < (a[i] - '0 ' + nho)){
				b[i] = ((b[i] - a[i]) + 10 - nho);
				nho = 1;
			} else {
				b[i] = ((b[i]- a[i]) - nho);
				nho = 0;
			}
		}
		for(int i = a.length(); i < b.length(); i++){
			if(b[i] - '0' > nho){
				b[i] = (b[i] - nho + '0');
				nho = 0;
			} else {
				b[i] = (b[i] + 10 - nho);
				nho = 1;
			}
		}
		reverse(b.begin(), b.end());
		cout << b << endl;
	}
}