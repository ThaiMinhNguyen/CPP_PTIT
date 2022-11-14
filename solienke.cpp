#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int g;
	cin >> g;
	for(int i = 0; i < g;i++){
		long long a;
		cin >> a;
		int check = 1;
		string s = to_string(a);
		for(int d = 0; d < s.length()-1; d++){
			if(abs(s[d] - s[d+1])==1){
				check =1;
			}
			else{
				check = 0;
				break;
			}
		}
		if(check == 1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}