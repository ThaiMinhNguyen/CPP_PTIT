#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	while(n--){
		int a, k;
		cin >> a >> k;
		int s[a*a+1];
		for(int i = 0; i < a*a;i++){
				cin >> s[i];
		}
		sort(s, s+ a*a);
		cout << s[k-1] << endl;
	}
}