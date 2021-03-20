//20210320

//https://onlinejudge.org/external/2/272.pdf


#include<bits/stdc++.h>
using namespace std;

int main(){
	char c;
	int i=0;
	while(1){
		cin.get(c);
		if(c=='"'){
			cout<<((i%2)? "''" : "``");
			i = !i;
		}
		else{
			cout<<c;
		}
		
	}
}
