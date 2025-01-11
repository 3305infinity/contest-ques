#include<bits/stdc++.h>
using namespace std;
int main()
{	
    int t;
	cin>>t;
	while(t--)
	{	
	    int n;
	    cin>>n;string ans="";
	    if(n==1 || n==3)
	    cout<<-1<<endl;
	    if(n==2)
	    cout<<66<<endl;
	    
	    else if(n%2==1 && n>=5)
	    {
	    	for(int i=n;i>5;i--)
	    	{
	    		ans=ans+'3';
			}
			ans=ans+"36366";
			cout<<ans<<endl;
		}
		else if(n%2==0 && n>=4)
		{
		    for(int i=n;i>2;i--)
	    	{
	    		ans=ans+'3';
			}
			ans=ans+"66";
			cout<<ans<<endl;		    
		}
    }
	return 0;
}



