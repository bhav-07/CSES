#include<bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,a,b) for (int i = a;i<b;i++)
#define repn(n) for (int i = 0;i<n;i++)
#define repnj(n) rep(j,0,n)
#define all(x) (x).begin(),(x).end()
#define vi vector<int>
#define vs vector<string>
#define pii pair<int,int>
#define ui unordered_set<int>
#define us unordered_set<string>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define endl "\n"
const int MOD = 1e9+7;
const int MOD1 = 998244353;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t=1;
    cin>>t;
    while(t--)
{
    int n; cin>>n;
    int sum=(n*(n+1))/2;
    if(sum%2)   cout<<"NO"<<endl;
    else{
        vi v1,v2;
        for (int i = 0; i < (n-1)/4; i++)
        {
            v1.push_back(4*i +1);
            v1.push_back(4*i +4);
            v2.push_back(4*i +2);
            v2.push_back(4*i +3);
            
        }
        
    }
}
    return 0;
}   