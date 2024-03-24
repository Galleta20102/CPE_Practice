//20210317

//https://onlinejudge.org/external/100/10041.pdf


#include <bits/stdc++.h>
using namespace std;

int main(){
	int num;
	char tmp;
	cin>>num;
	cin.get(tmp);
	while(num--){
		vector<int> s;
		string str;
		while(cin.get(tmp)){
			if(tmp == '\n'){
				break;	
			}
			else if (tmp!=' ')s.push_back(tmp-'0');
		}
		/*for(int j=0;j<s.size();j++){
			cout<<s[j];
		}
		cout<<endl;*/
		sort(s.begin(),s.end());
		if(s.size()%2==0){
			int mid = (s[s.size()-1] - s[0])/2 + s[0];
			if(abs(s[s.size()/2-1]-mid) < abs(s[s.size()/2]-mid))
				cout<<s[s.size()/2-1];
			else cout<<s[s.size()/2];	
		}
		else{
			cout<<s[s.size()/2]<<endl;
		}
	}
	
}
