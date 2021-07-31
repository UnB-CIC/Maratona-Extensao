## Contest 02 (Trio) - GE Iniciante - 17/07/2021

## Editorial

<details>
    <summary> URI 1367 - Ajude! </summary>
<div markdown=1>

    Maratona de Programacao da SBC, Warm-Up 

```cpp
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;

    cin >> n;

    while (n != 0)
    {
        vector<int> incorreta(26), correta(26);
        char id;
        int t, acertos = 0, tempo = 0;
        string s;
        for (int i = 0; i < n; i++){
            cin >> id >> t >> s;

            if (s == "correct" and correta[id - 'A'] == 0)
                correta[id - 'A'] = t;
            if (s == "incorrect" and correta[id - 'A'] == 0)
                incorreta[id - 'A'] += 20;
        }
        for (int i = 0; i < 26; i++){
            if (correta[i] != 0){
                acertos++;
                tempo += correta[i] + incorreta[i];
            }
        }
        cout << acertos << " " << tempo << endl;
        cin >> n;
    }

    return 0;    
}
``` 

</div>
</details>

<details>
    <summary> URI 1367 - Ajude! (Resolução usando matriz) </summary>
<div markdown=1>

    Maratona de Programacao da SBC, Warm-Up 

```cpp
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    while (n != 0)
    {
        vector<vector<int>> matriz(26, vector<int>(2));
        char id;
        int t, acertos = 0, tempo = 0;
        string s;
        for (int i = 0; i < n; i++)
        {
            cin >> id >> t >> s;

            if (s == "correct" and matriz[id - 'A'][0] == 0)
                matriz[id - 'A'][0] = t;
            if (s == "incorrect" and matriz[id - 'A'][0] == 0)
                matriz[id - 'A'][1] += 20;
        }
        for (int i = 0; i < 26; i++)
        {
            if (matriz[i][0] != 0)
            {
                acertos++;
                tempo += matriz[i][0] + matriz[i][1];
            }
        }
        cout << acertos << " " << tempo << endl;
        cin >> n;
    }

    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 1794 - Lavanderia </summary>
<div markdown=1>

    CONTEST OFICIAL DE AQUECIMENTO DA OLIMPÍADA BRASILEIRA DE INFORMÁTICA 2015


```cpp
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, la, lb, sa, sb;
    cin >> n >> la >> lb >> sa >> sb;

    if (n >= la and n <= lb and n >= sa and n <= sb) cout << "possivel" << endl;
    else cout << "impossivel" << endl;

    return 0;    
}
``` 

</div>
</details>

<details>
    <summary>URI 1796 - Economia Brasileira </summary>
<div markdown=1>

    CONTEST OFICIAL DE AQUECIMENTO DA OLIMPÍADA BRASILEIRA DE INFORMÁTICA 2015

```cpp
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, satisfeito = 0, naosatisfeito = 0;
    cin >> n;

    for (int i = 0; i < n; i++){
        int q;
        cin >> q;
        if (q == 0) satisfeito++;
        else naosatisfeito++;
    }

    if (satisfeito > n/2) cout << "Y" << endl;
    else cout << "N" << endl;

    return 0;    
}
``` 

</div>
</details>

<details>
    <summary>URI 2414 - Desafio do Maior Número </summary>
<div markdown=1>

    OBI - Olimpíada Brasileira de Informática 2012 

```cpp
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n, maior = 0;
    cin >> n;

    while (n != 0){
        maior = max(maior, n);
        cin >> n;
    }

    cout << maior << endl;
    
    return 0;    
}
``` 

</div>
</details>

<details>
    <summary>URI 2416 - Corrida </summary>
<div markdown=1>

     OBI - Olimpíada Brasileira de Informática 2012 

```cpp
#include <bits/stdc++.h>

using namespace std;

int main(){
    int c, n;
    cin >> c >> n;
    cout << c % n << endl;
}
``` 

</div>
</details>

<details>
    <summary>URI 3053 - Jogo Dos Copos </summary>
<div markdown=1>

     OBI - Olimpíada Brasileira de Informática 2019 - Nivel Júnior

```cpp
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; 
    char moeda;
    cin >> n >> moeda;
    for (int i = 0; i < n; i++){
        int jogada; 
        cin >> jogada;
        if (jogada == 1 and moeda == 'A') moeda = 'B';
        else if (jogada == 1 and moeda == 'B') moeda = 'A';
        else if (jogada == 2 and moeda == 'B') moeda = 'C';
        else if (jogada == 2 and moeda == 'C') moeda = 'B';
        else if (jogada == 3 and moeda == 'A') moeda = 'C';
        else if (jogada == 3 and moeda == 'C') moeda = 'A';
    }
    cout << moeda << endl;
    return 0;    
}
``` 

</div>
</details>


## Parabéns a todos que participaram do contest!

- 🏆 Pro AC o que te falta é o O(1)
  - ITALO THIAGO
- 🏆 Professionals have standards 
  - 4WARDAERIAL
  - AQUILES
- 🏆 Bonde Das Maravilhas
  - SAMARA BRANDÃO
  - BIANCA PATROCÍNIO
  - RUTEMILIANA
- 🏆 terror do pc
  -  SABRINA MENDES BRAGA
- 🏆 ZumZaravalho
  - AND MESQ6169
  - INÁCIO
- 🏆 Willian :)
  - WILLIAN

## Lista de Exercícios com as Questões do Contest
- Depois do contest será disponibilizida uma lista de exercícios na disciplina GE Iniciante no URI Online Judge para quem perdeu o contest ou para quem quiser tentar as questões não resolvidas!