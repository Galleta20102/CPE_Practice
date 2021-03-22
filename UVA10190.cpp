//20210322

//https://onlinejudge.org/external/101/10190.pdf


#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int num1,num2;
	while(cin>>num1>>num2){
		bool bor=false;
		vector<int> k;
		
		k.push_back(num1);
		while(1){
			//cout<<num1<<" "<<num2<<endl;
			if(num1==1){
				break;
			}
			else if (num1%num2==0){
				k.push_back(num1/num2);	
				num1 = num1/num2;
			}
			else {
				bor=true;
				break;
			}
		}
		if(bor)
			cout<<"Boring!\n";
		else{
			for(int i=0;i<k.size();i++)
				cout<<k[i]<<" ";
			cout<<endl;
		}
		k.clear();
	}
}
