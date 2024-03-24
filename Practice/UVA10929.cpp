//20210318

//https://onlinejudge.org/external/109/10929.pdf


#include <bits/stdc++.h>
using namespace std;

int main(){
	string str;
	while(cin>>str && str!="0"){
		int num1=0,num2=0;
		for(int i=0;i<str.length();i++){
			((i%2)?num1:num2) += (str[i]-'0');
		}
		if(abs(num1-num2)%11==0)
			cout<<str<<" is a multiple of 11.\n";
		else
			cout<<str<<" is not a multiple of 11.\n";
	}
}
