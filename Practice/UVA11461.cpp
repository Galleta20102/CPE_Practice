//20210320

//https://onlinejudge.org/external/114/11461.pdf


#include<bits/stdc++.h>
using namespace std;

int main(){
	long arr[100000];
	long a,b;
	int count;
	for(int i=1;i<316;i++){
		arr[i*i]=1;
	}
	while(cin>>a>>b && a!=0 && b!=0){
		count=0;
		for(int i=a;i<=b;i++){
			count+=arr[i];
		}
		cout<<count<<endl;
	}
}
