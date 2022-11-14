#include<iostream>
#include<cmath>

using namespace std;

//long long demuocso(long long n){
//	long long count = 1;
//	for(int i = 2; i <= sqrt(n);i++){
//		if(n%i==0){
//			if(i*i!=n){
//				count = count + i + n/i;
//			} else count += i;
//		}
//	}
//	return count;
//}
bool isPerfect(long long int n)
{
    // To store sum of divisors
    long long int sum = 1;
  
    // Find all divisors and add them
    for (long long int i=2; i*i<=n; i++)
    {
        if (n%i==0)
        {
            if(i*i!=n)
                sum = sum + i + n/i;
            else
                sum=sum+i;
        }
    }
     // If sum of divisors is equal to
     // n, then n is a perfect number
     if (sum == n && n != 1)
          return true;
  
     return false;
}

int main(){
	int n;
	cin >> n;
	while(n--){
		long long a;
		cin >> a;
		if(isPerfect(a)){
			cout << 1 << endl;
		} else {
			cout << 0 << endl;
		}
	}
}