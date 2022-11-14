#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int a[200];
		int i = 0;
		int chan = 0;
		int le = 0;
		char kitu = ' ';
		while(kitu != '\n'){
			cin >> a[i];
			if(a[i] % 2 == 0){
				chan++;
			} else le++;
			i++;
			kitu = getchar();
		}
		int length = i;
		//cout << length << endl;
		int check2 = (length%2);
		if(check2==0 && chan > le){
			cout << "YES" << endl;
		} else if(check2==1 && le > chan){
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}