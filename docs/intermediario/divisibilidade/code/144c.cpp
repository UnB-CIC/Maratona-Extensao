#include <bits/stdc++.h>
#define sws                         \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);
#define endl '\n'

using namespace std;

typedef pair<int, int> pii;
typedef long long ll;
typedef pair<ll, ll> pll;

const ll INF = 1e18;
const ll MOD = 998244353;
const ll N = 300001;


int main() {
  ll n;
  cin>>n;
  ll ans =  n-1;
  for(ll i = 2; i * i <= n; i++){
	if (n%i) continue;
	ll j = n/i;
	ll custo = i - 1 + j -1;
	ans = min(custo, ans);
  }
  
  cout<<ans<<endl;
}
