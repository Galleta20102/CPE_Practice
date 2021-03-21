//20210320

//https://onlinejudge.org/external/113/11349.pdf

#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	while(cin>>n){
		for(int i=0;i<n;i++){
			char c;
			int ans=1,num;
			cin>>c>>c>>num;
			int** m = new int*[num];
			for(int j=0;j<num;j++){
				m[j] = new int[num];
			}
			for(int j=0;j<num;j++){
				for(int k=0;k<num;k++){
					cin>>m[j][k];
				}
			}
			for(int j=0;j<num;j++){
				for(int k=0;k<num;k++){
					if(m[j][k] != m[num-j-1][num-k-1]){
						ans=0;
						break;
					}
				}
			}
			
			cout<<"Test #"<<i+1<<": "<<((ans)?" Symmetric.":"Non-symmetric.")<<endl;
			
			for(int j=0;j<num;j++)
				delete [] *(m+j);
			delete [] m;
		}
	}
}
