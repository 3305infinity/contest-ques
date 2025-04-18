#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) 
	{
		int n,k;
		cin>>n>>k;
        string s;
        cin>>s;
        vector<int>v(26,0);
        int evencount=0;int oddcount=0;
        for(int i=0;i<n;i++)
        {
        	v[s[i]-'a']++;
		}
		for(int i=0;i<26;i++)
		{
			if(v[i]%2==0 && v[i]!=0)
			evencount++;
			else if(v[i]%2==1)
			{
				evencount+=v[i]/2;
				oddcount++;
			}
		}
			
	    if(k>oddcount)
	    {
	   	   k=k-oddcount;oddcount=0;
	    }
	    else if(k<oddcount)
	    {
	   	    oddcount=oddcount-k;
	   	    k=0;
	    }
	    
	    if(k==oddcount+1 || k==oddcount-1 || oddcount==0  || k==oddcount || oddcount==1 || k%2==0 && (oddcount==1 || oddcount==0))
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;		
    }
    return 0;
}

