#include<bits/stdc++.h>
using namespace std;
int main()
{	
    int t;
	cin>>t;
	
	while(t--)
	{	
	    int n,m;
	    cin>>n;cin>>m;
	    vector<int>v(n);string s;
	    for(int i=0;i<n;i++)
	    {
	    	cin>>s;
	    	v[i]=s.length();
		}int sum=0;int c=0;
		for(int i=0;i<n;i++)
		{
			sum=sum+v[i];
			c++;
			if(sum==m)
			{
				break;
			}
			if(sum>m)
			{
				c--;break;
			}
			
			
		}
		cout<<c<<endl;
	}
	return 0;
}

