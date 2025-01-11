#include<bits/stdc++.h>
using namespace std;
int main()
{	
    int t;
	cin>>t;
	int n,x,k;
	for(int j=0;j<t;j++)
	{	
	    cin>>n;
	    cin>>k;
	    cin>>x;
	    int sum=0;
	    vector<int>v;
	    int flag=0;
	    if(k==n && n!=x)
		{
			
				cout<<"YES"<<endl;
				cout<<1<<endl;
				
					cout<<k<<" ";
				
				cout<<endl;
				continue;
		}
	    for(int i=1;i<=k;i++)
	    {
	    	if(i!=x)
	    	{
	    		if(sum+i<n)
	    		{
	    			sum=sum+i;
	    			v.push_back(i);
	    			
				}
				else if(sum+i==n)
				{
					v.push_back(i);
					flag=1;
					break;
				}
				else if(sum+i>n)
				{
					break;
				}
			}
		}
		
		if(flag==1)
		{
				cout<<"YES"<<endl;
				cout<<v.size()<<endl;
				for(int i=0;i<v.size();i++)
				{
					cout<<v[i]<<" ";
				}
				cout<<endl;
				continue;
		}
		else if(flag==0)
		{
			int a=n-sum;
			if(k==1 && x==1)
			{
				cout<<"NO"<<endl;
				continue;
			}
			if(k>1 && x!=1)
			{
				for(int i=sum+1;i<=n;i++)
				{
					v.push_back(1);
				}
				cout<<"YES"<<endl;
				cout<<v.size()<<endl;
				for(int i=0;i<v.size();i++)
				{
					cout<<v[i]<<" ";
				}
				cout<<endl;
				continue;
			}
			if(k>1 && x==1)
			{
				int f=a/2;
				if(a%2==0)
				{
					for(int i=1;i<=f;i++)
						{
							v.push_back(2);
						}
				cout<<"YES"<<endl;
				cout<<v.size()<<endl;
				for(int i=0;i<v.size();i++)
				{
					cout<<v[i]<<" ";
				}
				cout<<endl;
				continue;
				}
				if(a%2!=0)
				{
				
					if(k>=3)
					{
						for(int i=1;i<f;i++)
						{
							v.push_back(2);
						}
						v.push_back(3);
						cout<<"YES"<<endl;
						cout<<v.size()<<endl;
			        	for(int i=0;i<v.size();i++)
			        	{
					         cout<<v[i]<<" ";
				        }
				cout<<endl;
				continue;
					}
					else
					{
						cout<<"NO"<<endl;
					}
					
				}
				
			}
			
		}
		
	}
	return 0;
}
