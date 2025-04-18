#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) 
	{   
	   int n;
	   cin>>n;
	   
	   if(n==1)
	   {
	   	cout<<1<<endl;
	   	continue;
	   }
	   else if(n%2==0)
	   {cout<<-1<<endl;continue;}
	   else
	   {
	   	int p=2;
	   	for(int i=1;i<(n+1)/2;i++)
	   	{
	   		cout<<p<<" ";
	   		p=p+2;
		}
		p=1;
		for(int i=(n+1)/2;i<=n;i++)
		{
			cout<<p<<" ";
			p=p+2;
		}
		cout<<endl;
	   }
	   
	}    
    return 0;
}

