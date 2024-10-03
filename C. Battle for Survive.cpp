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
    vector<int> v(n);  //also u can use input(v); instead of for loop
    for (auto &i : v) {
        cin >> i;
    }
    auto r = accumulate(v.begin(), v.end(), 0LL); //total sum o-index to n-1 index
    cout << r - 2*v[n-2] << endl;
}
signed main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    
    int t; cin >> t;
    while(t--) {
        solve();
    }
    
    return (EXIT_SUCCESS);
}
