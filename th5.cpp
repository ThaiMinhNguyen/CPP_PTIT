#include<bits/stdc++.h>

using namespace std;

double doidiem(int n){
	if(n >= 39 && n <= 40) return 9.0;
	if(n >= 37 && n <= 38) return 8.5;	
	if(n >= 35 && n <= 36) return 8.0;	
	if(n >= 33 && n <= 34) return 7.5;	
	if(n >= 30 && n <= 32) return 7.0;	
	if(n >= 27 && n <= 29) return 6.5;
	if(n >= 23 && n <= 26) return 6.0;	
	if(n >= 20 && n <= 22) return 5.5;	
	if(n >= 16 && n <= 19) return 5.0;	
	if(n >= 13 && n <= 15) return 4.5;	
	if(n >= 10 && n <= 12) return 4.0;	
	if(n >= 7 &&  n <= 9) return 3.5;	
	if(n >= 5 && n <= 6) return 3.0;	
	if(n >= 3 && n <= 4) return 2.5;
	return 1.0;		
}

double lamtron(double n){
	double s = n - (int)n;
	if(s == 0.25 || s == 0.75) n += 0.25;
//	if(s == 0.125 || s == 0.625) n-= s ;
//	if(s == 0.875) n+= 0.125 ;
	return n;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int r, l;
		double s, w;
		cin >> r >> l >> s >> w;
		double a = (doidiem(r) + doidiem(l) + s + w) / 4;
		double result = lamtron(a);
		cout << setprecision(1) << fixed << result << endl;
	}
}

//int main(){
//	int n;
//	cin >> n;
//	cout << doidiem(n);
//}