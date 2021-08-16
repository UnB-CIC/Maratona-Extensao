## Editorial Semana 08 - Vetores

## Lista de Exercícios 05

<details>
    <summary>URI 1173 - Preenchimento de Vetor I</summary>

<div markdown=1>

```cpp
#include <bits/stdc++.h>

using namespace std;

int main (){

    int vet[10], n, i;

    scanf ("%d", &n);

    for (i = 0; i <= 9; i++){
        vet[i] = n;
        n = n*2;
        printf ("N[%d] = %d\n", i, vet[i]);
    }

    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 1174 - Seleção eem Vetor I</summary>

<div markdown=1>

```cpp
#include <bits/stdc++.h>
 
using namespace std;

int main (){

    double vet[100];
    int i,j,n=0;

    for (i = 0; i <= 99; i++){
        double x = 10;
        scanf ("%lf", &x);
        vet[i] = x;
    }

    for (j = 0; j <= 99; j++){
        if (vet[j] <= 10){
            printf ("A[%d] = %.1lf\n", j, vet[j]);
        }
    }

    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 1175 - Troca em Vetor I</summary>

<div markdown=1>

```cpp
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 20, N[n];
    for (int i = 0; i < n; i++){
        cin >> N[i];
    }
    for (int i = 0; i < n/2; i++){
        int aux = N[n-i-1];
        N[n-i-1] = N[i];
        N[i] = aux;
    }
    for (int i = 0; i < n; i++)
        printf("N[%d] = %d\n", i, N[i]);
    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 1177 - Preenchimento de Vetor II</summary>

<div markdown=1>

```cpp
#include <bits/stdc++.h>

using namespace std;

int main (){

    int vet[1000], t, i, x = 0;

    scanf ("%d", &t);

    for (i = 0; i<1000; i++){
        vet[i] = x; 
        x += 1;
        if (x >= t){
            x = 0;
        }
        printf ("N[%d] = %d\n", i, vet[i]);
    }
 
    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 1178 - Preenchimento de Vetor III</summary>

<div markdown=1>

```cpp
#include <bits/stdc++.h>

using namespace std;
 
int main()
{
    vector<double> v;
    double N;
    cin >> N;
    for (int i = 0; i <= 99; i++){
        v.push_back(N);
        N /= 2;
    }
    for (int i = 0; i <= 99; i++)
      printf("N[%d] = %.4lf\n", i, v[i]);
    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 1179 - Preenchimento de Vetor IV</summary>

<div markdown=1>

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {

    int par[5], impar[5];

    int contp = 0, conti = 0;
    int N;

    for(int i = 0; i != 15; i++){
        cin >> N;
        if(N % 2 == 0){
            par[contp] = N;
            contp++;

            if(contp == 5){
                for(int j = 0; j != 5; j++){
                    cout << "par[" << j << "] = " << par[j] << endl;
                    contp = 0;
                }
            }
        }
        else{
            impar[conti] = N;
            conti++;
            if(conti == 5){
                for(int k = 0; k != 5; k++){
                    cout << "impar[" << k << "] = " << impar[k] << endl;
                    conti = 0;
                }
            }
        }
    }

    for(int m = 0; m != conti; m++){
      cout << "impar[" << m << "] = " << impar[m] << endl;
    }

    for(int n = 0; n != contp; n++){
      cout << "par[" << n << "] = " << par[n] << endl;
    }

  return 0;
}
``` 

</div>
</details>


<details>
    <summary> URI 2167 - Falha do Motor</summary>

<div markdown=1>

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
 
    int n, flag = 1;
    
    cin >> n;
    vector<int> v(n);
    
    for (int i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }
    
    for (int i = 1; i < v.size(); i++){
        if (v[i] < v[i-1]){
            flag = 0;
            printf("%d\n", i+1);
            break;
        }
    }
    
    if (flag == 1){
        printf("0\n");
    }
 
    return 0;
}
``` 

</div>
</details>


<details>
    <summary> URI 1176 - Fibonacci em Vetor</summary>

<div markdown=1>

```cpp
#include <bits/stdc++.h>

using namespace std;
 
int fibonacci (int x){
    long long int fib[61], i;
    fib[0] = 0;
    fib[1] = 1;
    for (i=2; i<=60; i++){
       long long int k = i - 1; 
       long long int l = i - 2;
       fib[i] =  fib[k] + fib[l];
    }

    printf ("Fib(%d) = %lld\n", x, fib[x]);
}

int main(){
    int n, i;

    scanf ("%d", &n);

    for (i=0; i<n; i++){
        int x;
        scanf ("%d", &x);
        fibonacci (x);
    }

    return 0;
}
``` 

</div>
</details>


## Exercícios Extras


<details>
    <summary>URI 2663 - Fase</summary>

<div markdown=1>

```cpp
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, minc, cont = 1, c;

    cin >> n >> minc;
    
    vector<int> v(n);
    
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end(), greater<int>());
    c = v[0];
    for (int i = 1; i < n; i++){
        if (cont >= minc and v[i] != c)
            break;
        else{
            cont++;
            c = v[i];
        }
    }
    cout << cont << endl;

    return 0;
}
``` 

</div>
</details>

## Desafio

<details>
    <summary>URI 2709 - As Moedas de Robbie</summary>

<div markdown=1>

```cpp
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m;

    while(cin >> m){
        vector<int> v(m);
        for(int i = 0; i < m; i++)
            cin >> v[i];
        int n, soma = 0;
        cin >> n;
        for (int i = m-1; i >= 0; i -= n)
            soma += v[i];
        int flag = 0;
        if (soma != 2 && soma % 2 == 0 || soma == 1)
            flag = 1;
        else{
            for (int i = 3; i <= (int)sqrt(soma); i+=2){
                if (soma % i == 0){
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 0)
            cout << "You’re a coastal aircraft, Robbie, a large silver aircraft." << endl;
        else
            cout << "Bad boy! I’ll hit you." << endl;
    }
    return 0;
}
``` 

</div>
</details>
