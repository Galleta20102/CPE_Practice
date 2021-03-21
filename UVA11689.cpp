//20210321

//https://cpe.cse.nsysu.edu.tw/cpe/file/attendance/problemPdf/11689.pdf


#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	while(cin>>n){
		for(int i=0;i<n;i++){
			int e,f,c;
			int drink=0,empty;
			cin>>e>>f>>c;
			empty=e+f;
			while(empty>=c){
				drink += empty/c;
				empty = empty/c + empty%c;
			}
			cout<<drink<<endl;
		}
	}
}
