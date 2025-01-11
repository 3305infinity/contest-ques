#include<bits/stdc++.h>
using namespace std;
int main()
{	
    int t;
	cin>>t;
	long long n,d;
	for(int j=0;j<t;j++)
	{	
	    cin>>n>>d;
		long long p=1;
//	    
	    cout<<1<<" ";
	    if(d%3==0 || n>=3)
	    cout<<3<<" ";
	    if(d%5==0)
	    cout<<5<<" ";
	    if(n>=3 || d%7==0)
	    cout<<7<<" ";
	    
		if(n>=3 && d%3==0 || n>=6|| d%9==0)
	    {
	      cout<<9;
		}
		else if(n==3 && (d*6)%9==0)
	    cout<<9;
	    else if(n==4 && (d*24)%9==0)
	    cout<<9;
	    else if(n==5 && (d*120)%9==0)
	    cout<<9;
			    
		cout<<endl; 
	}
	return 0;
}



