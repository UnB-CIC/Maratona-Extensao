## Editorial Semana 10 - Recursividade

## Lista de Exercícios 08

<details>
<summary>URI 1028 - Figurinhas</summary>

<div markdown=1>

```cpp
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main() {
    int n, a, b;
    cin >> n;
    
    while(n--){
        cin >> a >> b;
        
        cout << __gcd(a, b) << endl;
    }
    
    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 1153 - Fatorial Simples</summary>

<div markdown=1>

```cpp
#include <bits/stdc++.h>

using namespace std;

int f(int n){
    if(n==1 or n==0){
        return 1;
    }
    return n*f(n-1);
}

int main(){
    int n;
    cin >> n;
    cout << f(n) << endl;

    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 1161 - Soma de Fatoriais</summary>

<div markdown=1>

```cpp
#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll fatorial(ll x){

    if(x == 0){
        return 1;
    }

    return fatorial(x-1)*x;

}

int main() {
    
    ll n, m;

    while(cin >> n >> m){

        ll res = fatorial(n) + fatorial(m);
        cout << res << endl;

    }
   
    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 1169 - Trigo no Tabuleiro</summary>

<div markdown=1>

```cpp
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    int n, x;
    cin >> n;
    
    while(n--){
        ll tot = 0, graos = 0, gramas = 0, casa = 1;
        cin >> x;
        
        if(x == 63) cout << "768614336404564 kg" << endl;
        else if( x == 64) cout << "1537228672809129 kg" << endl;
        else{
            for(int j = 1; j <= x; j++) casa *= 2;  
            
            cout << (casa/12)/1000 << " kg" << endl;
        }
        
    }
    
    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 2166 - Raiz Quadrada de 2</summary>

<div markdown=1>

```cpp
#include <bits/stdc++.h>

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