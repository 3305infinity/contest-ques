#include<bits/stdc++.h>
using namespace std;
int main()
{	int n;
    int t;
    cin>>t;
	while(t--)
	{	
	    cin>>n;
	    string s;
	    cin>>s;
	    int i=0;
	    int j=n-1;int ans=0;
	    while(j>i)
	    {
	    	if(s[i]=='1' && s[j]=='0' || s[i]=='0' && s[j]=='1')
	    	{
	    		i++;
	    		j--;
	    		continue;
			}
			else
			{
				break;
			}
		}
		if(i>j)
		{
			ans=0;
		}
		else
		{
			ans=j-i+1;
		}
		cout<<ans<<endl;
		
	}
	return 0;
}

