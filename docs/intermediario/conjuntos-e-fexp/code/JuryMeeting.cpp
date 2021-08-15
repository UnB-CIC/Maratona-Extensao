#include <bits/stdc++.h>
#define sws ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl '\n'
 
using namespace std;

typedef pair<int,int> pii;
typedef long long ll;

const ll INF = 1e18;

vector<pii> voos_in[1000000], voos_out[1000000];
multiset<int> custos_in[100000], custos_out[100000];
int main(){
  sws;
  int n, m, k;
  cin>>n>>m>>k;
  while(m--){
	int d, f, t, c;
	cin>>d>>f>>t>>c;
	if(f)
	  voos_in[d].push_back({f,c});
	else
	  voos_out[d].push_back({t,c});
  }

  for(int i = 1000000; i >=k +1;i-- ){
	for(auto voo : voos_out[i]){
	  custos_out[voo.first].insert(voo.second);
	}
  }
  ll res = INF;
  for(int l = 1, r = k + 1; r <=1000000; l++, r++ ){
	ll custo = 0;
	for(auto voo : voos_in[l]){
	  custos_in[voo.first].insert(voo.second);
	}
	for(auto voo: voos_out[r]){
	  auto it = custos_out[voo.first].find(voo.second);
	  custos_out[voo.first].erase(it);
	}
	if(voos_in[l].empty()) continue;

	for(int i = 1; i <= n; i ++){
	  if( custos_out[i].empty() or custos_in[i].empty() ){
		custo = INF;
		break;
	  }
	  custo+= (1LL)*( *custos_in[i].begin() + *custos_out[i].begin() );
	}
	res = min(custo, res);
  }

  if(res >= INF) res = -1;
  cout<<res<<endl;
}
