#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
		cin>>n;
		vector<int>f(30,0);// frequency of the numers having that bit set 
		vector<int>v(n);
		for(int i=0;i<n;i++)
		cin>>v[i];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<30;j++)//checking set bits as the range is from 0 to 30 
			{
				if((1LL<<j)&v[i])
				{
					f[j]++;
				}
			}
		}
		long long maxi=0;
		for(int i=0;i<n;i++)
		{
			long long  ans=0;
			for(int j=0;j<30;j++)
			{
				if(v[i]&(1<<j))// if the bit of v[i] is set then we have to take the bits that are not set 
				{
					ans+=(1LL<<j)*(n-f[j]);
				}
				else 
				{
					ans+=(1LL<<j)*(f[j]);
				}
			}
			maxi=max(maxi,ans);
		}
		cout<<maxi<<endl;
	}
}
