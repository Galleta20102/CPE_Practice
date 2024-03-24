//20210319

//https://onlinejudge.org/external/113/11332.pdf


#include <bits/stdc++.h>
using namespace std;

int main(){
	
	string str;
	while(getline(cin,str,'\n') && str!="0"){
		int n=9999;
		while(n>9 && n!=0){
			n=0;
			for(int i=0;i<str.length();i++){
				n+=str[i]-'0';
			}
			stringstream ss;
			ss<<n;
			ss>>str;
		}
		cout<<n<<endl;
	}
}
