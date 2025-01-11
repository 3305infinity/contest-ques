#include<bits/stdc++.h>
using namespace std;
int main()
{	
    int t;
	cin>>t;
	while(t--)
	{	
	    long long int n,m,r,c;
	    cin>>n>>m>>r>>c;
	    long long int diff=(m-c)+m*(n-r)+(m-1)*(n-r);
	    cout<<diff<<endl;   
	}
	return 0;
}



