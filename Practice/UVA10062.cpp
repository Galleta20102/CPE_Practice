//20210322

//https://onlinejudge.org/external/100/10062.pdf


#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;
	while(cin>>str){
		int tmp,maxF=0,minF=99999;
		map<int,int> c;
		map<int,int>::reverse_iterator iter;
		for(int i=0;i<str.length();i++){
			c[str[i]]++;
			maxF = max(maxF,c[str[i]]);
			minF = min(minF,c[str[i]]);
		}
		for(int i=minF;i<=maxF;i++){
			for(iter=c.rbegin();iter!=c.rend();iter++){
				if(iter->second == i)cout<<iter->first<<" "<<iter->second<<endl;
			}	
		}
	}
}
