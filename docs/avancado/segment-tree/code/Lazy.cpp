#include <bits/stdc++.h>
#define ff first
#define ss second
#define ll long long
#define pb push_back
#define sws ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

const int MAX = 1e5; // tamanho máximo do vetor
const ll LLINF = 0x3f3f3f3f3f3f3f3f;

// End Template //

vector<ll> lazy(4*MAX, -1);
ll tree[4*MAX], vet[MAX];
int N;

ll merge(ll a, ll b){
    return a + b;
}

void build(int l=0, int r=N-1, int no=1){
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
    if(lazy[no]!=-1){
        tree[no] = (r-l+1)*lazy[no];
        if(l!=r){
            lazy[2*no] = lazy[2*no+1] = lazy[no];
        }
        lazy[no] = -1;
    }
}

void update(int A, int B, int x, int l=0, int r=N-1, int no=1){
    prop(l, r, no);
    // 1º caso
    if(B<l or r<A) return;
    // 2º caso
    if(A<=l and r<=B){
        lazy[no] = x;
        prop(l, r, no);
        return;
    }
    // 3º caso
    int mid = (l+r)/2;

    update(A, B, x, l, mid, 2*no);
    update(A, B, x, mid+1, r, 2*no+1);
    
    tree[no] = merge(tree[2*no], tree[2*no+1]);
}

ll query(int A, int B, int l=0, int r=N-1, int no=1){
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

    int Q, opt, a, b, l, r, k;
    cin >> N >> Q;
    for(int i=0;i<N;i++)
        cin >> vet[i];

    build();

    for(int i=0;i<Q;i++){
        cin >> opt;
        if(opt==1){ // update
            cin >> a >> b >> k;
            a--;b--;
            update(a, b, k);
        }else{ // query
            cin >> l >> r;
            l--;r--; // indice indexado em 0
            cout << query(l, r) << endl;
        }
    }

    return 0;
}