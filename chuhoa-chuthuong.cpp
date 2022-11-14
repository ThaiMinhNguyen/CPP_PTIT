#include<iostream>
#include<cctype>
 using namespace std;
 
 int main(){
 	int n;
 	cin >> n;
 	for(int i = 0; i < n;i++){
 		char a;
 		cin >> a;
 		if ('a'<=a && a <= 'z'){
 			char r = toupper(a);
 			cout << r << endl;
		} else {
			char r = tolower(a);
			cout << r << endl;
		}
	 }
 	return 0;
 }
