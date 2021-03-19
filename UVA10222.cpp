//20210318

//https://onlinejudge.org/external/102/10222.pdf


#include <bits/stdc++.h>
using namespace std;

int main(){
	string orinStr = "ertyuiop[]dfghjkl;'cvbnm,.";
	string resulStr = "qwertyuiopasdfghjklzxcvbnm";
	string str;
	while(getline(cin,str,'\n')){
		for(int i=0;i<str.length();i++){
			if(str[i]==' ')
				cout<<' ';
			else{
				//cout<<resulStr.find('e',0);
				cout<<resulStr[orinStr.find(tolower(str[i]),0)];
			}
		}
		cout<<endl;
	}
} 
