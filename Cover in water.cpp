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
	    string s;
	    cin>>s;
	    vector<int>a;
        int size=0;
	    int c=0;
	    for(int i=0;i<n;i++)
	    {
	    	if(s[i]=='.')
	    	{
	    		c++;
	    		
			}
			else if(s[i]=='#')
			{
				if(c!=0)
				{
					a.push_back(c);
					size++;
				}
				c=0;
			}
		}
		if(c!=0)
				{
					a.push_back(c);
					size++;
				}
		int sum=0;
		bool flag=false;
	    for(int i=0;i<size;i++ )
	    {   sum=sum+a[i];
	    	if(a[i]>=3)
	    	{
	    		cout<<2<<endl;
	    		flag=true;
	    		break;
			}
		}
		if(!flag)
		cout<<sum<<endl;
	}
	return 0;
}



