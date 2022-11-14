#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	double a[t];
	for(int i = 0; i < t; i++){
		cin >> a[i];
	}
	int count = 0;
	sort(a, a+t);
	double s;
	double min = a[0];
	double max = a[t-1];
	for(int i = 0; i < t; i++){
		if(a[i] > min && a[i] < max){
			s+=a[i];
			count ++;
		}
	}
	double res = (double) s/count;
	cout << setprecision(2) << fixed << res;
}
