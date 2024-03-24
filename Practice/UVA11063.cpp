//20210320

//https://onlinejudge.org/external/110/11063.pdf


#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,time=0;
	while(cin>>n){
		vector<int> a;
		map<int,int> bucket;
		map<int,int>::iterator iter;
		int tmp;
		bool B2=1;
		for(int i=0;i<n;i++){
			cin>>tmp;
			a.push_back(tmp);
		}
		for(int i=0;i<a.size()-1;i++){
			for(int j=i+1;j<a.size();j++){
				bucket[abs(a[i]-a[j])]++;
			}
		}
		for(iter=bucket.begin();iter != bucket.end();iter++){
			if(iter->second > 1)B2=false;
		}
		if(B2)cout<<"Case #"<<time+1<<": It is a B2-Sequence.\n";
		else cout<<"Case #"<<time+1<<": It is not a B2-Sequence.\n";
		time++;
	}
}
