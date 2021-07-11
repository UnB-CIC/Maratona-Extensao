## Editorial Semana 02 - Algoritmos, variáveis, expressões e estruturas básicas

## Lista de Exercícios 01

<details>
    <summary>URI 1000 - Hello World!</summary>

<div markdown=1>

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    cout << "Hello World!\n";
    return 0;
}

``` 

</div>
</details>

<details>
    <summary>URI 1001 - Extremamente Básico</summary>

<div markdown=1>

```cpp
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int a, b;
    cin >> a >> b;
    cout << "X = " << a + b << endl;
    return 0;
}
``` 

</div>
</details>


<details>
    <summary>URI 1002 - Area do Círculo</summary>

<div markdown=1>

```cpp
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    double area, raio, n = 3.14159;
    cin >> raio;
    area = n * (raio * raio);
    printf("A=%.4lf\n", area);
    return 0;
}

``` 

</div>
</details>

<details>
    <summary>URI 1003 - Soma Simples</summary>

<div markdown=1>

```cpp
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int A, B, SOMA;
    scanf("%d%d", &A, &B);
    SOMA = A + B;
    cout << "SOMA = " << SOMA << endl;
    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 1004 - Produto Simples</summary>

<div markdown=1>

```cpp
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int x, y, PROD;
    cin >> x >> y;
    PROD = x * y;
    cout << "PROD = " << PROD << endl;
    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 1005 - Média 1</summary>

<div markdown=1>

```cpp
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    double A, B, MEDIA;
    cin >> A >> B;
    MEDIA = (A * 3.5 + B * 7.5) / 11;
    printf("MEDIA = \%.5lf\n", MEDIA);
    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 1006 - Média 2</summary>

<div markdown=1>

```cpp

#include <bits/stdc++.h>
#include <iomanip>
 
using namespace std;
 
int main() {
    double A, B, C, MEDIA;
    scanf("%lf%lf%lf", &A, &B, &C);
    MEDIA = (A * 2 + B * 3 + C * 5) / 10;
    cout << "MEDIA = " << fixed << setprecision(1) << MEDIA << endl;
    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 1007 - Diferença</summary>

<div markdown=1>

```cpp
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int A, B, C, D, DIFERENCA;
    cin >> A >> B >> C >> D;
    DIFERENCA = (A * B - C * D);
    cout << "DIFERENCA = " << DIFERENCA << endl;
    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 1008 - Salário</summary>

<div markdown=1>

```cpp
#include <bits/stdc++.h>
#include <iomanip>

using namespace std;
 
int main() {
    int a, b;
    float c, salario;
    cin >> a >> b >> c;
    salario = b * c;
    cout << "NUMBER = " << a << endl << "SALARY = U\$ " << fixed << setprecision(2) << salario << endl;
    return 0;
}
``` 

</div>
</details>

## Exercícios Extras


<details>
    <summary>URI 1010 - Cálculo Simples</summary>

<div markdown=1>

```cpp
#include <bits/stdc++.h>

using namespace std;
 
int main() {
    int cod1, nump1, cod2, nump2;
    float valor1, valor2, total;
    scanf("%d%d%f%d%d%f", &cod1, &nump1, &valor1, &cod2, &nump2, &valor2);
    total = nump1 * valor1 + nump2 * valor2;
    printf("VALOR A PAGAR: R\$ %.2f\n", total);
    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 1011 - Esfera</summary>

<div markdown=1>

```cpp
#include <bits/stdc++.h>
 
#include <iomanip>

using namespace std;
 
int main() {
 
    double raio, volume;
    cin >> raio;
    volume = (4.0/3) * 3.14159 * (raio * raio * raio);
    cout << "VOLUME = " << fixed << setprecision(3) << volume << endl;
    return 0;
}
``` 

</div>
</details>

## Desafio

<details>
    <summary>URI 1018 - Cédulas</summary>

<div markdown=1>

```cpp
#include <bits/stdc++.h>

using namespace std;
 
int main() {
    int x;
    cin >> x;
    int y = x;
    int cem = x / 100;
    x = x % 100;
    int cinquenta = x / 50;
    x = x % 50;
    int vinte = x / 20;
    x = x % 20;
    int dez = x / 10;
    x = x % 10;
    int cinco = x / 5;
    x = x % 5;
    int dois = x / 2;
    x = x % 2;
    int um = x;
    cout << y << endl;
    cout << cem << " nota(s) de R\$ 100,00" << endl;
    cout << cinquenta << " nota(s) de R\$ 50,00" << endl;
    cout << vinte << " nota(s) de R\$ 20,00" << endl;
    cout << dez << " nota(s) de R\$ 10,00" << endl;
    cout << cinco << " nota(s) de R\$ 5,00" << endl;
    cout << dois << " nota(s) de R\$ 2,00" << endl;
    cout << um << " nota(s) de R\$ 1,00" << endl;;
    return 0;
}
``` 

</div>
</details>

<details>
    <summary>Descrição</summary>

<div markdown=1>

Neste exercício é utilizado noções de divisão e resto da divisão. Por exemplo, se o valor $x$ for 576, guardamos $x$ em uma variável $y$ para que possamos imprimir na tela mais tarde. Começamos dividindo $x$ por 100 para se obter o valor das quantidades de notas de cem, no caso a divisão de 576 por 100 é 5.76, mas como estamos colocando a divisão numa variável inteira chamada cem, o valor que vai ser atribuído a ela depois da divisão é 5. Agora temos que pegar o resto da divisão entre 576 e cem, pois já sabemos que precisamos de 5 notas de cem para completar 576, logo pegamos o resto da divisão com o operador "\%", o que resultará em 76. Então repetimos o processo fazendo a divisão de $x = 76$ por 50 para obtemos a quantidade de notas de 50, depois pegamos o resto da divisão entre $x$ e 50 para saber a quantidade de notas restantes. Fazemos isso para todas as notas e no final exibimos a saída na tela conforme é pedida. 

</div>
</details>
