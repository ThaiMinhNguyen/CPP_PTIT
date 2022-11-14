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
		for(int i = 0; i< a; i++){
			cin >> s[i];
		}
		sort(s, s+a);
		int min = s[a-1] - s[0];
		for(int i = 1; i < a; i++){
			if(min > s[i]-s[i-1]){
				min = s[i]-s[i-1];
			}
		}
		cout << min << endl;
	}
}