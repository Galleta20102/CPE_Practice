//20210322

//https://onlinejudge.org/external/102/10235.pdf


#include<bits/stdc++.h>
using namespace std;

bool isPrime(long long int num){
	if(num==2) return 1;
	else if(num%2==0) return 0;
	else if(num%6!=1 && num%6!=5){
		return 0;
	}
	else{
		for(int i=3;i<=sqrt(num);i++){
			if(num%i==0) return 0;
		}
		return 1;
	}
}

long long int res(long long int num){
	long long int res=0;
	while(num){
		res = res*10+num%10;
		num/=10;
	}
	return res;
}

int main(){
	//cout<<isPrime(971);
	long long int n;
	while(cin>>n){
		if(isPrime(n)){
			if(isPrime(res(n)))
				cout<<n<<" is emirp.\n";
			else cout<<n<<" is prime.\n";
		}
		else cout<<n<<" is not prime.\n";
	}
}
