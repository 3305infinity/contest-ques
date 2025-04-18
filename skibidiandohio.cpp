#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int n=s.length();
        int i=0;
        for(i=n-1;i>=0;i--)
        {
        	if(s[i]==s[i-1])
        	{
        		n=1;
        		break;
			}
		}
		cout<<n<<endl;
		
	}

}

