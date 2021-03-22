//20210322

//https://onlinejudge.org/external/101/10193.pdf


#include<bits/stdc++.h>
using namespace std;

long long int f(long long int a, long long int b){
	if(b==0)return a;
	else return f(b,a%b);
}

long long int BtoD(string str){
	long long int num=0;
	for(int i=0;i<str.length();i++){
		num = num*2+(str[i]-'0');
	}
	return num;
}

int main(){
	int n;
	//cout<<f(127,6);
	while(cin>>n){
		cin.get();
		for(int i=0;i<n;i++){
			string s1,s2; 
			long long int num1,num2;
			getline(cin,s1,'\n');
			getline(cin,s2,'\n');
			num1 = BtoD(s1);
			num2 = BtoD(s2);
			//cout<<f(num1,num2)<<endl;
			if(f(num1,num2)!=1)
				cout<<"Pair #"<<i+1<<": All you need is love!\n";
			else
				cout<<"Pair #"<<i+1<<": Love is not all you need!\n";
		}
	}
}
