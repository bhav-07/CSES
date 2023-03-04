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
    int n; cin>>n;
    if (n<4 && n!=1)
    {
        cout<<"NO SOLUTION"<<endl;
    }
    
    int j=0;
    for (int i = 0; i < n/2; i++)
    {
        cout<<2*(i+1)<<" ";
    }
    for (int i = n/2; i < n; i++)
    {
        cout<<2*j+1<<" ";
        j++;
    }
    
    
    return 0;
}