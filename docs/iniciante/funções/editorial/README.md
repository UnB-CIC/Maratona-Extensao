## Editorial Semana 10 - Funções

## Lista de Exercícios 07

<details>
<summary>URI 1547 - Adivinha</summary>

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
    <summary>URI 1555 - Funções</summary>

<div markdown=1>

```cpp
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    while(n--){
        int x, y;
        cin >> x >> y;
        
        int rafael = 9*x*x+y*y;
        int beto = 2*x*x+25*y*y;
        int carlos = -100*x+y*y*y;
        
        if(rafael > beto){
            if(rafael > carlos) cout << "Rafael";
            else cout << "Carlos";
        } else{
            if(beto > carlos) cout << "Beto";
            else cout << "Carlos";
        }
        
        
        cout << " ganhou" << endl;
        
    }
    
    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 2342 - Overflow</summary>

<div markdown=1>

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
    <summary>URI 2846 - Fibonot</summary>

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

<details>
    <summary>URI 1048 - Aumento de Salário</summary>

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
    <summary>URI 1035 - Teste de Seleção 1</summary>

<div markdown=1>

```cpp
#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c, d;

    cin >> a >> b >> c >> d;

    if(b>c and d>a and c+d>a+b and c>0 and d>0){
        cout << "Valores aceitos" << endl;
    } else {
        cout << "Valores nao aceitos" << endl;
    }
}
``` 

</div>
</details>


<details>
    <summary> URI 1036 - Fórmula de Bháskara</summary>

<div markdown=1>

```cpp
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main(){
    double a, b, c, delta;
    cin >> a >> b >> c;

    cout.precision(5);
    cout.setf(ios::fixed);

    delta = b*b-4*a*c;

    if(delta<0 or a==0){
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
    <summary> URI 1051 - Imposto de Renda</summary>

<div markdown=1>

```cpp
#include <bits/stdc++.h>

using namespace std;

int main(){
    double renda;
    cin >> renda;

    cout.precision(2);
    cout.setf(ios::fixed);

    if(renda<=2000){
        cout << "Isento" << endl;
    } else{
        if(renda<=3000){
            cout << "R$ " << (8*(renda-2000))/100 << endl;
        } else{
            //maior que 3000
            if(renda<=4500){
                cout << "R$ " << (18*(renda-3000))/100+80 << endl;
            } else{
                cout << "R$ " << (28*(renda-4500))/100+270+80 << endl;
            }
        }
    }

    return 0;
}
``` 

</div>
</details>