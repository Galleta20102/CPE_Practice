//20210321

//https://cpe.cse.nsysu.edu.tw/cpe/file/attendance/problemPdf/10415.pdf


#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	string mel="cdefgabCDEFGAB";
	string finger[14]={"0111001111","0111001110","0111001100","0111001000"
						,"0111000000","0110000000","0100000000","0010000000"
						,"1111001110","1111001100","1111001000","1111000000"
						,"1110000000","1100000000"};
	while(cin>>n){
		cin.get();
		for(int t=0;t<n;t++){
			string str;
			int sum[10]={0,0,0,0,0,0,0,0,0,0},index;
			int nowFing[10] = {0,0,0,0,0,0,0,0,0,0};
			
			getline(cin,str,'\n');
			for(int i=0;i<str.length();i++){
				
				index = mel.find(str[i],0);
				for(int j=0;j<10;j++){
					if(nowFing[j]==0 && (finger[index][j]-'0')==1){
						sum[j]++;
					}
					nowFing[j]=(finger[index][j]-'0');
				}
			}
			for(int i=0;i<10;i++){
				cout<<sum[i]<<' ';
			}
			cout<<endl;
		}
	}
}
