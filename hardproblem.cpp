#include<bits/stdc++.h>
using namespace std;
int main()
{	
    int t;
	cin>>t;
	int m,a,b,c;
	for(int j=0;j<t;j++)
	{	
	    cin>>m>>a>>b>>c;
	    int left=0;
	    int seats=0;
//	    if(a>=m && b>=m)
//	    {
//	    	seats=2*m;
//		}
//		else if(a>=m && b<=m)
//		{
//			seats=m+b;
//			if(c<m-b)
//			seats+=c;
//			else
//			seats=2*m;
//		}
//		else if(a<=m && b>=m)
//		{
//			seats=a+m;
//			if(c<m-a)
//			seats+=c;
//			else
//			seats=2*m;
//		}
//		else if(a<=m && b<=m)
//		{
//		    seats=a+b;
//			if(2*m-(a+b)<c)
//			seats=2*m;
//			else
//			seats+=c;	
//		}
//		cout<<seats<<endl;
        if(a>=m)
        {
        	seats=m;
		}
		else
		{
			seats=a;
			left=m-a;
		}
		
		if(b>=m)
		{
			seats+=m;
			
		}		
		else
		{
			seats+=b;
			left+=m-b;
		}
		if(left>c)
		{
			seats+=c;
		}
		else
		{
			seats=2*m;
		}
		
		cout<<seats<<endl;
		
	}
	return 0;
}



