//20210320

//https://onlinejudge.org/external/120/12019.pdf


#include<bits/stdc++.h>
using namespace std;

int main(){
	// 0106-4 0105-3 0104-2 0103-1 0102-7 0101-6
	int n;
	int day[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	string week[7]={"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};
	while(cin>>n){
		for(int j=0;j<n;j++){
			int m,d,ans=0;
			cin>>m>>d;
			for(int i=1;i<m;i++)
				ans+=day[i];
			ans+=d;
			cout<<week[(ans-1)%7]<<endl;
		}
	}
}
