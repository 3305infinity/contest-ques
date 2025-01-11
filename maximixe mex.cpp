#include<bits/stdc++.h>
using namespace std;
int main()
{	
    int t;
	cin>>t;
	int n,x;
	for(int i=0;i<t;i++)
	{
		cin>>n;
		cin>>x;
		vector<int>v(n);
		map<int,int>mp;
		for(int j=0;j<n;j++)
		{
			cin>>v[j];
			mp[v[j]]++;
		}
		int ans=0;
		for(int j=0;j<=n;j++)
		{
			int it=mp[j];
			if(!it)
			{
				ans=j;
				break;
			}
			if(it>1)
			{
				mp[j+x]+=it-1;
			}
		}
		cout<<ans<<endl;	
	}
	return 0;
}
