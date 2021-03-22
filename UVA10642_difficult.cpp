//20210322

//https://onlinejudge.org/external/106/10642.pdf

//Reference: https://fg123789hj.pixnet.net/blog/post/282321356-uva10642%EF%BC%9Acan-you-solve-it%3F

#include <iostream>
using namespace std;

int main()
{
	
	int n,x1,y1,x2,y2,i;
	cin>>n;
    for(i=1;i<=n;i++)
    {
		cin>>x1>>y1>>x2>>y2;
    	int count=0;
		count+=(y1+x1+1+y2+x2)*(y2+x2-y1-x1)/2;
		count+=(x2-x1);
		 
		cout<<"Case "<<i<<": "<<count<<endl;
	}
    return 0;
}
