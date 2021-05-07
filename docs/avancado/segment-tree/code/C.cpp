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

pll tree[4*MAX], vet[MAX];
int N;

// {valor mínimo, qnt que ele aparece}
pll merge(pll a, pll b){
    if(a.ff==b.ff) return {a.ff, a.ss+b.ss};
    return min(a, b);
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

void update(int id, int x, int l=0, int r=N-1, int no=1){
    if(l==r){
        tree[no] = {x, 1};
        return;
    }

    int mid = (l+r)/2;
    if(id<=mid)
        update(id, x, l, mid, 2*no); // esquerda
    else
        update(id, x, mid+1, r, 2*no+1);

    tree[no] = merge(tree[2*no], tree[2*no+1]);
}

pll query(int A, int B, int l=0, int r=N-1, int no=1){
    // 1º caso
    if(B<l or r<A) return {LLINF, 0};
    // 2º caso
    if(A<=l and r<=B) return tree[no];
    // 3º caso
    int mid = (l+r)/2;

    return merge(query(A, B, l, mid, 2*no),
                 query(A, B, mid+1, r, 2*no+1));
}


int32_t main()
{sws;

    int m, opt, id, v, l, r;
    cin >> N >> m;
    for(int i=0;i<N;i++){
        cin >> vet[i].ff;
        vet[i].ss=1;
    }

    build();

    for(int i=0;i<m;i++){
        cin >> opt;
        if(opt==1){ // update
            cin >> id >> v;
            update(id, v);
        }else{ // query
            cin >> l >> r;
            pll qry = query(l, r-1);
            cout << qry.ff << " " << qry.ss << endl;
        }
    }

    return 0;
}