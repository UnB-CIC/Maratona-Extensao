## Editorial Semana 06 - Iteração

## Lista de Exercícios 03

<details>
    <summary>URI 1042 - Sort Simples</summary>

<div markdown=1>

```cpp
#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c;
    scanf ("%d %d %d", &a, &b, &c);

    if (a<=b && a<=c){
        printf ("%d\n", a);
        if (b<=c){
            printf ("%d\n", b);
            printf ("%d\n", c);
        }
        else {
            printf ("%d\n", c);
            printf ("%d\n", b);
        }
    }
    else if (b<=a && b<=c){
        printf ("%d\n", b);
        if (a<=c){
            printf ("%d\n", a);
            printf ("%d\n", c);
        }
        else {
            printf ("%d\n", c);
            printf ("%d\n", a);
        }
    }
    else if (c<=a && c<=b){
        printf ("%d\n", c);
        if (a<=b){
            printf ("%d\n", a);
            printf ("%d\n", b);
        }
        else {
            printf ("%d\n", b);
            printf ("%d\n", a);
        }
    }
    printf ("\n%d\n%d\n%d\n", a,b,c);
    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 1059 - Números Pares</summary>

<div markdown=1>

```cpp
#include<bits/stdc++.h>

using namespace std;

int main (){

    int i;

    for (i = 0; i <= 100; i += 2){

        if (i > 0){
            printf ("%d\n", i);
        }
    }    

    return 0;
}
``` 

</div>
</details>


<details>
    <summary>URI 1060 - Números Positivos</summary>

<div markdown=1>

```cpp
#include<bits/stdc++.h>

using namespace std;

int main(){

    int i, cnt = 0;

    for (i = 0; i < 6; i++)
    {
        double aux;
        scanf ("%lf", &aux);
        if (aux > 0){
            cnt++;
        }
    }
    printf ("%d valores positivos\n", cnt);    

    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 1064 - Positivos e Média</summary>

<div markdown=1>

```cpp
#include<bits/stdc++.h>
 
using namespace std;

int main (){
    double mediap, somap;
    int i,n=6,valoresp=0;

    for (i = 0; i < n; i++){
        float f;
        scanf ("%f", &f);
            if (f >= 0){
                valoresp += 1;
                somap += f;
            }
    }

    mediap = somap / valoresp;

    printf ("%d valores positivos\n", valoresp);
    printf ("%.1lf\n", mediap); 

    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 1067 - Números Ímpares</summary>

<div markdown=1>

```cpp
#include<bits/stdc++.h>

using namespace std;

int main (){

    int i, n;

    scanf ("%d", &n);

    for (i = 1; i <= n; i++){
        if (i % 2 != 0)
            printf ("%d\n", i);
    }
    
    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 1070 - Seis Números Ímpares</summary>

<div markdown=1>

```cpp
#include<bits/stdc++.h>

using namespace std;

int main() {
 
    int x, c = 0;
    cin >> x;
    while(c < 6){
        if (x % 2 != 0){
            printf("%d\n", x);
            c++;
        }
        x++;
    } 
    
    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 1073 - Quadrado de Pares</summary>

<div markdown=1>

```cpp
#include<bits/stdc++.h>

using namespace std;

int main (){

    int N;

    scanf ("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        if (i % 2 == 0)
            printf ("%d^2 = %d\n", i, i*i);
    }

    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 1075 - Resto 2</summary>

<div markdown=1>

```cpp
#include<bits/stdc++.h>

using namespace std;

int main (){

    int N;
    scanf ("%d", &N);

    for (int i = 1; i < 10000; i++)
    {
        if (i % N == 2){
            printf ("%d\n", i);
    }
    
    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 1149 - Somando Inteiros Consecutivos</summary>

<div markdown=1>

```cpp
#include<bits/stdc++.h>

using namespace std;

int main(){
    int a, n, soma = 0;
    cin >> a >> n;
    while(n <= 0)
        cin >> n;

    for(int i = 0;i < n; i++)
        soma += a + i;

    cout << soma << endl;
    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 1074 - Par ou Ímpar</summary>

<div markdown=1>

```cpp
#include<bits/stdc++.h>

using namespace std;

int main (){

    int N;

    scanf ("%d", &N);

    for (int i = 0; i < N; i++)
    {
        int x;
        scanf ("%d", &x);

        if (x == 0)
            printf ("NULL\n");
        else if (x > 0){
            if (x % 2 == 0)
               printf ("EVEN POSITIVE\n");
            else
                printf ("ODD POSITIVE\n");
        }
        else
        {
            if (x % 2 == 0)
                printf ("EVEN NEGATIVE\n");
            else
                printf ("ODD NEGATIVE\n"); 
        }   
    }

    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 1078 - Tabuada</summary>

<div markdown=1>

```cpp
#include<bits/stdc++.h>

using namespace std;

int main (){
    int N;
    scanf ("%d", &N);

    for (int i = 1; i < 11; i++)
        printf ("%d x %d = %d\n", i, N, i * N);

    return 0;
}
``` 

</div>
</details>


<details>
    <summary>URI 1154 - Tipo de Combustível</summary>

<div markdown=1>

```cpp
#include<bits/stdc++.h>

using namespace std;


int main (){

    int tipocomb, alcool = 0, gas = 0, disel = 0;

    scanf ("%d", &tipocomb);

    while (tipocomb != 4){
        if (tipocomb == 1)
            alcool += 1;

        else if (tipocomb == 2)
            gas += 1;
        
        else if (tipocomb == 3)
            disel += 1;

        scanf ("%d", &tipocomb);
    }

    printf ("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", alcool, gas, disel);

    return 0;
}
``` 

</div>
</details>


<details>
    <summary>URI 1143 - Quadrado e ao Cubo</summary>

<div markdown=1>

```cpp
#include<bits/stdc++.h>

using namespace std;

int main (){

    int n;
    
    scanf ("%d", &n);

    for (int i = 1; i <= n; i++)
        printf ("%d %d %d\n", i, i*i, i*i*i);        

    return  0;
}
``` 

</div>
</details>


<details>
    <summary>URI 1146 - Sequências Crescentes</summary>

<div markdown=1>

```cpp
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while (true){
        cin >> n;
        if(n == 0)
            break;

        for(int i = 1; i < n; i++)
            cout << i << " ";

        cout << n << endl;
    }

    return 0;
}
``` 

</div>
</details>


<details>
    <summary>URI 1150 - Ultrapassando Z</summary>

<div markdown=1>

```cpp
#include<bits/stdc++.h>

using namespace std;

int main(){
    int x, z, soma = 0, i = 0;
    cin >> x;
    
    while(true){
        cin >> z;
        if(z>x){
            break;
        }
    }

    while(soma<z){
        soma += i + x;
        i++;
    }
    cout << i << endl;

    return 0;
}
``` 

</div>
</details>


<details>
    <summary>URI 1924 - Vitória e a Indecisão</summary>

<div markdown=1>

```cpp
#include<bits/stdc++.h>

using namespace std;

int main() {
 
    int n;
    cin >> n;
    string s;
    
    for(int i = 0; i < n; i++)
        cin >> s;
    
    cout << "Ciencia da Computacao" << endl;
 
    return 0;
}
``` 

</div>
</details>

## Exercícios Extras


<details>
    <summary>URI 1118 - Várias Notas Com Validação</summary>

<div markdown=1>

```cpp
#include<bits/stdc++.h>

using namespace std;

int main() {
    float n1, n2, media;
    int x = 1;
    
    while (x != 2){
        cin >> n1;
        while (n1 < 0 || n1 > 10){
            printf("nota invalida\n");
            cin >> n1;
        }

        cin >> n2;
        while (n2 < 0 || n2 > 10){
            printf("nota invalida\n");
            cin >> n2;
        }

        media = (float) (n1+n2) / 2;
        printf("media = %.2f\n", media);
        printf("novo calculo (1-sim 2-nao)\n");
       
        cin >> x;
        while (x < 1 || x > 2){
            printf("novo calculo (1-sim 2-nao)\n");   
            cin >> x;
        }
    }

    return 0;
}
``` 

</div>
</details>


<details>
    <summary>URI 1131 - Grenais</summary>

<div markdown=1>

```cpp
#include<bits/stdc++.h>

using namespace std;

int main() {
    int gi, gg, escolha=1, jogos=0, vi=0, vg=0, emp=0;
   
    while (escolha == 1){
        jogos++;
        cin >> gi >> gg;
        
        if(gi>gg)
            vi++;
        else if(gi<gg)
            vg++;
        else
            emp++;

        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> escolha;
    }
    
    cout << jogos << " grenais" << endl;
    cout << "Inter:" << vi << endl;
    cout << "Gremio:" << vg << endl;
    cout << "Empates:" << emp << endl;
    
    if(vi>vg)
        cout << "Inter venceu mais" << endl;
    else if(vi<vg)
        cout << "Gremio venceu mais" << endl;
    else
        cout << "Nao houve vencedor" << endl;

    return 0;
}
``` 

</div>
</details>


<details>
    <summary>URI 1157 - Divisores I</summary>

<div markdown=1>

```cpp
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++){
        if(n % i == 0)
            cout << i << endl;
    }

    return 0;
}
``` 

</div>
</details>


<details>
    <summary>URI 1164 - Número Perfeito</summary>

<div markdown=1>

```cpp
#include<bits/stdc++.h>

using namespace std;

int main (){

    int n, num, divisores = 0;

    scanf ("%d", &n);

    for (int i = 0; i < n; i++){
        scanf ("%d", &num);

        for (int j = 1; j < num; j++){
            if (num % j == 0)
                divisores += j;
        }

        if (divisores == num)
            printf ("%d eh perfeito\n", num);
        else 
            printf ("%d nao eh perfeito\n", num);

        divisores = 0;
    }

    return 0;
}
``` 

</div>
</details>


<details>
    <summary>URI 1165 - Número Primo</summary>

<div markdown=1>

```cpp
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, v;
    cin >> n;

    for (int j = 0; j < n; j++){
        cin >> v;
        int div = 0;
        if (v == 2)
            cout << v << " eh primo" << endl;
        else if (v == 1)
            cout << v << " nao eh primo" << endl;
        else if (v%2==0)
            cout << v << " nao eh primo" << endl;
        else {
            for (int i = 3; i < v; i+=2){
                if (v % i == 0){
                    div = 1;
                    break;
                }
            }

            if ( div == 0)
                cout << v << " eh primo" << endl;
            else
                cout << v << " nao eh primo" << endl;
        }
    }
    return 0;
}
``` 

</div>
</details>

## Desafios

<details>
    <summary>Fizz Buzz</summary>

- Escreva um programa que mostre os números de 0 a 100 e coloque Fizz nos números múltiplos de 3 e Buzz nos múltiplos de 5, caso ambos ocorram mostre FizzBuzz.

<div markdown=1>

```cpp
#include<bits/stdc++.h>

using namespace std;

int main(){
    for (int i = 0; i <= 100; i++){
        if (i % 3 and i % 5)
            cout << "FizzBuzz" << endl;
        else if (i % 3)
            cout << "Fizz" << endl;
        else if (i % 5) 
            cout << "Buzz" << endl;
    }
    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 1160 - Crescimento Populacional</summary>

<div markdown=1>

```cpp
#include<bits/stdc++.h>

using namespace std;

int main(){

    int T, i, anos = 0;

    scanf ("%d", &T);

    for (i = 0; i < T; i++)
    {
        int pa, pb;
        double g1, g2;

        scanf ("%d %d %lf %lf", &pa, &pb, &g1, &g2);

        while (1)
        {
            pa += (g1/100) * pa;
            pb += (g2/100) * pb;
            anos++;

            if (pa > pb || anos > 100)
                break;                  
        }

        if (anos > 100)
            printf ("Mais de 1 seculo.\n");
        else 
            printf ("%d anos.\n", anos);

        anos = 0;        
    }
    

    return 0;
}
``` 
</div>
</details>
