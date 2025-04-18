#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n,m,k;
    	// n row  --  m col
    	cin>>n>>m>>k;	
    	int left=k%n;
    	int col=k/n;
    	// one col has left+col
    	int rem=0;
    	if(left==0)
    	rem=col;
    	else if(left<n)
    	rem=col+1;
    	else
    	rem=col+left;
    	int spaceleft=m-rem;
    	if(spaceleft==0)
    	cout<<rem<<endl;
    	else
    	{
    		int x=spaceleft+1;
    		int n=rem%x;
    		if(n>0)
    		cout<<(rem/x)+1<<endl;
    		else
    		cout<<rem/x<<endl;
		}
    	
	}
}
