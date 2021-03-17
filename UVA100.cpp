//20210317

//https://onlinejudge.org/external/1/100.pdf


#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b;
	while(cin>>a>>b){
		int maxTime=0,n;
		for(int i=a;i<=b;i++){
			int time=1;
			n=i;
			while(n!=1){
				if(n%2!=0)n=3*n+1;
				else n/=2;
				time++;
			}
			maxTime = max(maxTime,time);
		}
		cout<<a<<" "<<b<<" "<<maxTime<<endl;
	}
}
