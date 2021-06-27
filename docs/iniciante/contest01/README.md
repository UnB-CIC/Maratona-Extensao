## Contest 01 (individual) - GE Iniciante - 19/06/2021

## Editorial

<details>
    <summary>URI 2377 - Pedágio</summary>
    <caption><sup> OBI - Olimpíada Brasileira de Informática 2010 Fase 1 Nível 1 </caption></sup>

<div markdown=1>

```cpp
#include<bits/stdc++.h>

using namespace std;

int main(){
    int l, d, k, p, custoTotal=0, qtdPedagios=0;

    scanf("%d %d", &l, &d);
    scanf("%d %d", &k, &p);

    custoTotal = custoTotal + l*k;

    qtdPedagios = qtdPedagios + (l/d);

    custoTotal = custoTotal + (qtdPedagios*p);

    printf("%d\n", custoTotal);

    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 2413 - Busca na Internet</summary>
    <caption><sup> OBI - Olimpíada Brasileira de Informática 2012 Fase 1 Nível Júnior </caption></sup>

<div markdown=1>

```cpp
#include<bits/stdc++.h>

using namespace std;

int main(){
    int t, pessoasLink3=0, pessoasLink2=0, pessoasLink1=0;

    cin >> t;

    pessoasLink3 = t;
    
    pessoasLink2 = 2*pessoasLink3;

    pessoasLink1 = 2*pessoasLink2;

    printf("%d\n", pessoasLink1);

    return 0;
}
``` 

</div>
</details>


<details>
    <summary>URI 2424 - Tira-teima</summary>
    <caption><sup> OBI - Olimpíada Brasileira de Informática 2012 Fase 2 Nível</caption></sup>
    

<div markdown=1>

```cpp
#include<bits/stdc++.h>

using namespace std;

int main(){
    int x, y, largura=432, altura=468;

    cin >> x >> y;

    if(x>=0 && x<=largura){

        if(y>=0 && y<=altura){
            cout << "dentro" << endl;
        }
        else{
            cout << "fora" << endl
        }

    }
    else{
        cout << "fora" << endl;
    }

    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 2455 - Gangorra</summary>
    <caption><sup>OBI - Olimpíada Brasileira de Informática 2014 Fase 1 Nível Júnior</caption></sup>

<div markdown=1>

```cpp
#include<bits/stdc++.h>

using namespace std;

int main(){
    int p1, c1, p2, c2, ladoEsquerdo, ladoDireito;

    scanf("%d %d %d %d", &p1, &c1, &p2, &c2);

    ladoEsquerdo = p1*c1;
    
    ladoDireito = p2*c2;

    if(ladoEsquerdo==ladoDireito){
        cout << "0" << endl;
    }
    else if(ladoEsquerdo>ladoDireito){
        cout << "-1\n";
    }
    else{
        cout << "1" << endl;
    }

    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 2786 - Piso da Escola</summary>
    <caption><sup>OBI - Olimpíada Brasileira de Informática 2018 - Fase 1</caption></sup>

<div markdown=1>

```cpp

#include<bits/stdc++.h>

using namespace std;

int main() {

  int l, c;

  cin >> l >> c;

  int tipo2 = ((l-1)+(c-1))*2;

  int tipo1 = (l*c) + ((l-1)*(c-1));

  cout << tipo1 << endl << tipo2 << endl;

  return 0;
}

``` 

</div>
</details>

## Parabéns a todos que participaram do contest! Em especial ao Top 5!

- <img src="https://github.githubassets.com/images/icons/emoji/unicode/1f947.png?v8" alt="drawing" width="30"/> WA_TLE_RE <img src="https://github.githubassets.com/images/icons/emoji/unicode/1f947.png?v8" alt="drawing" width="30"/>
- <img src="https://github.githubassets.com/images/icons/emoji/unicode/1f948.png?v8" alt="drawing" width="30"/> Hackeando Propriedade Governamental <img src="https://github.githubassets.com/images/icons/emoji/unicode/1f948.png?v8" alt="drawing" width="30"/>
- <img src="https://github.githubassets.com/images/icons/emoji/unicode/1f949.png?v8" alt="drawing" width="30"/> nãoseiumnomeprotime <img src="https://github.githubassets.com/images/icons/emoji/unicode/1f949.png?v8" alt="drawing" width="30"/>
- onde dos Corsas Rebaixados
- Felps apenas