//20210321

//https://cpe.cse.nsysu.edu.tw/cpe/file/attendance/problemPdf/11536.pdf


#include<bits/stdc++.h>
using namespace std;

int main(){
	int num;
	while(cin>>num){
		for(int i=0;i<num;i++){
			int n,m,k,ans=0;
			bool check;
			cin>>n>>m>>k;
			int arrK[k+1],seq[n+1];
			
			for(int j=1;j<=k;j++){
				arrK[j]=0;
				
			}
			
			for(int j=1;j<=n;j++){
				if(j<4)seq[j]=j;
				else seq[j] = (seq[j-1]+seq[j-2]+seq[j-3])%m+1;
				//cout<<"*seq["<<j<<"]="<<seq[j]<<endl;
				
				if(seq[j]<=k && arrK[seq[j]]==0){
					//cout<<" arrK["<<seq[j]<<"]="<<arrK[seq[j]]<<endl;
					arrK[seq[j]]=1;
					check=1;
					for(int o=1;o<=k;o++){
						if(arrK[o]==0)check=0;
						//cout<<"  arrK["<<o<<"]="<<arrK[o]<<endl;
					}
					if(check==1){
						ans=j;
						break;
					}
				}
			}
			if(ans==0)
				cout<<"Case "<<i+1<<": sequece nail"<<endl;
			else cout<<"Case "<<i+1<<": "<<ans-1<<endl;
		}
	}
}
