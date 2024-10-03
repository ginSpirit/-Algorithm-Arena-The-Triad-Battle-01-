#include <bits/stdc++.h>
#define input(v) for(auto &i : v) cin >> i
#define endl "\n"
#define all(x)  x.begin(), x.end()

typedef long long ll;
typedef long long int int64;
const int INF = 0x3f3f3f3f;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
using namespace std;

const int MAX_N = 110;
int a[MAX_N+5];

void solve() {
    int n; cin >> n;
    memset(a, 0, sizeof(a[0])* (n+1));
    int m = 0;
    for (int i=0; i<n; i++) {
        int x; cin >> x;
        a[x]++;
        m = max(m, a[x]);
    }
    cout << n-m << endl;
}

signed main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    
    int t; cin >> t;
    while(t--) {
        solve();
    }
    return (EXIT_SUCCESS);
}
