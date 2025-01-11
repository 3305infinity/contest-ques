#include<bits/stdc++.h>
using namespace std;
int main()
{	int t,n;
	cin>>t;
	for(int i=0;i<t;i++)
	{   
	    int c=4;
	    int r=0;
	    cin>>r;
	    vector<int>ans(r);
        vector <vector<char>> v(r, vector<char> (4));
	    int ansindex=r-1;
	    for(int j=0;j<r;j++)
	    {   
	    	for(int k=0;k<c;k++)
	    	{
	    		cin>>v[j][k];
	    		if(v[j][k]=='#')
	    		{ ans[ansindex]=k+1;
	    		ansindex--;}
			}
			
		}
		for(int j=0;j<r;j++)
     	{	cout<<ans[j]<<" "; }
		
		cout<<endl;
	}
	return 0;
}

