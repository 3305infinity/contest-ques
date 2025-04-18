#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
    	long long int n,k,x;
    	cin>>n>>k>>x;
    	vector<long long int>v(n);
    	long long int sum=0;
    	for(int i=0;i<n;i++)
    	{
    		cin>>v[i];sum+=v[i];
		}
		long long int rem=x%sum;
		long long int block=x/sum;
		long long int ind=0;
		if(rem!=0)
		{
		for(int i=n-1;i>=0;i--)
		{
			rem=rem-v[i];
			ind++;
			if(rem<=0)
			{
				break;
			}			
		}
	    }
	    long long int ans=n*k-ind-block*n+1;
	    cout<<max(0ll,ans)<<endl;
	}
	return 0;
}
