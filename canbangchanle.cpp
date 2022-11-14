#include<iostream>
#include<cmath>

using namespace std;

int canbangchanle(int a){
	int check = 0;
	while(a > 0){
		int i = a % 10;
		if(i%2==0) check++;
		else check--;
		a /= 10;
	}
	if(check == 0) return 1;
	else return 0;
}

int main(){
	int n;
	cin >> n;
	int dem = 0;
	for(int i = pow(10, n-1); i < pow(10, n); i++){
		if(canbangchanle(i) == 1){
			cout << i << " ";
			dem++;
		}
		if(dem == 10){
			cout << endl;
			dem = 0;
		}
	}
}