#include<iostream>
using namespace std;

long long giaithua(int a){
 	long long r = 1;
 	for(int i = 1;i <=a ; i++){
 		r*=i;	
	}
	return r;
 }
 
int main(){
 	long long n;
 	cin >> n;
 	long long r = 0;
 	for(long long i = 1; i <= n;i++){
 		r+=giaithua(i);
	}
	cout << r;
 	return 0;
 }
