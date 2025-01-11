#include<bits/stdc++.h>
using namespace std;
int main()
{	
    int t,row,col,k;
	cin>>t;
	int n;
	for(int j=0;j<t;j++)
	{	
	    cin>>n;
	    vector<int>v(n);
	   
		for(int i=0;i<n;i++)
	    {
	    		cin>>v[i];
		}
		if(1==v[0])
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
		
		
	}
	
	return 0;
}



