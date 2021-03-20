//20210320

// https://onlinejudge.org/external/4/490.pdf


#include<bits/stdc++.h>
using namespace std;

int main(){
	while(1){
		string str[100],str2="1232";
		int strNum=0,maxL=0;
		while(getline(cin,str[strNum],'\n')){
			if(str[strNum] == ""){
				break;
			}
			int tmp=str[strNum].length();
			maxL = max(maxL,tmp);
			strNum++;
		}
		for(int i=0;i<maxL;i++){
			for(int j=strNum-1;j>=0;j--){
				if(i<=str[j].length()){
					cout<<str[j][i];
				}
				else{
					cout<<" ";
				}
			}
			cout<<endl;
		}
	}
	
}
