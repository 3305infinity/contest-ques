#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n,k;
    	cin>>n>>k;
    	vector<int>v(n);
    	for(int i=0;i<n;i++)
    	{
    		cin>>v[i];
		}
		sort(v.rbegin(),v.rend());
		int sum=0;
		if(k==1)
		{
			sum+=v[0];
			int a=max(v[0] + max(v[1], v[n-1]), v[n-1] + max(v[0], v[n-2]));
			sum+=a;
		}
		if(k>1)
		{
	    
		for(int i=0;i<k+1;i++)
		{
			sum+=v[i];
		}
		}
		cout<<sum<<endl;	
	}
}
