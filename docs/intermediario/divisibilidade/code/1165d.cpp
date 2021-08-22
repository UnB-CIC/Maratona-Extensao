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
  ll t;
  cin>>t;
  while(t--){
	ll n;
	cin>>n;
	vector<ll> d(n); 

	for(int i = 0; i <n; i++)
	  cin>>d[i];
	sort(d.begin(), d.end());

	ll x = d.front()*d.back();
	vector<ll> divs_x;

	for(ll i = 2; i*i<=x; i++){
	  if(x%i) continue;
	  divs_x.push_back(i);
	  ll j = x/i;
	  if(i!=j)
		divs_x.push_back(j);
	}

	sort(divs_x.begin(), divs_x.end());

	if(d == divs_x) cout<<x<<endl;
	else cout<<-1<<endl;
  }
}
