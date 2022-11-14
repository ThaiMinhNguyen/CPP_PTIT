#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		string a;
		string b;
		cin >> a >> b;
		string result;
		if(a.length() > b.length()){
			swap(a, b);
		}
		if(a.length() == b.length()){
			for(int i = 0; i < a.length(); i++){
				if((a[i] - '0') > (b[i] - '0')){
					swap(a, b);
					break;
				}
				if((a[i] - '0') < (b[i] - '0')){
					break;
				}
			}
		}
		int nho = 0;
		reverse(a.begin(), a.end());
		reverse(b.begin(), b.end());	
		for(int i = 0; i < a.length(); i++){
			if((b[i] - '0') < ((a[i] - '0') + nho)){
				int s = ((b[i] - '0') - (a[i] - '0') + 10 - nho);
				result = (char)(s + '0') + result;
				nho = 1;
			} else {
				int s = ((b[i] - '0') - (a[i] - '0') - nho);
				result = (char)(s + '0') + result;
				nho = 0;
			}
		}
		for(int i = a.length(); i < b.length(); i++){
			if((b[i] - '0') >= nho){
				int s = ((b[i] - '0') - nho);
				result = (char)(s + '0') + result;
				nho = 0;
			} else {
				int s = ((b[i] - '0') + 10 - nho);
				result = (char)(s + '0') + result;
				nho = 1;
			}
		}
		cout << result << endl;
	}
}