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
    string str;
    cin>>str;
    int mx=1;
    int curr=1;
    for (int i = 1; i < str.length(); i++){
        if (str[i]==str[i-1]){
            curr++;
            mx=max(curr,mx);
        }
        else{
            curr=1;
        }   
    }
    cout<<mx<<endl;
    return 0;
}