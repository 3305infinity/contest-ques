#include<bits/stdc++.h>
using namespace std;
int main()
{	
    int x1,y1,x2,y2;
    int t;
    cin>>t;
	while(t--)
	{	
	    cin>>x1>>y1>>x2>>y2;
	    int deltax=x2-x1;
	    int deltay=y2-y1;
	    int ans=0;
	    if(y2<y1)
	    {
	    	cout<<-1<<endl;
	    	continue;
		}
		if(deltax > deltay )
		
		{
			cout<<-1<<endl;
	    	continue;
		}
		cout<< deltay+deltay-(deltax)<<endl;;
	    
	    
	    
	}
	return 0;
}

