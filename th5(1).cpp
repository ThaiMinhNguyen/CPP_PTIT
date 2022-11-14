#include<bits/stdc++.h>

using namespace std;

double doidiem(int n){
	if(n >= 39) return 9;
	if(n >= 37) return 8.5;
	if(n >= 35) return 8;
	if(n >= 33) return 7.5;
	if(n >= 30) return 7;
	if(n >= 27) return 6.5;
	if(n >= 23) return 6;
	if(n >= 20) return 5.5;
	if(n >= 16) return 5;
	if(n >= 13) return 4.5;
	if(n >= 10) return 4;
	if(n >= 7) return 3.5;
	if(n >= 5) return 3;
	if(n >= 3) return 2.5;
	else return 1;
}

double lamtron(double n){
	double s = n - (int)n;
	if(s < 0.25){
		n = (int)n;
	}
	if(s >= 0.25 && s < 0.75){
		n = (int)n + 0.5;
	}
	if(s >= 0.75){
		n = (int)n + 1;
	}
	return n;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int r, l;
		cin >> r >> l;
		double s, w;
		cin >> s >> w;
		double r1 = doidiem(r);
		double l1 = doidiem(l);
		double overall = (r1 + l1 + s + w)/4;
		double result = lamtron(overall);
//		cout << overall << endl;
//		cout << result;
		cout << setprecision(1) << fixed << result << endl;
	}
}