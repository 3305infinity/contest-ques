#include<bits/stdc++.h>
using namespace std;
int main()
{	
    int t;
	cin>>t;
	while(t--)
	{	
	    int n;
	    cin>>n;
	    vector<int>a(n);
	    for(int i=0;i<n;i++)
	    {
	    	cin>>a[i];
		}
		int ans=1;
		int maxi1=1;int sec1=1;
		int sec2=1;
		int maxi2=1;
//	    vector<leftsum>v(n-1);
	    if(n&1)//odd
	    {
		    for(int i=1;i<n;i+=2)
			{
			    int diff1=a[i]-a[i-1];
			    if(diff1>=maxi1)
			    {
			    	sec1=maxi1;
			    	maxi1=diff1;
				}
			}	
			for(int i=2;i<n;i+=2)
			{
				int diff2=a[i]-a[i-1];
			    if(diff2>=maxi2)
			    {
			    	sec1=maxi2;
			    	maxi2=diff2;
				}
			}
			int ans=min(sec1,sec2);
			cout<<ans<<endl;
		}
		else
		{int maxi=1;
			for(int i=0;i<n;i+=2)
			{
				maxi=max(a[i+1]-a[i],maxi);
			}
			cout<<maxi<<endl;
		}
    }
	return 0;
}
