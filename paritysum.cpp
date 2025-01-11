#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	vector<int> ans(t);
    int flag=0;
    int max_odd=0;
    vector<int> even;
	int c=0;
	for(int i=0;i<t;i++)
	{   
		cin>>n;
		vector<int> v(n);
		for(int k=0;k<n;k++)
		{
			cin>>v[k];
		    if(v[k]%2==0)
		    {
		    	even.push_back(v[k]);
		    	c++;
			}
		    else
		    {
		    	max_odd=max(max_odd,v[k]);
			} 
		}
		if(c==n||c==0)
		ans[i]=0;
	    else
	    {  sort(even.begin(),even.end());//imp
	    	for(int k=0;k<even.size();k++)
	        {
	            if(even[k]>max_odd)
				{
				   	c++;
				   	break;
				}	
				max_odd=max(max_odd,even[k]+max_odd);
			}
			ans[i]=c;
		}
		c=0;
		even.clear();
		max_odd=0;
	}
	for(int i=0;i<t;i++)
	{
		cout<<ans[i]<<endl;
	}
	return 0;
}

