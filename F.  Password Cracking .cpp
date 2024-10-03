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
    ll n; cin >> n;
    string s = "";
    ll l = 0;
    bool f = true;

    auto q = [](const string &t) {
        cout << "? " << t << endl;
        cout.flush();
        ll x; cin >> x;
        return x;
    };

    while (l < n) {
        if (f) {
            if (q("0" + s) == 1) {
                l++; s = "0" + s;
                continue;
            }
            if (q("1" + s) == 1) {
                l++; s = "1" + s;
                continue;
            }
            f = false;
        } else {
            if (q(s + "0") == 1) {
                l++; s += "0";
            } else {
                l++; s += "1";
            }
        }
    }
    cout << "! " << s << endl;
    cout.flush();
}

signed main() {
    cin.tie(nullptr)->sync_with_stdio(false);
    
    int t; cin >> t;
    while(t--) {
        solve();
    }
    return (EXIT_SUCCESS);
}
