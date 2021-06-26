## Editorial Semana 02 - Condicionais e operadores lógicos

## Lista de Exercícios 02

<details>
    <summary>URI 1035 - Teste de Seleção 1</summary>

<div markdown=1>

```cpp
#include <iostream>

using namespace std;

int main(){
    int a, b, c, d;

    cin >> a >> b >> c >> d;

    if (b > c && d > a && c+d > a+b && c > 0 && d > 0){
        cout << "Valores aceitos" << endl;
    } else {
        cout << "Valores nao aceitos" << endl;
    }
}
``` 

</div>
</details>

<details>
    <summary>URI 1038 - Lanche</summary>

<div markdown=1>

```cpp
#include <iostream>

using namespace std;

int main(){
    int c, q;
    cin >> c >> q;

    cout.precision(2);
    cout.setf(ios::fixed);

    if (c == 1) {
        cout << "Total: R$ " << q*4.00 << endl;
    } else if (c == 2) {
        cout << "Total: R$ " << q*4.50 << endl;
    } else if (c == 3) {
        cout << "Total: R$ " << q*5.00 << endl;
    } else if (c == 4) {
        cout << "Total: R$ " << q*2.00 << endl;
    } else if (c == 5) {
        cout << "Total: R$ " << q*1.50 << endl;
    }

    return 0;
}
``` 

</div>
</details>


<details>
    <summary>URI 1046 - Tempo de Jogo</summary>

<div markdown=1>

```cpp
#include <iostream>

using namespace std;

int main(){
    int h1, h2;
    cin >> h1 >> h2;

    if (h1 >= h2) {
        cout << "O JOGO DUROU " << 24-h1+h2 <<  " HORA(S)" << endl;
    } else {
        cout << "O JOGO DUROU " << h2-h1 <<  " HORA(S)" << endl;
    }

    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 1050 - DDD</summary>

<div markdown=1>

```cpp
#include <iostream>
 
using namespace std;
 
int main(){
    int ddd;
    cin >> ddd;
    
    switch (ddd) {
        case 61:
            cout << "Brasilia" << endl;
            break;
        case 71:
            cout << "Salvador" << endl;
            break;
        case 11:
            cout << "Sao Paulo" << endl;
            break;
        case 21:
            cout << "Rio de Janeiro" << endl;
            break;
        case 32:
            cout << "Juiz de Fora" << endl;
            break;
        case 19:
            cout << "Campinas" << endl;
            break;
        case 27:
            cout << "Vitoria" << endl;
            break;
        case 31:
            cout << "Belo Horizonte" << endl;
            break;
        default:
            cout << "DDD nao cadastrado" << endl;
    }

    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 1052 - Mês</summary>

<div markdown=1>

```cpp
#include <iostream>

using namespace std;

int main() {
    int mes;
    cin >> mes;

    switch (mes) {
        case 1:
            cout << "January" << endl;
            break;
        case 2:
            cout << "February" << endl;
            break;
        case 3:
            cout << "March" << endl;
            break;
        case 4:
            cout << "April" << endl;
            break;
        case 5:
            cout << "May" << endl;
            break;
        case 6:
            cout << "June" << endl;
            break;
        case 7:
            cout << "July" << endl;
            break;
        case 8:
            cout << "August" << endl;
            break;
        case 9:
            cout << "September" << endl;
            break;
        case 10:
            cout << "October" << endl;
            break;
        case 11:
            cout << "November" << endl;
            break;
        case 12:
            cout << "December" << endl;
            break;
    }

    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 2344 - Notas da Prova</summary>

<div markdown=1>

```cpp
#include <iostream>

using namespace std;

int main(){
    int n; cin >> n;

    if (n == 0) {
        cout << "E" << endl;
    } else if (n >= 1 && n <= 35) {
        cout << "D" << endl;
    } else if (n >= 36 && n <= 60) {
        cout << "C" << endl;
    } else if (n >= 61 && n <= 85) {
        cout << "B" << endl;
    } else {
        cout << "A" << endl;
    }
}
``` 

</div>
</details>

<details>
    <summary>URI 2454 - Fliper</summary>

<div markdown=1>

```cpp
#include <iostream>

using namespace std;

int main() {
    int p, r;
    cin >> p >> r;
    
    if (p == 0) {
        cout << 'C' << endl;
    } else {
        
        if (r == 0) {
            cout << 'B' << endl;
        } else {
            cout << 'A' << endl;
        }
        
    }
    
    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 2780 - Basquete de Robôs</summary>

<div markdown=1>

```cpp
#include <iostream>

using namespace std;

int main() {
    int d;
    cin >> d;
    
    if (d <= 800) {
        cout << 1 << endl;
    } else if (d <= 1400) {
        cout << 2 << endl;
    } else {
        cout << 3 << endl;
    }
    
    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 2787 - Xadrez</summary>

<div markdown=1>

```cpp
#include <iostream>

using namespace std;

int main() {
    int l, c;
    cin >> l >> c;
    
    if ((l + c) % 2 == 0) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 2956 - Dervivada de 13 Variáveis</summary>

<div markdown=1>

```cpp
#include <iostream>

using namespace std;

int main(){
    double a, b, area;
    cin >> a >> b;
    
    area = (a*b)/2;
    
    // 5 casas decimais
    cout.precision(5);
    cout.setf(ios::fixed);
    
    cout << "Concluimos que, dado o limite da entrada, a resposta seria:  y = f(x) = ";
    cout << area << "." << endl;

    return 0;
}
``` 

</div>
</details>

## Exercícios Extras


<details>
    <summary>URI 1026 - Fórmula de Bhaskara</summary>

<div markdown=1>

```cpp
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double a, b, c, delta;
    cin >> a >> b >> c;

    cout.precision(5);
    cout.setf(ios::fixed);

    delta = b*b-4*a*c;

    if (delta < 0 or a == 0) {
        cout << "Impossivel calcular" << endl;
    } else {
        cout << "R1 = " << (-b+sqrt(delta))/(2*a) << endl;
        cout << "R2 = " << (-b-sqrt(delta))/(2*a) << endl;
    }

    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 1037 - Intervalo</summary>

<div markdown=1>

```cpp
#include <iostream>

using namespace std;

int main(){
    double a;
    cin >> a;

    if (a >= 0 && a <= 100) {
        cout << "Intervalo ";
        if (a <= 25) {
            cout << "[0,25]" << endl;
        } else if (a <= 50) {
            cout << "(25,50]" << endl;
        } else if (a <= 75) {
            cout << "(50,75]" << endl;
        } else if (a <= 100) {
            cout << "(75,100]" << endl;
        }
    } else {
        cout << "Fora de intervalo" << endl;
    }

    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 1040 - Média 3</summary>

<div markdown=1>

```cpp
#include <iostream>

using namespace std;

int main(){
    double n1, n2, n3, n4, ne, media;
    cin >> n1 >> n2 >> n3 >> n4;

    media = (n1*2+n2*3+n3*4+n4)/10;

    cout.precision(1);
    cout.setf(ios::fixed);

    if (media >= 7) {
        cout << "Media: " << media << endl;
        cout << "Aluno aprovado." << endl;
    } else if (media < 5) {
        cout << "Media: " << media << endl;
        cout << "Aluno reprovado." << endl;
    } else {
        cin >> ne;

        cout << "Media: " << media << endl;
        cout << "Aluno em exame." << endl;
        cout << "Nota do exame: " << ne << endl;

        media = (media+ne)/2;

        if (media >= 5) {
            cout << "Aluno aprovado." << endl;
        } else {
            cout << "Aluno reprovado." << endl;
        }

        cout << "Media final: " << media << endl;
    }

    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 1049 - Animal</summary>

<div markdown=1>

```cpp
#include <iostream>

using namespace std;

int main() {
    string a, b, c;
    cin >> a >> b >> c;

    if (a == "vertebrado") {
        if (b == "ave") {
            if (c == "carnivoro") {
                cout << "aguia" << endl;
            } else {
                cout << "pomba" << endl;
            }
        } else {
            if (c == "onivoro") {
                cout << "homem" << endl;
            } else {
                cout << "vaca" << endl;
            }
        }
    } else {
        if (b == "inseto") {
            if (c == "hematofago") {
                cout << "pulga" << endl;
            } else {
                cout << "lagarta" << endl;
            }
        } else {
            if (c == "hematofago") {
                cout << "sanguessuga" << endl;
            } else {
                cout << "minhoca" << endl;
            }
        }
    }
}
``` 

</div>
</details>

