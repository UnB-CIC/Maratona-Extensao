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

// SegTree

ll tree[4*MAX], vet[MAX];

void build(int l=0, int r=MAX-1, int no=1){
    if(l==r){
        tree[no] = vet[l];
        return;
    }
    int mid = (l+r)/2;
    build(l, mid, 2*no);
    build(mid+1, r, 2*no+1);

    tree[no] = tree[2*no] + tree[2*no+1];
}

void update(int id, int x, int l=0, int r=MAX-1, int no=1){
    if(l==r){
        tree[no] = x;
        return;
    }

    int mid = (l+r)/2;
    if(id<=mid)
        update(id, x, l, mid, 2*no); // esquerda
    else
        update(id, x, mid+1, r, 2*no+1);

    tree[no] = tree[2*no] + tree[2*no+1];
}

ll query(int A, int B, int l=0, int r=MAX-1, int no=1){
    // 1º caso
    if(B<l or r<A) return 0;
    // 2º caso
    if(A<=l and r<=B) return tree[no];
    // 3º caso
    int mid = (l+r)/2;
    ll sumLeft = query(A, B, l, mid, 2*no);
    ll sumRight = query(A, B, mid+1, r, 2*no+1);

    return sumLeft + sumRight;
}

// Euler Tour

int subtreesz[MAX];
int euler[MAX], pos[MAX];
int tempo = 0;
vector<vi> g(MAX, vi());

int dfs(int u, int pai=-1){
    euler[tempo] = u;
    pos[u] = tempo;
    tempo++;

    subtreesz[u]=1;
    for(auto v: g[u]) if(v!=pai){
        subtreesz[u] += dfs(v, u);
    }
    return subtreesz[u];
}


int32_t main()
{sws;

    int n, q, opt, s, x, u, v;
    cin >> n >> q;
    vi value(n);
    for(int i=0;i<n;i++)
        cin >> value[i];
    for(int i=0;i<n-1;i++){
        cin >> u >> v; u--;v--;
        g[u].pb(v);
        g[v].pb(u);
    }

    dfs(0);

    for(int i=0;i<n;i++)
        vet[i] = value[euler[i]];

    build();

    for(int i=0;i<q;i++){
        cin >> opt;
        if(opt==1){ // update
            cin >> s >> x; s--;
            update(pos[s], x);
        }else{ // query
            cin >> s; s--;
            cout << query(pos[s], pos[s]+subtreesz[s]-1) << endl;
        }
    }

    
    return 0;
}