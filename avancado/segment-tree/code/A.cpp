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

void build(int l, int r, int no){
    if(l==r){
        tree[no] = vet[l];
        return;
    }
    int mid = (l+r)/2;
    build(l, mid, 2*no);
    build(mid+1, r, 2*no+1);

    tree[no] = tree[2*no] + tree[2*no+1];
}

void update(int id, int x, int l, int r, int no){
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

ll query(int A, int B, int l, int r, int no){
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


int32_t main()
{sws;

    int n, m, opt, id, v, l, r;
    cin >> n >> m;
    for(int i=0;i<n;i++)
        cin >> vet[i];

    build(0, n-1, 1);

    for(int i=0;i<m;i++){
        cin >> opt;
        if(opt==1){ // update
            cin >> id >> v;
            update(id, v, 0, n-1, 1);
        }else{ // query
            cin >> l >> r;
            cout << query(l, r-1, 0, n-1, 1) << endl;
        }
    }



    return 0;
}