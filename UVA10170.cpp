//20210320

//https://onlinejudge.org/external/101/10170.pdf


#include<bits/stdc++.h>
using namespace std;

int main(){
	int S,D;
	while(cin>>S>>D){
		int people=0;
		while(people<D){
			people+=S;
			S++;
		}
		cout<<S-1<<endl;
	}
}
