//20210322

//https://onlinejudge.org/external/109/10908.pdf


#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	while(cin>>n){
		for(int i=0;i<n;i++){
			int w,h,o;
			cin>>h>>w>>o;
			string str[h];
			int x,y;
			
			cin.get();
			cout<<h<<" "<<w<<" "<<o<<endl;
			for(int j=0;j<h;j++){
				getline(cin,str[j],'\n');
			}
			for(int j=0;j<o;j++){
				cin>>y>>x;
				int add=1,sqareSize=1;
				//cout<<str[y][x]<<endl;
				while(x+add<=w-1 && y+add<=h-1 && x-add>=0 && y-add>=0
					&& str[y-add][x]==str[y][x] && str[y][x-add]==str[y][x]
					&& str[y+add][x]==str[y][x] && str[y][x+add]==str[y][x]
					&& str[y-add][x-add]==str[y][x] && str[y+add][x-add]==str[y][x]
					&& str[y+add][x+add]==str[y][x] && str[y-add][x+add]==str[y][x]){
					sqareSize+=2;
					add++;
					//cout<<sqareSize<<endl;
				}
				cout<<sqareSize<<endl;
			}
		}
	}
}
