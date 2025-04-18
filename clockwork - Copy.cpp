#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) 
	{
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        cin>>a[i];
        bool flag=true;
        int mini=INT_MAX;int minindex=0;
        for(int i=0;i<n;i++)
        {
        	if(a[i]<=2*i || a[i]<=2*(n-i-1))
        	{
        		flag=false;break;
			}
		}
		
		if(flag)
		cout<<"Yes"<<endl;
		else
		cout<<"No"<<endl;
    }
    return 0;
}

