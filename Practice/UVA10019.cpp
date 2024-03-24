//20210320

//https://onlinejudge.org/external/100/10019.pdf


#include<bits/stdc++.h>
using namespace std;

vector<int> convert(int num, int base){
	vector<int> result;
	while(num){
		result.push_back(num%base);
		num/=base;
	}
	return result;
}

int main(){
	int n,dec;
	while(cin>>n){
		for(int i=0;i<n;i++){
			int b=0,h=0,tmp;
			cin>>dec;
			vector<int> bin=convert(dec,2);
			vector<int> hex;
			for(int j=0;j<bin.size();j++){
				if(bin[j]==1)b++;
			}
			while(dec){
				tmp = dec % 10;
				hex = convert(tmp,2);
				for(int j=hex.size()-1;j>=0;j--){
					if(hex[j]==1)h++;
				}
				dec/=10;
				hex.clear();
			}
			
			cout<<b<<" "<<h<<endl;
			bin.clear();
			hex.clear();
		}
	}
}
