//20210317

//https://onlinejudge.org/external/100/10035.pdf


#include<bits/stdc++.h>
using namespace std;

int main(){
	string a,b;
	while(cin>>a>>b){
		if(a=="0" && b=="0")break;
		int aLen = a.length()-1,bLen = b.length()-1;
		int carryTime=0,carry=0;
		while(aLen!=-1 && bLen!=-1){
			if((a[aLen]-'0') + (b[bLen]-'0')+ carry > 9){
				carryTime++;
				carry=1;
			}
			else carry=0;
			aLen--;
			bLen--;
		}
		if(((aLen>bLen)?a[aLen]:b[bLen])+ carry > 9)
			carryTime++;
		
		if(carryTime==0)
			cout<<"No carry operation."<<endl;
		else
			cout<<carryTime<<" carry operations."<<endl;
	}
}
