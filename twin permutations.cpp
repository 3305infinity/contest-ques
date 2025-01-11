
#include<bits/stdc++.h>
using namespace std;
int main()
{	int t,row,col,k;
	cin>>t;
	int n;
	for(int j=0;j<t;j++)
	{	
		cin>>n;
        int sum=0;
		
		for(int i=0;i<n;i++)
		{
			int a;
			cin>>a;
			cout<<n-a+1<<" ";// plus one so that it does not become zero 
		}
		cout<<endl;
	}
	return 0;
}



