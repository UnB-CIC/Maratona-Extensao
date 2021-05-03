#include <bits/stdc++.h>
#define ff first
#define ss second
#define ll long long
#define pb push_back
#define sws ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define pll pair<ll, ll>

using namespace std;

const int MAX = 1e5; // tamanho máximo do vetor
const ll LLINF = 0x3f3f3f3f3f3f3f3f;

// End Template //

struct node{
    pll p, s, t, b; // prefix, suffix, total, best
    node(ll x=0, int sz=0): p({x, sz}), s({x, sz}), t({x, sz}), b({x, sz}){}
};

vector<node> tree(4*MAX, node()), vet(MAX, node()); // segtree e vetor
int N;

pll soma(pll a, pll b){
    return {a.ff+b.ff, a.ss+b.ss};
}

node merge(node l, node r){
    if(l.t.ss==0) return r;
    if(r.t.ss==0) return l;
    node ans;
    ans.p = max(l.p, soma(l.t, r.p));
    ans.s = max(r.s, soma(l.s, r.t));
    ans.t = soma(l.t, r.t);
    ans.b = max(max(l.b, r.b), soma(l.s, r.p));
    return ans;
}

void build(int l=0, int r=N-1, int no=1){
    if(l==r){ // caso base
        tree[no] = vet[l];
        return;
    }

    int mid = (l + r)/2;
    build(l, mid, 2*no); // filho da esquerda
    build(mid+1, r, 2*no+1); // filho da direita

    tree[no] = merge(tree[2*no], tree[2*no+1]); // merge
}

node query(int A, int B, int l=0, int r=N-1, int no=1){
    if(r<A or B<l) return node(); // 1º caso
    if(A<=l and r<=B) return tree[no]; // 2º caso

    // 3º caso
    int mid = (l + r)/2;

    node pLeft = query(A, B, l, mid, 2*no);
    node pRight = query(A, B, mid+1, r, 2*no+1);

    return merge(pLeft, pRight);
}

int32_t main()
{sws;

    int t;
    cin >> t;
    while(t--){
        cin >> N;
        for(int i=0;i<N;i++){
            int x;
            cin >> x;
            vet[i] = node(x, 1);
        }

        build();

        int Q;
        cin >> Q;

        int l, r;
        for(int i=0;i<Q;i++){
            cin >> l >> r; l--;r--;
            node qry = query(l, r);
            cout << qry.b.ff << " " << qry.b.ss << endl;
        }
    }

    return 0;
}