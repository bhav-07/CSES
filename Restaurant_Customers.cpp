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

    //! use of prefix sum and maps
    cin.tie(0);cout.tie(0);
    int n=1; cin>>n;
    map<int,int> mp;
    for (int i = 0; i <n ; i++){
        int arrival=0,leaving=0;
        cin>>arrival>>leaving;

        mp.insert(pair<int,int>(arrival,1));
        mp.insert(pair<int,int>(leaving,-1));
    }
    int presentCustomer=0, maxCustomer=0;
    for (auto i:mp){
        presentCustomer+=i.second;
        maxCustomer=max(maxCustomer,presentCustomer);
    }
    cout<<maxCustomer<<endl;
    
    
    return 0;
}