#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100;
vector<int> grafo[MAXN];

vector<int> bfs(int inicial){

    vector<int> visitado(MAXN, 0);
    vector<int> distance(MAXN, 1000000);
    queue<int> q;

    q.push(inicial);
    distance[inicial] = 0;

    while( q.size() ){
        int atual = q.front();
        q.pop();

        if(visitado[atual]){
            continue;
        } else {
            visitado[atual] = 1;
            for(int adjacente : grafo[atual]){
                if(distance[adjacente] > distance[atual] + 1){
                    distance[adjacente] = distance[atual] + 1;
                    q.push(adjacente);
                }
            }
        }
    }
    return distance;
}

int main(){
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        grafo[a].push_back(b);
        grafo[b].push_back(a);
    }

    vector<int> d = bfs(1);

    for(int i = 1; i <= n; i++){
        cout << "distancia até " << i << " " << d[i] << endl;
    }
}