//20210321

//https://cpe.cse.nsysu.edu.tw/cpe/file/attendance/problemPdf/11541.pdf


#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	while(cin>>n){
		cin.get();
		for(int i=0;i<n;i++){
			int tmp;
			string str;
			char c;
			getline(cin,str,'\n');
			cout<<"Case "<<i+1<<": ";
			for(int j=0;j<=str.length();j++){
				if(j==str.length()||(str[j]>='A' && str[j]<='Z')){
					if(j!=0){
						for(int o=0;o<tmp;o++)
							cout<<c;
					}
					c=str[j];
					tmp=0;
				}
				else{
					tmp = tmp*10+(str[j]-'0');
				}
			}
			cout<<endl;
		}
	}
}
