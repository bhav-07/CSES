#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

signed main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n; cin>>n;
    int l = 1;
    int a[n+1] = {0};
    for (int i = 1; i <= n; i++) {
    	int x; cin>>x;
    	a[x] = i;
    }
    int c = 1;
    for (int i = 1; i <= n; i++) {
    	if (l > a[i]) 
    		c++;
    	l = a[i];
    }
    cout<<c;
}