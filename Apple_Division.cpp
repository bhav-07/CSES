#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n,a[20];
    cin>>n;
    ll s=0,ans=0; 
    for(int i=0; i<n; i++){
        cin>>a[i];
        s+=a[i];
    }

    //! using bitmask to go through all subsets

    for(int i=0;i< 1<<n;i++){
        ll cs=0;
        for (int j = 0; j < n; j++){
            if(i>>j&1){
                cs+=a[j];
            }
        }
        if(cs<=s/2) ans=max(ans,cs);
    }
    cout<<s-2*ans<<endl;
    return 0;
}