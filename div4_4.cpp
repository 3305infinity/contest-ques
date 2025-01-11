#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	string s="";
	string sub="";
	vector<int> ans(t);
	vector<int>c1(27);	
	vector<int>c2(27);	
	for(int i=0;i<27;i++)
	{
		c[i]=0;
		
	}
	for(int i=0;i<t;i++)
	{
		cin>>s;
		cin>>sub;
		for(int k=0;k<s.length();k++)
		{
			if(s[k]!='?')
			{
				c1[s[k]-'a']++;
			}
			else
			{
				c1[26]++;
			}
		}
		for(int k=0;k<sub.length();k++)
		{
			if(sub[k]!='?')
			{
				c2[s[k]-'a']++;
			}
			else
			{
				c2[26]++;
			}
		}
		if(c[26]>=sub.length())
		cout<<"YES";
		for(int i=0;i<)
	}
	
	
	
//	for(int i=0;i<t;i++)
//	{
//		cout<<ans[i]<<endl;
//	}
	return 0;
}
