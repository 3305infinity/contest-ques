#include<bits/stdc++.h>
using namespace std;
#define fr(i,a,n) for(int i=a;i<(int)(n);i++)
#define frr(i,a,n) for(int i=a;i<=(int)(n);i++)
#define ll long long int
#define all(x) (x).begin(),(x).end()
#define allr(s) s.rbegin(),s.rend()
#define vi vector<int>
#define pb push_back
#define arrin(a,n) for(int i{0};i<n;i++){cin>>a[i];}
#define ic1(x) int x;cin>>x;
#define ic2(x,y) int x,y;cin>>x>>y;
#define ic3(x,y,z) int x,y,z;cin>>x>>y>>z;
#define lic1(x) long long int x;cin>>x;
#define lic2(x,y) long long int x,y;cin>>x>>y;
#define lic3(x,y,z) long long int x,y,z;cin>>x>>y>>z;
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define vll vector<ll>
const int N=1e9+7;
const int mod=998244353;

void solve(){
    ic2(n,k);
    vi a(n);
    arrin(a,n);
    fr(i,0,n){
        int flag=1;
        fr(j,0,n){
            if(i==j)
			continue;
            if(abs(a[i]-a[j])%k==0)
			{
                flag=0;
                break;
            }
        }
        if(flag==1){
            yes;
            cout<<i+1<<endl;
            return;
        }
    }
    no;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int t=1;
    cin>>t;
    while(t--)solve();
}

