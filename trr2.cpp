#include<bits/stdc++.h>

using namespace std;

void sinh(string &s){
	int k;
	for(k = s.size()-1;k >= 0; k--){
		if(s[k]=='0'){
			break;
		}
	}
	for(int i = k; i <= s.size()-1; i++){
		if(s[i] == '1'){
			s[i] = '0';
		} else {
			s[i] = '1';
		}
	}
}

int main(){
	int n;
	int gtmax = 0;
	int cnmax;
	string ketqua;
	cin >> n >> cnmax;
	vector<int> giatri;
	vector<int> cannang;
	for(int i = 0; i < n; i++){
		int a;
		cin >> a;
		cannang.push_back(a);
	}
	for(int i = 0; i < n; i++){
		int a;
		cin >> a;
		giatri.push_back(a);
	}
	string s;
	for(int i = 0; i < n; i++){
		s += '0';
	}
	string last;
	for(int i = 0; i < n; i++){
		last += '1';
	}
	
	while(s!=last){
		int gt = 0;
		int cn = 0;	
		sinh(s);
		cout << s << endl;
		for(int i = 0; i < n; i++){
			gt += (s[i] - '0')*giatri[i];
			cn += (s[i] - '0')*cannang[i];
			
		}
		if(gt > gtmax && cn <= cnmax){
				gtmax = gt;
				ketqua = s;
		}
	}
	cout << gtmax << " " << ketqua;
}