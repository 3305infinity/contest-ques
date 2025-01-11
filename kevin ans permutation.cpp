#include<bits/stdc++.h>
using namespace std;
int main()
{	
    int t;
	cin>>t;

	while(t--)
	{	
		int n,k;
	    cin>>n>>k;
	    vector<int>v(n,0);int p=1;
	    for(int i=k-1;i<n;i=i+k)
	    {
	    	v[i]=p++;
		}
		for(int i=0;i<n;i++)
		{
			if(v[i]==0)
			 v[i]=p++;
		}
		for(int i=0;i<n;i++)
		cout<<v[i]<<" ";
		cout<<endl;
	    
	}
	return 0;
}



