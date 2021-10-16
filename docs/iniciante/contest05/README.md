## Contest 05 (Trio) - GE Iniciante - 02/10/2021

## Editorial

<details>
    <summary> URI 1061 - Tempo de Um evento </summary>
<div markdown=1>


```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string aux;
    int diainicial, diafinal;
    int horainicial, horafinal;
    int minutoinicial, minutofinal;
    int segundoinicial, segundofinal;

    cin >> aux; // Dia
    cin >> diainicial; // x
    scanf("%d : %d : %d", &horainicial, &minutoinicial, &segundoinicial);

    cin >> aux;
    cin >> diafinal;
    scanf("%d : %d : %d", &horafinal, &minutofinal, &segundofinal);

    int dia, hora, minuto, segundo;
    int tudoprasegundoinicial, tudoprasegundofinal;
    
    // transforma td pra segundo
    tudoprasegundoinicial = (diainicial * 86400) + (horainicial * 3600) + (minutoinicial * 60) + segundoinicial;
    tudoprasegundofinal = (diafinal * 86400) + (horafinal * 3600) + (minutofinal * 60) + segundofinal;
    int tempofinalemseg = tudoprasegundofinal - tudoprasegundoinicial;

    
    dia = tempofinalemseg / 86400;
    hora = (tempofinalemseg%86400) / 3600;
    minuto = (tempofinalemseg%3600)/60;
    segundo = tempofinalemseg%60;
    printf ("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", dia,hora,minuto,segundo);
        
    return 0;
}
``` 

</div>
</details>

<details>
    <summary> URI 1192 - O Jogo Matemático de Paula </summary>
<div markdown=1>

```cpp
#include <iostream>

using namespace std;

int main(){
    int n;
    string caso;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> caso;
        if(caso[0]==caso[2]){
            cout << (int(caso[0])-48)*(int(caso[2])-48) << endl;
        } else if(int(caso[1])>=97 and int(caso[1])<=122){
            cout << (int(caso[0])-48)+(int(caso[2])-48) << endl;
        } else{
            cout << (int(caso[2])-48)-(int(caso[0])-48) << endl;
        }
    }

    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 1318 - Bilhetes Falsos </summary>
<div markdown=1>

    Questão extraída do "Esquenta" do ACM/ICPC South America Contest

```cpp
#include <iostream>

using namespace std;

int main(){
    int n, m, t;
    
    while(true){
        cin >> n >> m;
        if(n == 0 && m == 0) break;
        
        int v[10010] = {}, rep = 0;
        
        for(int i = 0; i < m; i++){
            cin >> t;
            v[t]++;
        }
        
        for(int i = 0; i < 10010; i++){
            if(v[i] > 1){
                rep++;
            }
        }
        
        cout << rep << endl;
    }
    
    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 2057 - Fuso Horário </summary>
<div markdown=1>


```cpp
#include <iostream>

using namespace std;

int main(){
    int s, t, f, c;
    cin >> s >> t >> f;
    c=s+t+f;
    if(c>24){
        cout << c-24 << endl;
    } else if(c<0){ 
        cout << 24+c << endl;
    }else{
        if(c==24){
            cout << 0 << endl;
        } else{
            cout << c << endl;
        }
    }

}
``` 

</div>
</details>

<details>
    <summary>URI 2166 - Raiz Quadrada de 2 </summary>
<div markdown=1>


```cpp
#include <iostream>

using namespace std;

double fracao(double n){
    if(n==0){
        return 0; 
    } else if(n==1){
        return 1/2.0;
    }
    return 1.0/(2+fracao(n-1));
}

int main() {
    int n;
    cin >> n;
    
    cout.precision(10);
    cout.setf(ios::fixed);

    cout << 1.0+fracao(n) << endl;
	
    return 0;
}

``` 

</div>
</details>

<details>
    <summary>URI 2663 - Fase </summary>
<div markdown=1>

    Questão extraída da Maratona de Programação SBC 2017

```cpp
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int pontos[n];
    for(int i=0;i<n;i++){
        cin >> pontos[i];
    }
    sort(pontos, pontos+n, greater<int>());
    int cl = k;
    
    while(k<n){
        if(pontos[k]!=pontos[k-1]){
            break;
        }
        cl++;
        k++;
    }
    
    cout << cl << endl;
    
    return 0;
}
``` 

</div>
</details>


## Parabéns a todos que participaram do contest!

- 🏆 sudo apt-get the anwser
    - Leonam Knupp
    - Caio
    - Matheus

- 🏆 I'm 4 parallel universes ahead of you
    - 4wardAerial

- 🏆 BONDE DAS MARAVILHAS
    - Samara Brandão
    - Bianca Patrocínio
    - Rute Miliana

- Menção Honrosa
    - ZumZaravalho2 (And Mesq6169)

## Lista de Exercícios com as Questões do Contest

- A lista de exercícios com as questões do contest já está disponível na plataforma URI Online Judge, para que vocês possam submeter soluções depois da realização da maratona!