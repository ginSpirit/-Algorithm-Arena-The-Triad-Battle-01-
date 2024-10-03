#include <bits/stdc++.h>
#define input(v) for(auto &i : v) cin >> i
#define endl "\n"
#define all(x)  x.begin(), x.end()

typedef long long ll;
typedef long long int int64;
const int INF = 0x3f3f3f3f;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> v;

    while(n) {
        int m  = (1-(n&2));
        v.push_back(m *(n%2));
        n -= v.back();
        n >>= 1;
    }
    cout << (int)v.size() << " ";
    for (int i=0; i<v.size(); i++) {
        cout << v[i] << (i+1 < v.size()? ' ' : '\n');
    }
}
signed main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    
    int t; cin >> t;
    while(t--) {
        solve();
    }
    
    return (EXIT_SUCCESS);
}
