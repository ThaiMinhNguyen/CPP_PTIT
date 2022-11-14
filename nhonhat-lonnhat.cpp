#include<bits/stdc++.h>

using namespace std;

void sobe(int m, int s){
	int res[m];
	if(m==0){
		cout << -1 << " ";
		return;
	}
	if(s == 0){
		if(m==1){
			cout << 0 << " ";
			return;
		}
		else{
			cout << -1 << " ";
			return;
		}
	}
	if(s > 9*m){
		cout << -1 << " ";
		return;
	}else{
		s-= 1;
		for(int i = m-1; i > 0;i--){
			if(s > 9){
				res[i] = 9;
				s-=9;
			}
			else {
				res[i]= s;
				s = 0;
			}
		}
		res[0] = s+1;
		for(int i = 0; i < m;i++){
			cout << res[i];
		}
		cout << " ";
	}
}

void solon(int m , int s){
	string res;
	if(m==0){
		cout << -1 << " ";
		return;
	}
	if(s == 0){
		if(m==1){
			cout << 0 << " ";
			return;
		}
		else{
			cout << -1 << " ";
			return;
		}
	}
	if(s > 9*m){
		cout << -1 << " ";
		return;
	} else{
		for(int i = m-1; i >= 0;i--){
			if(s > 9){
				res += "9";
				s-=9;
			}
			else {
				res = res + to_string(s);
				s = 0;
			}
		}
		cout << res;
	}
	
}


int main(){
	int m, s;
	cin >> m >> s;
	sobe(m, s);
	solon(m ,s);
}