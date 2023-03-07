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
    int n,k; cin>>n>>k;
    map <int,int> mp;
    for (int i = 0; i < n; i++){
        int a; cin>>a;
        if(mp.find(k-a)!=mp.end()){
            cout<<mp[k-a]+1<<" "<<i+1;
            return 0;
        }
        mp[a]=i;
    }
    cout<<"IMPOSSIBLE"<<endl;
 
    return 0;
}