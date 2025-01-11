#include<bits/stdc++.h>
using namespace std;
int main()
{	
    int t;
	cin>>t;
	int n;
	for(int j=0;j<t;j++)
	{	
	    cin>>n;
	    if(n>33)
	    {
	    	if(n%33==0)
	    {
	    	cout<<"yes"<<endl;
	    	continue;
		}
		else
		{
			while(n%33!=0 && n>33)
			{
			    string s=to_string(n);
				for(int i=0;i<n-1;i++)
				{
					if(a[i]=='3' && a[i+1]=='3' )
					{
						n=stoi(s.substr(0,i)+s.substr(i+2));
						break;
					}
				}
				n=n-33;
			}
			if(n%33==0)
			cout<<"yes"<<endl;
			else
			cout<<"no"<<endl;
		}
		
		}
		else
		{
			cout<<"no"<<endl;
		}
	    
	}
	return 0;
}



