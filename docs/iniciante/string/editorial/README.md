## Editorial Semana 07 - Strings

## Lista de Exercícios 04

<details>
    <summary>URI 1024 - Criptografia</summary>

<div markdown=1>

```cpp
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    string pal, cri;
    cin >> n;
    cin.get();
    
    for(int i = 0; i < n; i++){
        getline(cin, pal);
        cri = "";
        if(pal.size() == 0){
            if(isalpha(pal[0]))
                cri = char(int(pal[0]) +3);
            else
                cri = pal[0];
        } else{
            for(int j=pal.size()-1;j>=0;j--){
                if(isalpha(pal[j])) 
                    cri += char(int(pal[j]) +3);
                else
                    cri += pal[j];
            }
            for(int j=pal.size()/2; j<pal.size(); j++) 
                cri[j] = char(int(cri[j])-1);
        }
        cout << cri << endl;
    }

    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 1120 - Revisão de Contrato</summary>

<div markdown=1>

```cpp
#include <bits/stdc++.h>
 
using namespace std;

int main() {
    char d;
    string n;
    cin >> d >> n;
    while (d != '0')
    {
        int zeros = 0;
        string ans;
        for (int i = 0; i < n.size(); i++){
            if (n[i] != d)
                ans += (n[i]);
        }
        while (ans[0] == '0')
        {
            if (ans.size() == 1)
                break;

            ans.erase(0,1);    
        }
        
        if (ans.size() == 0)
            cout << 0 << endl;
        else
            cout << ans << endl;
        cin >> d >> n;
    }   
}
``` 

</div>
</details>


<details>
    <summary>URI 1168 - LED</summary>

<div markdown=1>

```cpp
#include <bits/stdc++.h>

using namespace std;

int main(){ 
    int n;
    cin >> n;

    while(n--){

        int res = 0;
        string num;
        cin >> num;

        for(int i = 0; i < num.size(); i++){
            switch (num[i]){               
                case '0': res += 6; 
                    break;
                case '1': res += 2; 
                    break;
                case '2': res += 5; 
                    break;
                case '3': res += 5; 
                    break;
                case '4': res += 4; 
                    break;
                case '5': res += 5; 
                    break;
                case '6': res += 6; 
                    break;
                case '7': res += 3; 
                    break;
                case '8': res += 7; 
                    break;
                case '9': res += 6; 
                    break;
            }
        }
        cout << res << " leds\n";
    }   
    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 1234 - Sentença Dançante</summary>

<div markdown=1>

```cpp
#include <bits/stdc++.h>

using namespace std;

int main()
{
    char s[51];
    
    while (cin.getline(s, 51)){
        int i = 0;
        bool m = false;
        char ans[51];
        while (s[i] != '\0')
        {
            if (s[i] != ' ' and s[i] >= 65 and s[i] <= 90)
            {
                if (m == true)
                {
                    ans[i] = s[i] + 32;
                    m = false;
                }
                else
                {
                    ans[i] = s[i];
                    m = true;
                }
            }
            else if (s[i] != ' ' and s[i] >= 97 and s[i] <= 122)
            {
                if (m == true)
                {
                    ans[i] = s[i];
                    m = false;
                }
                else
                {
                    ans[i] = s[i] - 32;
                    m = true;
                }
            }
            else
                ans[i] = ' ';
            i++;
        }
        ans[i] = '\0';
        printf("%s\n", ans);
    }
}
``` 

</div>
</details>

<details>
    <summary>URI 1238 - Combinador</summary>

<div markdown=1>

```cpp
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        string s, s2;
        cin >> s >> s2;
        char ans[101];
        bool a = true;
        int j = 0, k = 0, l = 0;
        while (1)
        {
            if (j < s.size() and k < s2.size()){
                if (a == true){
                    ans[l] = s[j];
                    j++;
                    a = false;
                }
                else{
                    ans[l] = s2[k];
                    k++;
                    a = true;
                }
            }
            else if (j >= s.size()){
                ans[l] = s2[k];
                k++;
                if (k >= s2.size()) break;
            }
            else if (k >= s2.size()){
                ans[l] = s[j];
                j++;
                if (j > s.size()) break;
            }
            l++;
        }
        ans[l+1] = '\0';
        printf("%s\n", ans);        
    }
    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 1253 - Cifra de César</summary>

<div markdown=1>

```cpp
#include <bits/stdc++.h>

using namespace std;
 
int main() {
 
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++){
        int x;
        string s;
        cin >> s >> x;
        
        for (int j = 0; j < s.size(); j++){
            s[j] -= x;
            if (s[j] < 'A')
                s[j] = (s[j] % 65) + 26;
        }
        cout << s << endl;
    }
 
    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 2062 - OBI URI</summary>

<div markdown=1>

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() { 
    int n;
    cin >> n;
    string nome;

    for(int i = 0; i < n; i++){
        cin >> nome;

        if(nome.size() == 3 && nome[0] == 'O' && nome[1] == 'B')
            cout << "OBI";
        
        else if(nome.size() == 3 && nome[0] == 'U' && nome[1] == 'R' )
            cout << "URI";
        else 
            cout << nome;
            
        if (i < n-1)
            cout << " ";    
    }
    cout << endl;
    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 1272 - Mensagem Oculta</summary>

<div markdown=1>

```cpp
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++){
        string s;
        getline(cin, s);
        int flag = 1;
        for (int j = 0; j < s.size(); j++){
            if (s[j] >= 'a' and s[j] <= 'z' and flag == 1){
                cout << s[j];
                flag = 0;
            }
            else if (s[j] == ' '){
                flag = 1;
            }
        }
        cout << endl;
    }
    return 0;
}
``` 

</div>
</details>


<details>
    <summary> URI 1768 - Árvore de Natal</summary>

<div markdown=1>

```cpp
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, i, j;
    
    while(scanf("%d", &n) != EOF){
        int k = 1;
        
        for(i = 1; i <= n; i += 2){
            for(j = 0; j < n/2 - k + 1; j++) printf(" ");
            
            for(j = 0; j < i; j++){
                printf("*");
            }
            
            printf("\n");
            k++;
        }
        
        // caule
        for(j = 0; j < n/2; j++) printf(" ");
        printf("*");
        printf("\n");
        for(j = 0; j < n/2 - 1; j++) printf(" ");
        printf("***");
        printf("\n");
        printf("\n");
    }
    
    return 0;
}
``` 

</div>
</details>


<details>
    <summary> URI 2157 - Sequência Espelho</summary>

<div markdown=1>

```cpp
#include <bits/stdc++.h>

using namespace std;
 
int main() {
 
   int n;
   cin >> n;
   
   for(int i = 0; i < n; i++){
       string ans;
       int x, y;
       cin >> x >> y;
       for (int j = x; j <= y; j++){
           ans += to_string(j);
           cout << j;
       }
       reverse(ans.begin(), ans.end());
       cout << ans << endl;
   }
    return 0;
}
``` 

</div>
</details>


## Exercícios Extras


<details>
    <summary>URI 1871 - Zero Vale Zero</summary>

<div markdown=1>

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    while (m != 0 || n != 0) {
        string res;
        res = to_string(m+n);
        for (int i = 0; i < res.size(); i++) {
            if (res[i] != '0')
                cout << res[i];
        }
        cout << endl;
        cin >> m >> n;
    }
    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 2094 - Problema com a Calculadora</summary>

<div markdown=1>

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string s, n1, n2, n3;
        cin >> s;
        // o primeiro numero esta na posição 2 e 3 da string
        n1 = s[2];
        n1 += s[3];
        // o segundo numero esta na posição 5, 6 e 7 da string
        n2 = s[5];
        n2 += s[6];
        n2 += s[7];
        // o o terceiro numero esta na posição 11 e 12 da string
        n3 = s[11];
        n3 += s[12];
        cout << stoi(n1) + stoi(n2) + stoi(n3) << endl;
    }    
    return 0;
}
``` 

</div>
</details>

## Desafio

<details>
    <summary>URI 1278 - Justificador II</summary>

<div markdown=1>

```cpp
#include <bits/stdc++.h>

using namespace std;
 
string left_trim(string s) {
    return s.substr(s.find_first_not_of(" "));
}
 
string right_trim(string s) {
    return s.substr(0, s.find_last_not_of(" ") + 1);
}
 
string trim(string s) {
    return right_trim(left_trim(s));
}
 
string remove_middle_spaces(string s) {
    string r = "";
    int spaces = 0;
     
    for(int i = 0; i < s.size(); i++ ) {
        if(s[i] != ' '){
           if (spaces > 0) {
                r += " ";
                spaces = 0;
           }
            r += s[i];
        }     
        else 
            spaces += 1;
    }
     
    return r;
}
 
int main() {
     
    short n;
    char c, a = '\0';
    bool primeiro = true;
     
    while(cin >> n && n != 0 ) {
        string *linhas = new string[n];
        cin.ignore();
        int max = 0;
         
        if(primeiro) primeiro = false;
        else cout << endl;
         
        for(int i = 0; i < n; i++) {
            getline(cin, linhas[i]);
            linhas[i] = remove_middle_spaces(trim(linhas[i]));
             
            if( linhas[i].size() > max) {
                max = linhas[i].size();
            }
        }
         
        for(int i = 0; i < n; i++ ) {
            cout << setw(max) << linhas[i] << endl;
        }
    }
     
    return 0;
}
``` 

</div>
</details>
