#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	string s="";
	for(int i=0;i<t;i++)
	{
		cin>>n;
		cin>>s;
		string s1=s.substr(0,n/2);
		string s2=s.substr(n/2);
		bool ans=true;
		string char1=""+s[0];
		string char2=""+s[n-1];
		string mid=s.substr(1,n-2);
		if(s1[0]==s2[s2.length()-1])
		ans=false;
//		if(s1[0]==s2[s2.length()-1] && mid!="" && char1!=mid && mid.length()>1 && (""+mid[mid.length()-1])!=char1 )
//		ans=true;
else
ans=true;
		if(ans)
		cout<<"YES"<<endl;
		else
		cout<<"No"<<endl;	
	}
	return 0;
}


