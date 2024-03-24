//20210320

//https://onlinejudge.org/external/100/10056.pdf

//Referance: https://reurl.cc/V32zbQ
//Referance: https://kai-y.medium.com/uva-10056-what-is-the-probability-2985ac5d50cb


#include<bits/stdc++.h>
using namespace std;

double degreeProb(double num,int degree){
	double result=num;
	if(degree == 0)
		return 1;
	else{
		for(int i=1;i<degree;i++){
			result*=num;
		}
		return result;
	}
}

int main(){
	int n;
	while(cin>>n){
		double people,winner,probW,probL,a,r;
		for(int i=0;i<n;i++){
			cin>>people>>probW>>winner;
			probL = 1-probW;
			
			if(probW == 0.0){
				cout<<"0.0000"<<endl;
			}
			else{
				printf("%.4f\n",degreeProb(probL,winner-1)*probW / (1-degreeProb(probL,people)));
			}
		}
	}
}
