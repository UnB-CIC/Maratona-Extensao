#include <bits/stdc++.h>
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
 
const int MAX = 1e5+100;
const ll MOD = 1e9+7;
const int INF = 0x3f3f3f3f;
const ll LLINF = 0x3f3f3f3f3f3f3f3f;
const ld EPS = 1e-7;
const ld PI = acos(-1);
 
// End Template //

#define int long long

namespace seg {
    pair<int, ll> seg[4*MAX];
    ll lazy[4*MAX];
    int n;
 
    pair<int, ll> merge(pair<int, ll> l, pair<int, ll> r){
        if (l.second == r.second) return {l.first+r.first, l.second};
        else if (l.second < r.second) return l;
        else return r;
    }
 
    pair<int, ll> build(int p=1, int l=0, int r=n-1) {
        lazy[p] = 0;
        if (l == r) return seg[p] = {1, 0};
        int m = (l+r)/2;
        return seg[p] = merge(build(2*p, l, m), build(2*p+1, m+1, r));
    }
    void build1(int n2) {
        n = n2;
        build();
    }
    void prop(int p, int l, int r) {
        seg[p].second += lazy[p];
        if (l != r) lazy[2*p] += lazy[p], lazy[2*p+1] += lazy[p];
        lazy[p] = 0;
    }
    pair<int, ll> query(int a, int b, int p=1, int l=0, int r=n-1) {
        prop(p, l, r);
        if (a <= l and r <= b) return seg[p];
        if (b < l or r < a) return {0, LLINF};
        int m = (l+r)/2;
        return merge(query(a, b, 2*p, l, m), query(a, b, 2*p+1, m+1, r));
    }
    pair<int, ll> update(int a, int b, int x, int p=1, int l=0, int r=n-1) {
        prop(p, l, r);
        if (a <= l and r <= b) {
            lazy[p] += x;
            prop(p, l, r);
            return seg[p];
        }
        if (b < l or r < a) return seg[p];
        int m = (l+r)/2;
        return seg[p] = merge(update(a, b, x, 2*p, l, m),
                update(a, b, x, 2*p+1, m+1, r));
    }
};

ll n, xl, yl, xr, yr, p;
vector<pair<int, pii>> X, Y;

struct event{
    int dif;
    int l, r;
};

int inx(ll val){
    return min(max(val, xl), xr);
}

int iny(ll val){
    return min(max(val, yl), yr);
}


bool check(int r){
    ll ans = 0;
    int sz = yr-yl;
    map<int, vector<event>> sweep;
    for(auto [pos, l]: X){
        sweep[inx(pos-r)].pb({1, iny(l.ff-r), iny(l.ss+r)});
        sweep[inx(pos+r)].pb({-1, iny(l.ff-r), iny(l.ss+r)});
    }
    for(auto [pos, l]: Y){
        sweep[inx(l.ff-r)].pb({1, iny(pos-r), iny(pos+r)});
        sweep[inx(l.ss+r)].pb({-1, iny(pos-r), iny(pos+r)});
    }

    sweep[xl].pb({0, 0, 0});
    sweep[xr-1].pb({0, 0, 0});

    int lst = 0;
    for(auto swp: sweep){
        int idx = swp.ff;

        pll qry = seg::query(yl, yr-1);
        if(qry.ss==0) ans += (inx(idx)-inx(lst))*(sz-qry.ff);
        else ans += (inx(idx)-inx(lst))*sz;
        for(auto ev: swp.ss)
            seg::update(ev.l, ev.r-1, ev.dif);
        lst = idx;
    }

    return ((yr-yl)*(xr-xl)*p <= 100*ans);
}


int32_t main()
{sws;

    seg::build1(MAX);
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> xl >> yl >> xr >> yr;
        if(xl==xr){
            if(yl>yr) swap(yl, yr);
            X.pb({xl, {yl, yr}});
        }else if(yl==yr){
            if(xl>xr) swap(xl, xr);
            Y.pb({yl, {xl, xr}});
        }else
            assert(false);

    }
    cin >> p;
    cin >> xl >> yl >> xr >> yr;

    int l=1, r=1e5+100, ans=0;
    while(l<=r){
        int m = (l+r)/2;
        if(check(m)){
            r = m-1;
            ans = m;
        }else
            l = m+1;
    }

    cout << ans << endl;

    return 0;
}