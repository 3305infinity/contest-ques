#include<bits/stdc++.h>
using namespace std;
int main()
{	
    int t,row,col,k;
	cin>>t;
	int a,b,c;
	for(int j=0;j<t;j++)
	{	
	    cin>>a>>b>>c;
	    if(b>a)
	    cout<<"Second"<<endl;
	    else
	    {
	    	if(c%2!=0 && b==a || b>a)
	    	cout<<"First"<<endl;
	    	else if(a>b)
	    	cout<<"First"<<endl;
	    	else
	    	cout<<"Second"<<endl;
		}
	    
	}
	return 0;
}



