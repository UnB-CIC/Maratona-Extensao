#include <bits/stdc++.h>
using namespace std;

struct Edge {
    // [de onde vem, pra onde vai, peso]
    int from, to, custo;
    Edge(int a = 0, int b = 0, int c = 0){
        from = a;
        to = b;
        custo = c;
    }
};

int main(){

    int n, m;
    cin >> n >> m;
    vector< Edge > arestas(m);

    for(int i = 0; i < m; i++){
        int a, b, c;
        cin >> a >> b >> c;
        arestas[i] = Edge(a,b,c);
    }

    vector<int> distancia(n + 1, 100000000);
    distancia[1] = 0;

    //O( N * M )
    /*1 -> 2 -> 3 -> 4 -> 5 ... n*/

    for(int i = 0; i < n - 1; i++){
        for(auto aresta : arestas){
            //relaxamento
            if(distancia[aresta.from] + aresta.custo < distancia[aresta.to]){
                distancia[aresta.to] = distancia[aresta.from] + aresta.custo;
            }
        }
    }

    for(int i = 1; i <= n; i++){
        cout << distancia[i] << " ";
    }
    cout << "\n";
}