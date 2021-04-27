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

ll tree[4*MAX], vet[MAX];
int N;

int merge(int a, int b){
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
        tree[no] = x;
        return;
    }

    int mid = (l+r)/2;
    if(id<=mid)
        update(id, x, l, mid, 2*no); // esquerda
    else
        update(id, x, mid+1, r, 2*no+1);

    tree[no] = merge(tree[2*no], tree[2*no+1]);
}

ll query(int A, int B, int l=0, int r=N-1, int no=1){
    // 1º caso
    if(B<l or r<A) return LLINF;
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
    for(int i=0;i<N;i++)
        cin >> vet[i];

    build();

    for(int i=0;i<m;i++){
        cin >> opt;
        if(opt==1){ // update
            cin >> id >> v;
            update(id, v);
        }else{ // query
            cin >> l >> r;
            cout << query(l, r-1) << endl;
        }
    }

    return 0;
}