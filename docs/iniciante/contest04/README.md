## Contest 04 (Trio) - GE Iniciante - 11/09/2021

## Editorial

<details>
    <summary> URI 1048 - Aumento de Salário </summary>
<div markdown=1>


```cpp
#include <bits/stdc++.h>

using namespace std;

int escreve(double salario, int porcentagem){
    cout.precision(2);
    cout.setf(ios::fixed);

    cout << "Novo salario: " << (salario*(100+porcentagem))/100 << endl;
    cout << "Reajuste ganho: " << (porcentagem*salario)/100 << endl;
}

int main(){
    double salario;
    cin >> salario;

    if(salario<=400){
        escreve(salario, 15);
        cout << "Em percentual: 15 %" << endl;
    } else if(salario<=800){
        escreve(salario, 12);
        cout << "Em percentual: 12 %" << endl;
    } else if(salario<=1200){
        escreve(salario, 10);
        cout << "Em percentual: 10 %" << endl;
    } else if(salario<=2000){
        escreve(salario, 7);
        cout << "Em percentual: 7 %" << endl;
    } else {
        escreve(salario, 4);
        cout << "Em percentual: 4 %" << endl;
    }



    return 0;
}

``` 

</div>
</details>

<details>
    <summary> URI 1547 - Adivinha </summary>
<div markdown=1>

```cpp
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    
    cin >> n;
    while(n--){
        int qt, s;
        cin >> qt >> s;
        
        int v, mp = 110, pos = -1;
        for(int i = 0; i < qt; i++){
            cin >> v;
            if(abs(s-v) < mp){
                mp = abs(s-v);
                pos = i+1;
            }
        }
        
        cout << pos << endl;
        
    }
    
    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 2242 - Huaauhahhuahau </summary>
<div markdown=1>

    Questão extraída da Maratona de Programação SBC 2016

```cpp
#include <bits/stdc++.h>

using namespace std;

bool vogal(char l){
    if(l == 'a' or l == 'e' or l == 'i' or l == 'o' or l == 'u')
        return true;
    return false;
}

string retira_vogais(string frase){
    string ans = "";
    
    for(int i = 0; i < frase.size(); i++){
        if(vogal(frase[i])){
            ans += frase[i];
        }
    }
    
    return ans;
}

string inverte(string txt){
    string ans = "";
    
    for(int i = txt.size()-1; i >= 0; i--){
        ans += txt[i];
    }
    
    return ans;
}

int main(){
    string frase, ori, inv;
    cin >> frase;
    
    ori = retira_vogais(frase);
    inv = inverte(ori);
    
    if(ori == inv) 
        cout << 'S' << endl;
    else 
        cout << 'N' << endl;
    
    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 2342 - Overflow </summary>
<div markdown=1>

    Questão extraída da Olimpíada Brasileira de Informática 2009

```cpp
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, p, q;
    char c;
    cin >> n >> p >> c >> q;
    
    long long res;
    if(c == '+') res = p + q;
    else res = p * q;
    
    if(n < res) cout << "OVERFLOW" << endl;
    else cout << "OK" << endl;
    
    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 2783 - Figurinhas da Copa </summary>
<div markdown=1>

    Questão extraída da Olimpíada Brasileira de Informática

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, c, m;
    cin >> n >> c >> m;
    int faltam[c], v, res=0;
    for(int i=0;i<c;i++) cin >> faltam[i];
    int yi;
    for(int i=0;i<m;i++){
        cin >> yi;
        for(int j=0;j<c;j++){
            if(faltam[j]==yi){
                faltam[j] = -1;
                res++;
                break;
            }
        }
    }
    cout << c-res << endl;
    
    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 2846 - Fibonot </summary>
<div markdown=1>

```cpp
#include <bits/stdc++.h>

using namespace std;

int main(){
    int fib[] = {5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025};
    int k, i=0, n=4, pos=1;
    cin >> k;
    while(pos!=k+1){
        if(n>fib[i]) i++;
        if(n!=fib[i]){
            pos++;
        }
        n++;
    }
    cout << n-1 << endl;

    return 0;
}
``` 

</div>
</details>


## Parabéns a todos que participaram do contest!

- 🏆 chmod_777
    - Leonam Knupp

- 🏆 BONDE DAS MARAVILHAS
    - Samara Brandão
    - Bianca Patrocínio
    - Rute Miliana

- 🏆 I'm 4 parallel universes ahead of you
    - 4wardAerial

- Menção Honrosa
    - ZumZaravalho2 (And Mesq6169)

## Lista de Exercícios com as Questões do Contest

- A lista de exercícios com as questões do contest já está disponível na plataforma URI Online Judge, para que vocês possam submeter soluções depois da realização da maratona!