
#include<bits/stdc++.h>
using namespace std;
int main()
{	int t,row,col,k;
	cin>>t;
	int n,x;
	
	for(int i=0;i<t;i++)
	{	cin>>n;
	    cin>>x;
	    vector<int>a(n);
	    
	    cin>>a[0];
	    int diff=a[0];
	    for(int i=1;i<n;i++)
	    {
	    	cin>>a[i];	
	    	diff=max(diff,a[i]-a[i-1]);
		}
		int d=x-a[n-1];
        int ans=max(2*d,diff);
        cout<<ans<<endl;
		
			
	}
	return 0;
}



