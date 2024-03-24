//20210320

//https://onlinejudge.org/external/9/948.pdf


#include<bits/stdc++.h>
using namespace std;

int f(int num){
	if(num==0)
		return 1;
	else if(num==1)
		return 2;
	else return f(num-1)+f(num-2);
}

int main(){
	int n;
	int fib[38];
	
	for(int i=0;i<38;i++){
		fib[i] = f(i);
	}
	while(cin>>n){
		int num,time=0;
		for(int i=0;i<n;i++){
			bool one=false;
			cin>>num;
			vector<int> dec;
			cout<<num<<" = ";
			for(int j=37;j>=0;j--){
				if(num-fib[j]>=0){
					dec.push_back(1);
					num-=fib[j];
				}
				else dec.push_back(0);
			}
			for(int j=0;j<dec.size();j++){
				if(dec[j]==1)one=true;
				if(one)cout<<dec[j];
			}
			cout<<" (fib)"<<endl;
			dec.clear();
			time++;
		}
	}
}
