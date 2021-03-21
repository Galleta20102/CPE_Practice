//20210321

//https://cpe.cse.nsysu.edu.tw/cpe/file/attendance/problemPdf/1644.pdf

//Reference: https://magiclen.org/prime-number/


#include<bits/stdc++.h>
using namespace std;

bool isPrime(long long int num){
	if(num%2==0)return false;
	else if(num%6!=1 && num%6!=5){
		return false;
	}
	else{
		for(int i=3;i<=sqrt(num);i++){
			if(num%i==0)return false;
		}
		return true;
	}
}

int checkLimit(long long int num,bool direct){
	while(1){
		num=(direct)?num+1:num-1;
		if(isPrime(num)==true){
			return num;
		}
	}
}

int main(){
	long long int n;
	while(cin>>n && n!=0){
		if(isPrime(n) || n==2)cout<<"0\n";
		else{
			int tmp=n;
			int left=checkLimit(n,0),right=checkLimit(n,1);
			//cout<<left<<" "<<right<<endl;
			cout<<right-left<<endl;
		}
	}
}
