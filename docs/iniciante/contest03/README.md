## Contest 03 (Trio) - GE Iniciante - 14/08/2021

## Editorial

<details>
    <summary>Video aula Resolvendo as Questões do Contest</summary>

<iframe width="560" height="315" src="https://www.youtube.com/embed/HQZDunD-ga4" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

</details>

<details>
    <summary> URI 1087 - Dama </summary>
<div markdown=1>


```cpp
#include <bits/stdc++.h>
using namespace std;

int main(){

    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);   
    
    while(true){

        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        if (x1 == 0 and y1 == 0 and x2 == 0 and y2 == 0){
            return 0;
        }

        if (x1 == x2 and y1 == y2){
            cout << "0\n";
        }
        else if (x1 == x2 or y1 == y2){ 
            cout << "1\n";
        }
        else if (abs(y1-y2) == abs(x1-x2)){
            cout << "1\n";
        }
        else{
            cout << "2\n";
        }
    } 
    
    return 0;
}
``` 

</div>
</details>

<details>
    <summary> URI 1151 - Fibonacci Fácil </summary>
<div markdown=1>

```cpp
#include <iostream>
using namespace std;

int main(){

    int n;

    cin >> n;

    int f[n];

    f[0]=0;
    f[1]=1;

    if (n==1){
        cout << f[0] << endl;
    }
    else if (n==2){
        cout << f[0] << " " << f[1] << endl;
    }
    else{
        cout << f[0] << " " << f[1] << " ";

        for (int i=2; i<n-1; i++){
            f[i] = f[i-1] + f[i-2];
            
            cout << f[i] << " ";
        }

        cout << f[n-2]+f[n-3] << endl;
    }

    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 1245 - Botas Perdidas </summary>
<div markdown=1>

    Questão extraída da Maratona de Programação SBC

```cpp
#include <iostream>

using namespace std;

int main() {
    int n;
    char l;
    
    while (cin >> n) {
        int dir[64] = {}, esq[64] = {};
        
        for (int i = 0, tam; i < n; i++) {
            cin >> tam >> l;
            
            if (l == 'D') 
                dir[tam]++;
            else
                esq[tam]++;
        }
        
        int pares = 0;
        for (int i = 30; i <= 60; i++) 
            pares += min(dir[i], esq[i]);
        
        cout << pares << endl;
    }
    
    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 1435 - Matriz Quadrada I </summary>
<div markdown=1>

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n, i, j, k;
    
    while (true) {

        scanf("%d", &n);
        
        if (n == 0)
            break;
        
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                k = i + 1;
                if (j + 1 < k)
                    k = j + 1;
                if (n - i < k)
                    k = n - i;
                if (n - j < k)
                    k = n - j;
                if (j)
                    printf(" ");
                printf("%3d", k);
            }
            printf("\n");
        }
        printf("\n");
        
    }
    
    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 1828 - Bazinga! </summary>
<div markdown=1>

```cpp
#include<bits/stdc++.h>

using namespace std;

int main(){

    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL); 

    int t, cont=0;
    string sheldon, raj;

    cin >> t;

    while(cont!=t){
        cin >> sheldon;
        cin >> raj;

        if(sheldon == raj){
            cout << "Caso #" << cont+1 << ": De novo!" << endl;
        }
        else{
            if(sheldon == "tesoura" && raj == "papel"){
                cout << "Caso #" << cont+1 << ": Bazinga!" << endl;
            }
            else if(sheldon == "papel" && raj == "pedra"){
                cout << "Caso #" << cont+1 << ": Bazinga!" << endl;
            }
            else if(sheldon == "pedra" && raj == "lagarto"){
                cout << "Caso #" << cont+1 << ": Bazinga!" << endl;
            }
            else if(sheldon == "lagarto" && raj == "Spock"){
                cout << "Caso #" << cont+1 << ": Bazinga!" << endl;
            }
            else if(sheldon == "Spock" && raj == "tesoura"){
                cout << "Caso #" << cont+1 << ": Bazinga!" << endl;
            }
            else if(sheldon == "tesoura" && raj == "lagarto"){
                cout << "Caso #" << cont+1 << ": Bazinga!" << endl;
            }
            else if(sheldon == "lagarto" && raj == "papel"){
                cout << "Caso #" << cont+1 << ": Bazinga!" << endl;
            }
            else if(sheldon == "papel" && raj == "Spock"){
                cout << "Caso #" << cont+1 << ": Bazinga!" << endl;
            }
            else if(sheldon == "Spock" && raj == "pedra"){
                cout << "Caso #" << cont+1 << ": Bazinga!" << endl;
            }
            else if(sheldon == "pedra" && raj == "tesoura"){
                cout << "Caso #" << cont+1 << ": Bazinga!" << endl;
            }
            else{
                cout << "Caso #" << cont+1 << ": Raj trapaceou!" << endl;
            }
        }
        
        cont++;
    }

    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 2310 - Voleibol </summary>
<div markdown=1>

```cpp
#include<bits/stdc++.h>

using namespace std;

int jogadas[2][3];

int main(){
    int n;

    scanf("%d", &n);

    while(n--){
        char nome[100];

        scanf("%s", nome);

        for(int i=0; i<2; i++){
            for(int j=0; j<3; j++){
                int valor;
                scanf("%d", &valor);

                jogadas[i][j] += valor;
            }
        }
    }

    double saque = 100.00*jogadas[1][0]/jogadas[0][0];
    double bloqueio = 100.00*jogadas[1][1]/jogadas[0][1];
    double ataque = 100.00*jogadas[1][2]/jogadas[0][2];

    printf("Pontos de Saque: %.2lf %%.\n", saque);
    printf("Pontos de Bloqueio: %.2lf %%.\n", bloqueio);
    printf("Pontos de Ataque: %.2lf %%.\n", ataque);
    
    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 2542 - Iu-Di-Oh! </summary>
<div markdown=1>

```cpp
#include <iostream>

using namespace std;

int main() {
    int n, m, l;
    while(cin >> n){
        cin >> m >> l;
        long long marcos[m][n], leo[l][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++) cin >> marcos[i][j];
        }
        for(int i=0;i<l;i++){
            for(int j=0;j<n;j++) cin >> leo[i][j];
        }
        int cm, cl, a;
        cin >> cm >> cl >> a;
        if(marcos[cm-1][a-1]>leo[cl-1][a-1]) cout << "Marcos" << endl;
        else if(marcos[cm-1][a-1]<leo[cl-1][a-1]) cout << "Leonardo" << endl;
        else cout << "Empate" << endl;
    }
    
    return 0;
}
``` 

</div>
</details>


## Parabéns a todos que participaram do contest!

- 🏆 BONDE DAS MARAVILHAS
    - Samara Brandão
    - Bianca Patrocínio
    - Rute Miliana

- 🏆 qualquer.coisa
    - Leonardo

- 🏆 Time da MEL
    - Glauco Acassio
    - Melissa Paulino

- 🏆 Willian :)
    - Willian

## Lista de Exercícios com as Questões do Contest

- A lista de exercícios com as questões do contest já está disponível na plataforma URI Online Judge, para que vocês possam submeter soluções depois da realização da maratona!