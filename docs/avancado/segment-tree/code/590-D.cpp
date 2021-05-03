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

struct letras{
    vector<bool> v;
    letras(){
        v.assign(26, false);
    }
};

letras tree[4*MAX], vet[MAX]; // segtree e vetor
int N;

letras merge(letras a, letras b){
    letras c;
    for(int i=0;i<26;i++)
        c.v[i] = (a.v[i] or b.v[i]);
    return c;
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

void update(int i, char x, int l=0, int r=N-1, int no=1){
    if(l==r){ // caso base
        letras let;
        let.v[x-'a']=true;
        tree[no] = let;
        return;
    }

    int mid = (l + r)/2;
    if(i<=mid) // esquerda
        update(i, x, l, mid, 2*no);
    else // direita
        update(i, x, mid+1, r, 2*no+1);

    tree[no] = merge(tree[2*no], tree[2*no+1]); // merge
}

letras query(int A, int B, int l=0, int r=N-1, int no=1){
    if(r<A or B<l) return letras(); // 1º caso
    if(A<=l and r<=B) return tree[no]; // 2º caso

    // 3º caso
    int mid = (l + r)/2;

    letras Left = query(A, B, l, mid, 2*no);
    letras Right = query(A, B, mid+1, r, 2*no+1);

    return merge(Left, Right);
}

int32_t main()
{sws;

    int M, opt, id, l, r;
    char v;
    string s;
    cin >> s;
    N = s.size();

    for(int i=0;i<N;i++){
        letras let;
        let.v[s[i]-'a']=true;
        vet[i] = let;
    }

    build();

    cin >> M;

    for(int i=0;i<M;i++){
        cin >> opt;
        if(opt==1){ // update
            cin >> id >> v; id--;
            update(id, v);
        }else{ // query
            cin >> l >> r; l--;r--;
            letras qry = query(l, r);
            int ans = 0;
            for(int i=0;i<26;i++)
                ans += qry.v[i];
            cout << ans << endl;
        }
    }

    return 0;
}