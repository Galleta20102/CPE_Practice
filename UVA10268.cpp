//20210320

//https://onlinejudge.org/external/102/10268.pdf


#include<bits/stdc++.h>
using namespace std;

int main(){
	int x;
	string str;
	while(cin>>x){
		vector<int> a;
		int tmp=0,n,ans=0;
		cin.get();
		getline(cin,str,'\n');
		for(int i=0;i<=str.length();i++){
			if((i==str.length() || str[i]==' ') && i!=0){
				//cout<<tmp<<" ";
				a.push_back(tmp);
				tmp=0;
			}
			else{
				tmp = tmp + (str[i]-'0');
			}
		}
		n=a.size()-1;
		for(int i=0;i<a.size()-1;i++){
			ans = ans + a[i]*(n-i)*pow(x,n-i-1);
		}
		cout<<ans<<endl;
		
	}
}
