//20210322

//https://onlinejudge.org/external/102/10242.pdf


#include<bits/stdc++.h>
using namespace std;

int main(){
	double x1,y1,x2,y2,x3,y3,x4,y4,ansX,ansY;
	while(cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4){
		if(x1==x3 && y1==y3)
			cout<<fixed<<setprecision(3)<<x2+x4-x1<<" "<<y2+y4-y1<<endl;
		else if(x2==x3 && y2==y3)
			cout<<fixed<<setprecision(3)<<x1+x4-x2<<" "<<y1+y4-y2<<endl;
		else if(x1==x4 && y1==y4)
			cout<<fixed<<setprecision(3)<<x2+x3-x1<<" "<<y2+y3-y1<<endl;
		else cout<<fixed<<setprecision(3)<<x1+x3-x2<<" "<<y1+y3-y2<<endl;
			
	}
}
