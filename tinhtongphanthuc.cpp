#include<iostream>
#include<iomanip>

 using namespace std;
 
 int main(){
 	int n;
 	cin >> n;
 	double r = 0;
 	for(int i = 1; i <= n; i++){
 		r+= (double)1/i;
	}
	cout << setprecision(4) << fixed << r;
 }
