#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	int t; 
	cin >> t;
	while(t--){
		int a , n;
		cin >> a >> n;
		int s[a];
		for(int i = 0; i< a; i++){
			cin >> s[i];
		}
		sort(s, s+a);
		cout << s[n-1] << endl;
	}
}