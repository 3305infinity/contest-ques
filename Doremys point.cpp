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
	    map<int,int>m;
		for(int i=0;i<n;i++)  
	    {
	    	cin>>v[i];
	    	m[v[i]]++;
		}
		if(m.size()>2)
		{
			cout<<"NO"<<endl;
			continue;
		}
		if(m.size()==1)
		{
			cout<<"YES"<<endl;
			continue;
		}
		int a[2];
        int c=0;
		for(auto it:m)
		{
		    a[c++]=it.second;	
		}	
		if(abs(a[0]-a[1])>1)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
		}
	}	
	return 0;
}



