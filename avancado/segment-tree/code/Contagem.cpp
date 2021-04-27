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

vector<ll> lazy(4*MAX, 0);
ll tree[4*MAX], vet[MAX];
int N;

ll merge(ll a, ll b){
    return (a + b) % MOD;
}

void build(int l=1, int r=N, int no=1){
    if(l==r){
        tree[no] = vet[l];
        return;
    }
    int mid = (l+r)/2;
    build(l, mid, 2*no);
    build(mid+1, r, 2*no+1);

    tree[no] = merge(tree[2*no], tree[2*no+1]);
}

void prop(int l, int r, int no){
    tree[no] += (r-l+1)*lazy[no];
    if(l!=r){
        lazy[2*no] += lazy[no];
        lazy[2*no+1] += lazy[no];
    }
    lazy[no] = 0;
}

void update(int A, int B, int x, int l=1, int r=N, int no=1){
    prop(l, r, no);
    // 1º caso
    if(B<l or r<A) return;
    // 2º caso
    if(A<=l and r<=B){
        lazy[no] += x;
        prop(l, r, no);
        return;
    }
    // 3º caso
    int mid = (l+r)/2;

    update(A, B, x, l, mid, 2*no);
    update(A, B, x, mid+1, r, 2*no+1);
    
    tree[no] = merge(tree[2*no], tree[2*no+1]);
}

ll query(int A, int B, int l=1, int r=N, int no=1){
    prop(l, r, no);
    // 1º caso
    if(B<l or r<A) return 0;
    // 2º caso
    if(A<=l and r<=B) return tree[no];
    // 3º caso
    int mid = (l+r)/2;

    return merge(query(A, B, l, mid, 2*no),
                 query(A, B, mid+1, r, 2*no+1));
}

int32_t main()
{sws;

    int K;
    cin >> N >> K;
    vii segs(K);
    for(int i=0;i<K;i++)
        cin >> segs[i].ff >> segs[i].ss;

    update(1, 1, 1);

    for(int i=1;i<=N;i++){
        int here = query(i, i);
        for(auto s: segs){
            update(min(i+s.ff, N+1), min(i+s.ss, N+1), here);
        }
    }

    cout << query(N, N) << endl;

    
    return 0;
}