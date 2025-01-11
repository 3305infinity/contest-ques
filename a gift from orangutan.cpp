#include<bits/stdc++.h>
using namespace std;
int main()
{	
    int t;
	cin>>t;
	int n;
	for(int j=0;j<t;j++)
	{	
	    cin>>n;
	   
	    vector<int>v(n);
	    int maxi=0;int mini=INT_MAX;
	    for(int i=0;i<n;i++)
	    {
	    	cin>>v[i];
	    	maxi=max(maxi,v[i]);
	    	mini=min(mini,v[i]);
	    }
	    // b will have the largest at the firt index and then it will have all the smallest in the rest indices but c will have te highest in rest indices so the formula pes as 
	    int ans=  (maxi-mini)*(n-1);
	    cout<<ans<<endl;
	}
	return 0;
}



