//20210322

///https://onlinejudge.org/external/114/11417.pdf


#include<bits/stdc++.h>
using namespace std;

int GCD( int n1, int n2){
	if(n2==0)return n1;
	else return GCD(n2,n1%n2);
}

int main(){
	//cout<<GCD(34,10);
	int n;
	while(cin>>n && n!=0){
		int G=0;
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				G+=GCD(i,j);
			}
		}
		cout<<G<<endl;
	}
}
