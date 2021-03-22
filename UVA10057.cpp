//20210322

//https://onlinejudge.org/external/100/10057.pdf


#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	while(cin>>n){
		int num[65536];
		long long int minNum=99999,maxNum=0,tmp,mid;
		for(int i=0;i<n;i++){
			cin>>tmp;
			num[tmp]++;
			maxNum = max(tmp,maxNum);
			minNum = min(tmp,minNum);
		}
		if(n%2)mid = (max+min)/2;
	}
}
