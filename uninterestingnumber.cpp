 #include<bits/stdc++.h>
using namespace std;
int main()
{	int t;
	cin>>t;
	while(t--)
	{	
	    string s;
	    cin>>s;
	    int c2=0;int c3=0;int sum=0;
	    for(int i=0;i<s.length();i++)
	    {
	    	
	    	sum=sum+(s[i]-'0');
	    	if(s[i]=='2')
	    	c2++;
	    	if(s[i]=='3')
	    	c3++;
	    	
		}
		if(sum%9==0)
		{
			cout<<"YES"<<endl;
			continue;
		}
		int rem=sum%9;int flag=0;
//		for(int i=0;i<=c2;i++)
//		{
//			for(int j=0;j<=c3;j++)
//			{
//				if(rem==(i*2+j*6))
//				{
//					flag=1;break;
//				}
//			}
//		}
//		if(flag==1)
//		cout<<"Yes"<<endl;
//		else
//		cout<<"No"<<endl;
  bool possible = false;

        // Try all possible replacements of '2'
        for (int i = 0; i <= c2; i++) {
            int needed = rem - (i * 2);
            if (needed % 6 == 0) {
                int j = needed / 6;
                if (j >= 0 && j <= c3) {
                    possible = true;
                    break;
                }
            }
        }

        cout << (possible ? "YES" : "NO") << endl;
		
	}
	return 0;
}


