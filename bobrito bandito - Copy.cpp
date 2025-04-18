#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n,m,l,r;
    	cin>>n>>m>>l>>r;
    	int d=n-m;
    	if(r-d>=0)
    	{
    	    r=r-d;
    	    d=0;
    	    
    	}
    	if(r-d<0)
    	{
    	    d=d-r;
    	    r=0;
    	    
    	}
    	if(d>0 )
    	{
    	    l=l+d;
    	}
    	cout<<l<<" "<<r<<endl;
    	
	}
}
