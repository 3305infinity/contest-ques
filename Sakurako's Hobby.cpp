#include<bits/stdc++.h>
using namespace std;
int main()
{	int t,n;
	cin>>t;
	int l,r;
	for(int i=0;i<t;i++)
	{   cin>>n;
		string s="";
		vector<int>p(n);
		vector<int>ans(n);
	    map<int,int>m;
		for(int j=0;j<n;j++)
		{
			cin>>p[j];
			m[p[j]]=j;
		}
		cin>>s;
		for(int index=1;index<=n;index++)
		{   int c=0;
	      	int newindex=0;
			for(int j=p[index-1];j<n;)
			{
			    	newindex=p[j-1];
			    	if(s[m[newindex]]=='1')
			    	c++;
			    	if(j==newindex)
			    	break;
			    	j=newindex;
			}
			ans[index]=c;
		}
		for(int i=0;i<n;i++)
		cout<<ans[i];
		cout<<endl;
	}
	return 0;
}

