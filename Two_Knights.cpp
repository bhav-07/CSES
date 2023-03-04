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
 
void tower(int n, char from, char to, char aux) {
    if (n == 0) return ;
    tower(n - 1, from, aux, to);
    cout << from << " " << to << endl;
    tower(n - 1, aux, to, from);
}
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    // int t = 1;
    // cin >> t;
    // while (t--) {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        int a1 = i * i, a2 = a1 * (a1 - 1) / 2;
        if (i > 2) {
            a2 -= 4 * (i - 1) * (i - 2);
        }
        cout << a2 << endl;
    }
    return 0;
}
