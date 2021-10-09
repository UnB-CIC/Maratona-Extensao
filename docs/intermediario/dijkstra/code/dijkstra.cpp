#include <bits/stdc++.h>
using namespace std;

using ll = long long;

const int MAXN = 1e5 + 10;
const ll INF = 1e18 + 20;
vector< pair<ll,ll> > grafo[MAXN];

vector<ll> dijkstra(int inicial){

    vector<ll> distancia(MAXN, INF);
    vector<int> visitado(MAXN, 0); //bitset

    priority_queue<
    pair<ll,ll>,
    vector< pair<ll,ll> >,
    greater< pair<ll,ll> > > pq;

    distancia[inicial] = 0; //peso_vertice[inicial]
    pq.push( {0, inicial} ); //distancia, vertice

    while( pq.size() ){

        int atual = pq.top().second;
        pq.pop();

        if(visitado[atual]){
            continue;
        } else {
            visitado[atual] = 1;

            for( auto adj : grafo[atual] ){
                //pair<  destino, custo >

                int destino = adj.first;
                ll custo = adj.second; //+peso_vertice[destino]
                //atual ------> destino
                //      Custo

                //tentar relaxar "destino"

                if( distancia[atual] + custo < distancia[destino] ){

                    distancia[destino] = distancia[atual] + custo;
                    pq.push( {distancia[destino], destino} );

                }
            }
        }
    }  

    return distancia;
}

int main(){

    int n, m;
    cin >> n >> m;

    for(int i = 0; i < m; i++){
        int a, b;
        ll custo;
        cin >> a >> b >> custo;
        grafo[a].push_back( {b , custo}  );
    }

    vector<ll> d = dijkstra(1);
    for(int i = 1; i <= n; i++){
        cout << d[i] << " ";
    }
    cout << endl;

    
}