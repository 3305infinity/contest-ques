#include<bits/stdc++.h>
using namespace std;
int main()
{	int t,x;
	cin>>t;
	int mod=1e9+7;
	while(t--)
	{	
	    long long int n,k;
		cin>>n;
		cin>>k;
		if((n%2)%mod==0)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
		   if((k%2)%mod==0)
		   cout<<"No"<<endl;
		   else
		   {
		   	    if(n>=k)
		   	    cout<<"Yes"<<endl;
		   	    else
		   	    cout<<"No"<<endl;
		   }
		}
	}
	return 0;
}

