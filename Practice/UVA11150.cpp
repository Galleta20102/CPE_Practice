//20210322

//https://onlinejudge.org/external/111/11150.pdf


#include<bits/stdc++.h>
using namespace std;

int main(){
	long int n;
	while(cin>>n){
		long int drink,empty;
		drink=n;
		empty=n+1;
		while(empty>=3){
			drink+=empty/3;
			empty = empty%3 + empty/3;
		}
		cout<<drink<<endl;
	}
}
