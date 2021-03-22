//20210322

//https://onlinejudge.org/external/100/10057.pdf

//Reference: https://fg123789hj.pixnet.net/blog/post/282442532-uva299%EF%BC%9Atrain-swapping


#include<bits/stdc++.h>
using namespace std;

void swap (int *a,int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
}

int main(){
	int i,t,n,l;
	
	while(cin>>n)
	{
		while(n--)
		{
			cin>>l;
			int num[l]={0},count=0;
			for(i=0;i<l;i++)
				cin>>num[i];
				
			for(i=0;i<l;i++)
			{
				for(t=0;t<l-i-1;t++)
				{
					if(num[t]>num[t+1])
					{
						swap(&num[t],&num[t+1]);
						count++;
					}
				}
			}
			cout<<"Optimal train swapping takes "<<count<<" swaps." <<endl;
		}
	}
}
