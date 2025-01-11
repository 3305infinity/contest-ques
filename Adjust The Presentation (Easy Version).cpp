#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{	
    int t;
	cin>>t;
	int n,m,q;
	for(int j=0;j<t;j++)
	{
		cin>>n;
		cin>>m;
		cin>>q;
        int a[n];
        int b[m];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    stack <int>st;
		for(int i=n-1;i>=0;i--)
	    st.push(a[i]);
	    for(int i=0;i<m;i++)
	    cin>>b[i];
	    int ans=0;
	    map<int,int>mp;
		for(int i=0;i<m;i++)
		{
			if(!st.empty())
			{
				if(b[i]==st.top())
				{
					mp[st.top()]++;			
					st.pop();	
				}
				else
				{
					if(mp[b[i]]==0)
					{
						ans=-1;
						break;
					}
				}
			}
			else
				{
					if(mp[b[i]]==0)
					{
						ans=-1;
						break;
					}
				}		    
		}
		        if(ans==0)
				cout<<"YA"<<endl;
				else
				cout<<"TIDAK"<<endl;	    
	}
	return 0;
}


