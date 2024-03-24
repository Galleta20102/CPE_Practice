//20210321

//https://cpe.cse.nsysu.edu.tw/cpe/file/attendance/problemPdf/10050.pdf


#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	while(cin>>n){
		while(n--){
			long int day,numOfG;
			map<int,int> hartal;
			map<int,int>::iterator iter;
			
			cin>>day>>numOfG;
			int G[numOfG],tm;
			for(int i=0;i<numOfG;i++){
				cin>>G[i];
				tm=1;
				while(G[i]*tm <= day){
					//cout<<G[i]*tm<<endl;
					if((G[i]*tm)%7!=6 && (G[i]*tm)%7!=0)
						hartal[G[i]*tm]=1;
					tm++;
				}
			}
			/*for(iter=hartal.begin();iter!=hartal.end();iter++){
				cout<<iter->first<<" ";
			}*/
			cout<<hartal.size()<<endl;
			
		}
	}
}
