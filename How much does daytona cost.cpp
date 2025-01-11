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
	    cin>>k;
	    map<int,int>m;
	    vector<int>v(n);
	    int flag=0;
	    
	    for(int i=0;i<n;i++)
	    {
	    	cin>>v[i];  
	    	if(v[i]==k)
	    	flag=1;
	    }      
	     if(flag)
	     cout<<"YES"<<endl;
	     else
	     cout<<"NO"<<endl;
	}
	return 0;
}



