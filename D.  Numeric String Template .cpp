#include <bits/stdc++.h>
#define input(v) for(auto &i : v) cin >> i
#define endl "\n"
#define all(x)  x.begin(), x.end()

typedef long long ll;
typedef long long int int64;
const int INF = 0x3f3f3f3f;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
using namespace std;

const int MAX_N = 1e6 + 10;  
int v[MAX_N];

void solve() {
    int n; cin >> n;
    for (int i=0; i<n; i++) {
        cin >> v[i];
    }
    int q; cin >> q;
    while(q--) {
        string s; cin >> s;
        if (s.length() != n) {
            cout << "NO" << endl;
            continue;
        }
        map<int, char> mp;
        map<char, int> cmp;
        bool f = false;

        for (int i=0; i<n; i++) {
            if (mp.count(v[i]) && mp[v[i]] != s[i]) {
                f = true;
                break;
            }
            if (cmp.count(s[i]) && cmp[s[i]] != v[i]) {
                f = true;
                break;
            }
            mp[v[i]] = s[i];
            cmp[s[i]] = v[i];
        }
        cout << (f? "NO" : "YES") << endl;
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
