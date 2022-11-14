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
		for(int i = n; i< a; i++){
			cout << s[i] << " ";
		}
		for(int i = 0; i < n; i++){
			cout << s[i] << " ";
		}
		cout << endl;
	}
}