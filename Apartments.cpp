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
const int MAX_N = 2e5;
int n, m, k, a[MAX_N], b[MAX_N], ans;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    cin>>n>>m>>k;
    repn(n) cin>>a[i];
    repn(m) cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
    int i=0,j=0;
    while (i<n && j<n){
        if(abs(a[i]-b[j]<=k)){
            i++,j++,ans++;
        }
        else{
            if(a[i]-b[j]>k) j++;
            else i++;
        }
    }
    cout<<ans<<endl;

    
    return 0;
}