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
    	// k is odd number
    	int op=0;
    	if(n==k)
    	{
    		cout<<1<<endl;
    		continue;
		}
    	if(n%2!=0)
    	{
    		n=n-k-2;
    		op++;
    		int fac=n/(k-1);
    		op+=fac+1;
		}
		else
		{
			int fac=n/(k-1);
    		op+=fac;
    		int rem=n%(k-1);
    		if(rem)
    		op++;
		}
		cout<<op<<endl;
		
	}
}
