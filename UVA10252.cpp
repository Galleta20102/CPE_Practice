//20210320

//https://onlinejudge.org/external/102/10252.pdf

#include<bits/stdc++.h>
using namespace std;

int main(){
	string str1,str2;
	while(getline(cin,str1,'\n') && getline(cin,str2,'\n')){
		vector<char> same;
		for(int i=0;i<str1.length();i++){
			for(int j=0;j<str2.length();j++){
				if(str1[i] == str2[j]){
					same.push_back(str1[i]);
					str1[i]='>';
					str2[j]='>';
				}
			}
		}
		sort(same.begin(),same.end());
		for(int i=0;i<same.size();i++){
			cout<<same[i];
		}
		cout<<endl;
		same.clear();
	}
}
