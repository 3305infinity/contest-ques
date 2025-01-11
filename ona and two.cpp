#include<bits/stdc++.h>
using namespace std;
int main()
{	int n;
    int t;
    cin>>t;
	while(t--)
	{	
	    cin>>n;
	    vector<int>v(n);
	    map<int,int>m;
	    for(int i=0;i<n;i++)
	    {
	    	cin>>v[i];
	    	m[v[i]]++;
		}
		if(m[2]%2==1)
		cout<<-1<<endl;
		else
		{
			if(m[2]==0)
			{
				cout<<1<<endl;
			}
			else
			{ 
			    int c=0,ans=0;
				for(int i=0;i<n;i++)
				{
					if(v[i]==2)
					{
						c++;
					}
					if(c==m[2]/2)
					{
						ans=i+1;
						break;
					}
				}
				cout<<ans<<endl;
			}
		}
	}
	return 0;
}


