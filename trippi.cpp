#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
    	string s;
    	getline(cin, s);
    	int n=s.length();
		string str="";
		if (s[0] != ' ') {
            str += s[0];
        }
		for(int i=0;i<n-1;i++)
		{
			if(s[i]==' ' && s[i+1]!=' ')
			{
				str=str+s[i+1];
			}
		}
		cout<<str<<endl;	
	}
}
