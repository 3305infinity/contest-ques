#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	if(a==0)
	return b;
	else
	gcd(b%a,a);
}
int main()
{	int n;
    int t;
    cin>>t;
	while(t--)
	{	
	    cin>>n;
	    vector<int>v(n);
	    for(int i=0;i<n;i++)
	    {
	    	cin>>v[i];
		}int k=0;
	    for(int i=0;i<n-1;i++)
	    {
	    	for(int j=i+1;j<n;j++)
	    	{
	    		if(gcd(v[j],v[i])<=2)
	    		{
	    			k=1;
	    			cout<<"Yes"<<endl;
					break;
				}
			}
			if(k==1)
			break;
		}
		if(k==0)
		cout<<"No"<<endl;
	}
	return 0;
}

