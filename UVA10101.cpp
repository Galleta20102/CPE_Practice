//20210318

//https://onlinejudge.org/external/101/10101.pdf


#include <bits/stdc++.h>
using namespace std;

int twoDigitInt(string s, int digit){
	int a = s[digit]-'0';
	int b = s[digit+1]-'0';
	return a*10+b;
}

int main(){
	string str;
	string Eng[4]={"shata","hajar","lakh","kuti"};
	int digit[4] = {1,2,2,2};
	while(cin>>str){
		vector<string> s_ans;
		vector<int> i_ans;
		if(str.length()<3)
			cout<<str<<endl;
		else{
			int i=str.length()-2,flag=0;
			i_ans.push_back(twoDigitInt(str,2));
			while(i>0){
				if(i-2>=0 && flag!=0){
					i-=2;
					i_ans.push_back(twoDigitInt(str,i));
				}
				else{
					i--;
					i_ans.push_back(str[i]-'0');
				}
				
				s_ans.push_back(Eng[flag]);
				flag = (flag == 3)? 0 : flag+1;
			}
			for(int o=s_ans.size()-1;o>=0;o--){
				cout<<i_ans[o+1]<<" "<<s_ans[o]<<" ";
			}
			cout<<i_ans[0]<<endl;
			i_ans.clear();
			s_ans.clear();
			}
	}
}
