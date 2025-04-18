#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) 
	{   int n;
        cin>>n;
        vector<long long >a(n);
        long long ans=0;
        for(int i=0;i<n;i++)
        {
        	cin>>a[i];
			ans+=a[i];
        }
		if(n==1)
		{
			cout<<a[0]<<endl;
			continue;
		}        
        while(n>1)
        {
        	for(int i=0;i<n-1;i++)
        	{
        		a[i]=a[i+1]-a[i];
			}
			n--;
			long long sum=0;
			for(int i=0;i<n;i++)
			{
				sum+=a[i];				
			}
			ans=max(ans,abs(sum));
		}
		cout<<ans<<endl;
	}    
    return 0;
}

