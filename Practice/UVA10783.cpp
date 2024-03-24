//20210320

//https://onlinejudge.org/external/107/10783.pdf


#include<bits/stdc++.h> 
using namespace std;

int main(){
	int n;
	while(cin>>n){
		int a,b,ans;
		for(int i=1;i<=n;i++){
			cin>>a>>b;
			if(a%2==0)a++;
			if(b%2==0)b--;
			ans = (a+b)*((b-a)/2+1)/2;
			cout<<"Case "<<i<<" : "<<ans<<endl;
		}
		
	}
}
