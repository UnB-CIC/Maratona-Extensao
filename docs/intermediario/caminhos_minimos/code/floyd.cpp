#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n, m;
    cin >> n >> m;

    vector< vector<int> > dist( n + 1, vector<int>(n + 1) );
    
    for(int i = 0; i < n + 1; i++){
        for(int j = 0; j < n + 1; j++){
            dist[i][j] = 100000000;
        }
    }

    for(int i = 0; i < n + 1; i++){
        dist[i][i] = 0;
    }

    for(int i = 0; i < m; i++){
        int onde_comeca, onde_termina, custo;
        cin >> onde_comeca >> onde_termina >> custo;

        dist[onde_comeca][onde_termina] = custo;
       
        /*tirar o comentario da linha abaixo se o grafo não for direcionado*/
        //dist[onde_termina][onde_comeca] = custo;
    }

    for(int k = 1; k <= n; k++){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                //(i,k,j) = ir de i pra j passando por k

                //tentar relaxar a distancia de i pra j passar por j
                if( dist[i][k] + dist[k][j] < dist[i][j] ){
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            
            }
        }
    }

    for(int i = 1; i <= n; i++){
        cout << "vertice " << i << " :";
        for(int j = 1; j <= n; j++){
            if(dist[i][j] > 1000){
                cout << "x";
            } else {
                cout << dist[i][j];
            }
            cout << " ";
        }
        cout << endl;
    }


}