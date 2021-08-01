#include <bits/stdc++.h>
using namespace std;

#define sws std::ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long

const int N = 1e6 + 10;
ll v[N];
ll psum[N];

int main(){  sws;

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    // calculando opcoes s = x + y;
    for (int i=a; i<=b; i++){
        v[ i + b ]++;
        v[ i + c + 1]--;
    }

    // atualizando v[i]
    for (int i=1; i<N; i++){
        v[i] += v[i-1]; 
    }

    // calculando psum de s
    for (int i=1; i<N; i++){
        psum[i] = psum[i-1] + v[i];
    }

    ll ans = 0;
    // calculando resposta para os valores de z
    for (int i=c; i<=d; i++){
        ans += psum[N-1] - psum[i];
    }

    cout << ans << endl;
    
    return 0;
}