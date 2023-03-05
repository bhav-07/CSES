#include<bits/stdc++.h>
using namespace std;
#define int long long
#define rep(i,a,b) for (int i = a;i<b;i++)
#define vi vector<int>
#define pii pair<int,int>
#define ui unordered_set<int>
#define us unordered_set<string>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
const int MOD = 1e9 + 7;
const int MOD1 = 998244353;
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    int ans=0;
    for (int i = 5; i <=n ; i*=5)
    {
       ans+=n/i;
    }
    cout<<ans<<endl;
    return 0;
}