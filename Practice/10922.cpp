//20210322

//https://onlinejudge.org/external/109/10922.pdf


#include<bits/stdc++.h>
using namespace std;

long long int sumDigit(long long int num){
	long long int res=0;
	while(num){
		res+=num%10;
		num/=10;
	}
	return res;
}

int main(){
	string str;
	while(getline(cin,str,'\n') && str!="0"){
		long long int sum=0;
		int time=0;
		for(int i=0;i<str.length();i++){
			sum += (str[i]-'0');
		}
		if(sum%9!=0){
			cout<<str<<" is not a multiple of 9.\n";
		}
		while(sum%9==0){
			time++;
			if(sum<=9)break;
			//cout<<sum<<endl;
			sum = sumDigit(sum);
		}
		if(time!=0)cout<<str<<" is a multiple of 9 and has 9-degree "<<time<<".\n";
	}
}
