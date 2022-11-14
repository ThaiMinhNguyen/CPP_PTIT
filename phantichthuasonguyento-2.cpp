#include<iostream>
#include<cmath>

using namespace std;

int main(){
	long long a;
	cin >> a;
	long long s = sqrt(a);
	for(long long i = 2; i <= s; i++){
		int count = 0;
		while(a%i == 0 && a > 0){
			a=a/i;
			count++;
		}
		if(count > 0){
			cout << " " <<  i << " " << count << endl;
		}
	}
	if(a!=1){ cout<<""<<a<<" 1"; }
}