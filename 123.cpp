#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin>>t;
	int n,m;
	string s="";
	while(t--)
	{	cin>>n;
		vector<int>v(n);
		vector<int>close(n);
		bool ans=false;
		int maxi=0;
		int mini=100;
		for(int i=0; i<n; i++)
		{
			cin>>v[i];
			maxi=max(v[i],maxi);
			mini=min(v[i],mini);
		}

		if(maxi-mini==1)
			ans=false;
		else
		{
			close[0]=v[1]-v[0];
			close[n-1]=v[n-1]-v[n-2];
			for(int i=1; i<n-1; i++)
			{
				close[i]=v[i+1]-v[i];
			}
			while(maxi>=mini)
			{
				ans=false;
				for(int i=0; i<n; i++)
				{
				    if(maxi==v[i])
				    {
				        ans=false;
				        break;
				    }
					if(abs(maxi-v[i])>close[i])
					{
						ans=false;
						break;
					}
					else
					ans=true;
				}
				if(ans)
				{
					break;
				}
				maxi--;
			}
		}
		if(ans)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}


