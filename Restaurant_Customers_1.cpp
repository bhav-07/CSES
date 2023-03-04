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

    //! using prefix sum and vector slightly inefficient


    cin.tie(0);cout.tie(0);
    int n=1;cin>>n;
    int in[n],out[n],mx=0;
    for (int i = 0; i < n; i++){
        cin>>in[i]>>out[i];
        mx=max(mx,out[i]);
    }
    int freq[mx]={0};
    for (int i = 0; i < n; i++)
    {
        freq[in[i]]+=1;
        freq[out[i]]-=1;
    }

    for (int i = 1; i <mx ; i++)
    {
        freq[i]+=freq[i-1];
    }
    int *res=max_element(freq,freq+mx);
    cout<<*res<<endl;
    return 0;
}