#include <bits/stdc++.h>
// #define int long long
#define ff first
#define ss second
#define ll long long
#define ld long double
#define pb push_back
#define eb emplace_back
#define pii pair<int, int>
#define pll pair<ll, ll>
#define ti tuple<int, int, int>
#define vi vector<int>
#define vl vector<ll>
#define vii vector<pii>
#define sws ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
#define teto(a, b) (((a)+(b)-1)/(b))
#define all(x) x.begin(), x.end()
#define forn(i, n) for(int i = 0; i < (int)n; i++)
#define forne(i, a, b) for(int i = a; i <= b; i++)
#define dbg(msg, var) cerr << msg << " " << var << endl;
 
using namespace std;
 
const int MAX = 2e5+10;
const ll MOD = 998244353;
const int INF = 0x3f3f3f3f;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const ld EPS = 1e-7;
const ld PI = acos(-1);
 
// End Template //

struct ST { // indexado em 0, O(n * log^2(n) )
    int size;
    vector<vl> v;

    vl f(vl a, vl& b) {
        vl res = a;
        for(auto val : b) {
            res.pb(val);
        }
        sort(all(res));
        return res;
    }

    void init(int n) {
        size = 1;
        while(size < n) size *= 2;
        v.assign(2*size, vl());
    }

    void build(vector<ll>& a, int x, int lx, int rx) {
        if(rx-lx == 1) {
            if(lx < (int)a.size()) {
                v[x].pb(a[lx]);
            }
            return;
        }
        int m = (lx+rx)/2;
        build(a, 2*x +1, lx, m);
        build(a, 2*x +2, m, rx);
        v[x] = f(v[2*x +1], v[2*x + 2]);
    }

    void build(vector<ll>& a) {
        init(a.size());
        build(a, 0, 0, size);
    }

    ll greaterequal(int l, int r, int k, int x, int lx, int rx) {
        if(r <= lx or l >= rx) return 0;
        if(l <= lx && rx <= r) {
            auto it = lower_bound(all(v[x]), k);
            return (v[x].end() - it);
        }
        int m = (lx + rx)/2;
        ll s1 = greaterequal(l, r, k, 2*x +1, lx, m);
        ll s2 = greaterequal(l, r, k, 2*x +2, m, rx);

        return s1 +s2;
    }

    ll greaterequal(int l, int r, int k) {
        return greaterequal(l, r+1, k, 0, 0, size);
    }
};


int32_t main()
{sws;

    int n, q, a, b, k;
    cin >> n;
    ST st;
    st.init(n);
    vl v(n);
    for(int i=0;i<n;i++)
        cin >> v[i];
    
    st.build(v);

    cin >> q;

    for(int i=0;i<q;i++){
        cin >> a >> b >> k; a--;b--;
        cout << st.greaterequal(a, b, k+1) << endl;
    }


    
    return 0;
}