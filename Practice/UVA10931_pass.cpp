//20210320

//https://onlinejudge.org/external/109/10931.pdf


#include<bits/stdc++.h>
using namespace std;

vector<int> toBin(int num){
	vector<int> res;
	while(num){
		res.push_back(num%2);
		num/=2;
	}
	return res;
}

int main(){
	int n;
	while(cin>>n && n!=0){
		int sum=0;
		vector<int> bin = toBin(n);
		cout<<"The parity of ";
		for(int i=bin.size()-1;i>=0;i--){
			cout<<bin[i];
			if(bin[i]==1) sum++;
		}
		cout<<" is "<<sum<<" (mod 2).\n";
		bin.clear();
	}
}
