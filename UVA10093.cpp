//20210320

//https://onlinejudge.org/external/100/10093.pdf


#include<bits/stdc++.h>
using namespace std;

int main(){
	char c;
	while(cin>>c){
		if(c>='0' && c<='9')
			cout<<(c-'0')+1<<endl;
		else if(c>='A' && c<='Z')
			cout<<(c-'A')+11<<endl;
		else
			cout<<(c-'a')+36<<endl;
	}
}
