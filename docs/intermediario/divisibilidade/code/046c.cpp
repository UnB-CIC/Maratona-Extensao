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

ll ceil(ll a, ll b){ return a%b ? a/b + 1 : a/b;}

int main() {
  sws;
  ll n,x ,y;
  ll a = 1, b = 1; 
  cin>>n;
  while(n--){
	cin>>x>>y;
	ll q = max(ceil(a, x), ceil(b,y));
	a = x*q;
	b = y*q;
  }
  cout<<a+b<<endl;
}
