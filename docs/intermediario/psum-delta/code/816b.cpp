#include <bits/stdc++.h>
using namespace std;

#define sws std::ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main(){  sws;

    int n, k, q;
    cin >> n >> k >> q;

    vector<int> delta(200002, 0);
    vector<int> psum(200002, 0);

    for(int i=0; i<n; i++){
        int l, r;
        cin >> l >> r;
        delta[l]++;
        delta[r+1]--;
    }

    int atual = 0;
    for(int i=1; i<=200000; i++){
        atual += delta[i];
        if (atual >= k) psum[i] = 1 + psum[i-1];
        else psum[i] = 0 + psum[i-1];  
    }

    for(int i=0; i<q; i++){
        int l, r, sum;
        cin >> l >> r;
        sum = psum[r] - psum[l-1]; 
        cout << sum << endl;
    }
    
    return 0;
}