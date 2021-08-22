## Editorial Semana 09 - Matrizes

## Lista de Exercícios 06

<details>
    <summary>URI 1181 - Linha na Matriz</summary>

<div markdown=1>

```cpp
#include <bits/stdc++.h>
using namespace std;

int main(){ 
    int n;
    double matriz[12][12],soma=0;
    char o;

    scanf("%d",&n);
    scanf(" %c",&o);

    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            double x;
            scanf("%lf",&x);
            if(i==n){
                soma=soma+x;
            }
        }
    }

    if(o=='S'){
        printf("%.1lf\n",soma);
    }

    else if(o=='M'){
        printf("%.1lf\n",(soma/12));
    }
    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 1183 - Acima da Diagonal Principal</summary>

<div markdown=1>

```cpp
#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main(){
    char v;
    double matriz[12][12],s=0;
    scanf("%c",&v);


    for(int i=0;i<12;i++){
        for(int j=0;j<12;j++){
            double valor;
            scanf("%lf",&valor);
            matriz[i][j]=valor;
        }
    }
        
    for(int i=0;i<12;i++){
        int p=i;
        p++;
        while(p<12){
            s=s+matriz[i][p];
            p++;
        }
    
    }
    
    if (v=='M'){
        printf("%.1lf\n",s/66);
    }
    else if (v=='S'){
        printf("%.1lf\n",s);
    }
    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 1190 - Área Direita</summary>

<div markdown=1>

```cpp
#include <bits/stdc++.h>

using namespace std;

int main()
{
    
}
``` 

</div>
</details>

<details>
    <summary>URI 1435 - Matriz Quadrada I</summary>

<div markdown=1>

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n, i, j, k;
    
    while (true) {

        scanf("%d", &n);
        
        if (n == 0)
            break;
        
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                k = i + 1;
                if (j + 1 < k)
                    k = j + 1;
                if (n - i < k)
                    k = n - i;
                if (n - j < k)
                    k = n - j;
                if (j)
                    printf(" ");
                printf("%3d", k);
            }
            printf("\n");
        }
        printf("\n");
        
    }
    
    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 1534 - Matriz 123</summary>

<div markdown=1>

```cpp
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    

    while(scanf("%d", &n) != EOF){
        int matriz[n][n];

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i==j){
                    matriz[i][j] = 1;
                }
                if(i+j==n-1){
                    matriz[i][j] = 2;
                }
                if(i!=j && (i+j)!= (n-1)){
                    matriz[i][j] = 3;
                }
            }
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(j==n-1){
                    printf("%d\n", matriz[i][j]);
                }
                else{
                    printf("%d", matriz[i][j]);
                }
            }
        }
    }

    return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 2552 - PãodeQueijoSweeper</summary>

<div markdown=1>

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {

    
}
``` 

</div>
</details>


<details>
    <summary> URI 1478 - Matriz Quadrada II</summary>

<div markdown=1>

```cpp
#include <bits/stdc++.h>
using namespace std;

int main(){ 
    int n;
    scanf("%d",&n);

    while(n!=0){
    int matriz[n][n]; //0...(n-1) 

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){
                matriz[i][j]=1;
            }
            else if(i<j){
                matriz[i][j]=j-i+1;
            }
            else if(i>j){
                matriz[i][j]=i-j+1;
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j==0){
                printf("%3d",matriz[i][j]);
            }
            else{
                printf(" %3d",matriz[i][j]);
            }
        }
        cout<<endl;
    }
    cout<<endl;

    scanf("%d",&n);
    }

    return 0;
}
``` 

</div>
</details>


<details>
    <summary> URI 1557 - Matriz Quadrada III</summary>

<div markdown=1>

```cpp
#include <bits/stdc++.h>

using namespace std;

int main(){
    
}
``` 

</div>
</details>


<details>
    <summary>URI 1827 - Matriz Quadrada IV</summary>

<div markdown=1>

```cpp
#include <bits/stdc++.h>

using namespace std;

int main()
{
    
}
``` 

</div>
</details>

<details>
    <summary>URI 1185 - Acima da Diagonal Secundária</summary>

<div markdown=1>

```cpp
#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main(){
    char v;
    double matriz[12][12],s=0;
    scanf("%c",&v);

   
       for(int i=0;i<12;i++){
          for(int j=0;j<12;j++){
            double valor;
            scanf("%lf",&valor);
            if(i+j<11){
            s=s+valor;
            }
          }
        }
     
    if (v=='M'){
        printf("%.1lf\n",s/66);
    }
   else if (v=='S'){
       printf("%.1lf\n",s);
   }
   return 0;
}
``` 

</div>
</details>

<details>
    <summary>URI 1186 - Abaixo da Diagonal Secundária</summary>

<div markdown=1>

```cpp

}
``` 

</div>
</details>