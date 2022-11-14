#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	int t; 
	cin >> t;
	while(t--){
		int a;
		cin >> a;
		int s[a];
		int min = 1;
		for(int i = 0; i< a; i++){
			cin >> s[i];
		}
		sort(s, s+a);
		for(int i = 0; i < a; i++){
			if(min == s[i]){
				min++;
			}
		}
		cout << min << endl;
	}
}