#include<bits/stdc++.h>

using namespace std;

int kt(int n){
	int s = sqrt(n);
	int check = 1;
	if(n < 8) check = 0;
	else{
		int count = 0;
		for(int i = 2; i <= n; i++){
			int lap = 0;
			while(n%i==0 && n>0){
				lap++;
				if(lap == 1)count++;
				n/=i;
			}
			if(lap > 1) check = 0;
		}
		if(count != 3) check = 0;
	}
	return check;
}


int main(){
	int n;
	cin >> n;
	while(n--){
		int a;
		cin >> a;
		cout << kt(a) << endl;
	}
}

