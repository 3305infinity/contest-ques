#include<bits/stdc++.h>
using namespace std;
int main()
{	
    int t;
	cin>>t;
	long long n;
	for(int j=0;j<t;j++)
	{	
	    cin>>n;
	    if(n<=3)
	    {
	    	cout<<1<<endl;
			continue;
		}
	    
	    int c=0;
		long long p=1;
	    while(p<=n)
	    {
	    	c++;
	    	p=p*4;
		}
		long long ans=1LL<<(c-1);
	    cout<<ans<<endl;
	    
	}
	return 0;
}



