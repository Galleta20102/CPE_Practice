//20210318

//https://onlinejudge.org/external/100/10008.pdf


#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	map<char,int> latters;
	map<char,int>::iterator iter;
	while(cin>>n){
		int enterNum=0,maxin=0,minin=9999;
		char c;
		cin.get();
		while(enterNum<n){
			cin.get(c);
			if(c == '\n'){
				enterNum++;
			}
			else if(c>='A' && c<='z'){
				latters[toupper(c)]++;
				maxin = max(maxin,latters[toupper(c)]);
				minin = min(minin,latters[toupper(c)]);
				//cout<<"latters["<<c<<"]="<<latters[c]<<endl;
			}
		}
		for(int i=maxin;i>=minin;i--){
			for(iter=latters.begin();iter!=latters.end();iter++){
				if(iter->second==i)
					cout<<iter->first<<" "<<iter->second<<endl;
			}
		}
	}
	
}
