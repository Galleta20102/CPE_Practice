//20210320

//https://onlinejudge.org/external/100/10038.pdf


#include<bits/stdc++.h>
using namespace std;



int main(){
	string str;
	int n;
	while(cin>>n){
		int tmp,ans=1;
		vector<int> num;
		map<int,int> diff;
		for(int i=0;i<n;i++){
			cin>>tmp;
			num.push_back(tmp);
		}
		for(int i=0;i<num.size()-1;i++)
			diff[abs(num[i]-num[i+1])]++;
			
		for(int i=1;i<num.size();i++)
			if(diff[i]==0) ans=0;
			
		cout<<((ans)?"Jolly":"Not jolly") <<endl;
	}
	
}
