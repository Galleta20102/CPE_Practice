//20210318

//https://onlinejudge.org/external/104/10420.pdf


#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	string country,tmp;
	while(cin>>n){
		map<string, int> ctryGuys;
		map<string,int>::iterator iterCtry;
		cin.get();
		for(int i=0;i<n;i++){
			getline(cin,country,' ');
			getline(cin,tmp,'\n');
			ctryGuys[country]+=1;
			//cout<<country<<" "<<tmp<<" "<<ctryGuys[country]<<endl;
		}
		for(iterCtry=ctryGuys.begin();iterCtry!=ctryGuys.end();iterCtry++){
			cout<<iterCtry->first<<" "<<iterCtry->second<<endl;
		}
	}
}
