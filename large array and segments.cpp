#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n,k,x;
		cin>>n>>k>>x;long long int sum=0;
		vector<int>a(n);
			for(int i=0;i<n;i++)
			{
				cin>>a[i];
				sum+=a[i];
			}
//			int q=k/n+1;
//			int rem=k%n;
//			long long int tot=q*sum;
//			for(int i=0;i<rem;i++)
//			tot+=a[i];
//			int l=0;int r=n*k-1;
//			if(tot<x)
//			{
//				cout<<0<<endl;continue;
//			}
//			int ans=0;
//			while(l<r)
//			{
//				
//				long long int temp=tot;
//				r=n*k-1;
//				while(temp>x)
//				{
//					if(r<n)
//					temp-=a[r];
//					else
//					temp-=a[r/n+r%n];
//					r--;
//				}
//				r++;
//				tot=tot-a[l];
//				l++;
//				ans+=(n*k-r+1);
//				
//			}
//			cout<<ans<<endl;
            vector<int>pre(n*k,a[0]);
            for(int i=1;i<n*k;i++)
            {
            	if(i>n)
            	{
            		pre[i]=pre[i-1]+a[i/k+i%k];
				}
				else
				{
					pre[i]=pre[i-1]+a[i];
				}
				cout<<pre[i]<<" ";
			}



	}
}
