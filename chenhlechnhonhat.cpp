#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	while(n--){
		int a;
		cin >> a;
		int s[a];
		for(int i = 0; i < a; i++){
			cin >> s[i];
		}
		int min = abs(s[0] -  s[1]);
		for(int i = 0; i < a; i++){
			for(int j = i+1; j < a; j++){
				int check = abs(s[i] - s[j]);
				if(min > check){
					swap(min, check);
				}
			}
		}
		cout << min << endl;
	}
}