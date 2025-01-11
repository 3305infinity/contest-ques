#include<bits/stdc++.h>
using namespace std;
int main()
{	
    int t,row,col,k;
	cin>>t;
	int n;
	for(int j=0;j<t;j++)
	{	
	    cin>>n;
	    vector<int>a(n);
	    for(int i=0;i<n;i++)
	    {
	    	cin>>a[i];
	    }
	    int flag=0;
	    int diff=INT_MAX;int index=0;
	    for(int i=0;i<n-1;i++)
	    {
	    	if(a[i]>a[i+1])
	    	flag=1;
	    	if(a[i+1]-a[i] <diff)
	    	{
	    		diff=a[i+1]-a[i];
	    		index=i+1;
			}
		}
		if(flag)
		{
			cout<<0<<endl;
		}
		else
		{
		int ans=(a[index]-a[index-1])/2+1;
		cout<<ans<<endl;
	    }
	}
	return 0;
}
