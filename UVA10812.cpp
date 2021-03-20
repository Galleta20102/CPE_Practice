//20210320

//https://onlinejudge.org/external/108/10812.pdf


#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	while(cin>>n){
		for(int i=0;i<n;i++){
			int a,b;
			cin>>a>>b;
			if(a<b) cout<<"impossible"<<endl;
			else cout<<(a+b)/2<<" "<<a-(a+b)/2<<endl;
		}
	}
}
