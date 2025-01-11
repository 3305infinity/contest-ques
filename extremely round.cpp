#include<bits/stdc++.h>
using namespace std;
int countdigits(int n)
{   
    int c=0;
	while(n)
	{
		c++;
		n=n/10;
	}
	return c;
}
int main()
{	int n;
    int t;
    cin>>t;
    
	while(t--)
	{	
	    int ans=0;
	    cin>>n;
	    int d=countdigits(n);
	    ans=(d-1)*9 + n/(pow(10,d-1));
	   cout<<ans<<endl;
	}
	return 0;
}


