

#include<iostream>
#include<math.h> 
using namespace std; 
int check(int a){ 
	int q=0; 
	for(int i=1;i<=sqrt(a);i++){ 
		if(a%i==0){ 
			if(i%2==0) q++; 
			if((a/i)%2==0) q++; 
			if(i*i==a && a%2==0) q--; } 
	} return q; 
} 

int main() { 
	int n; cin >> n; while(n--){ int a; cin >> a; cout << check(a) << endl; } }
//
//#include<iostream>
//#include<cmath>
//
//using namespace std;
//
//int main(){
//	int n;
//	cin >> n;
//	while(n--){
//		int a;
//		cin >> a;
//		int count = 0;
//		for(int i = 2; i <= sqrt(a); i++){
//			if(a%i==0){
//				if(i%2==0) count++;
//			}	
//		}
//		cout << count << endl;
//	}
//}