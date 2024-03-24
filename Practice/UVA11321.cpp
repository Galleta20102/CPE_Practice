#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int n,m;
	while(cin>>n && cin>>m){
		cout<<n<<" "<<m<<endl;
		if(n!=0 && m!=0){
				long long int tmp,maxM=0,minM=99999;
			map<long long int,long long int> modOdd,modEve;
			map<long long int,long long int>::iterator iter;
			
			for(int i=0;i<n;i++){
				cin>>tmp;
				if(tmp%2)modOdd[tmp]=tmp%m;
				else modEve[tmp]=tmp%m;
				maxM = max(maxM,tmp);
				minM = min(minM,tmp);
			}
			for(long long int i=-m+1;i<m;i++){
				for(int j=maxM;j>=minM;j--){
					for(iter=modOdd.begin();iter!=modOdd.end();iter++){
						if(iter->second == i && iter->first==j){
							cout<<iter->first<<endl;
						}
					}
					for(iter=modEve.begin();iter!=modEve.end();iter++){
						if(iter->second == i && iter->first==maxM-j+minM){
							cout<<iter->first<<endl;
						}
					}
				}
			}
		}
	}
}
