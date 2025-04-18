#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) 
	{   
	    int a,b,c;
	    cin>>a>>b>>c;
		int cnt=1;
		int sum=0;
		c=c%(a+b);
	    while(true)
	    {
	    	if(cnt%2==1)
	    	{
	    		sum+=a;
	    		if(sum>c)
	    		{cout<<"NO"<<endl;
				break;	}    		
			}
			else 
			{
				sum+=b;
	    		if(sum>c)
	    		{ cout<<"YES"<<endl;
				break;}				
			}
			cnt++;
		}		
	}    
    return 0;
}

