//20210320

//https://onlinejudge.org/external/100/10038.pdf


#include<bits/stdc++.h>
using namespace std;

vector<long long int> num;
int main(){
	string str;
	int n;
	while(cin>>n){
		int tmp,ans=1;
		map<long long int,long long int> diff;
		for(long long int i=0;i<n;i++){
			cin>>tmp;
			num.push_back(tmp);
		}
		for(long long int i=0;i<num.size()-1;i++)
			diff[abs(num[i]-num[i+1])]++;
			
		for(long long int i=1;i<num.size();i++)
			if(diff[i]==0) ans=0;
			
		cout<<((ans)?"Jolly":"Not jolly") <<endl;
	}
	
}
