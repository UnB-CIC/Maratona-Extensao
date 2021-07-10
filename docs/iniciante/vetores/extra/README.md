# Vetores - Material Extra

## Declaração de um vetor

```cpp
int v[10]; //aloca um vetor de inteiros com 10 posições
```

```cpp
vector<int> v; //aloca um vetor de inteiros
```

```cpp
vector<int> v(10); //aloca um vetor de inteiros com 10 posições inicializadas em 0
```

## Inicializando um vetor

```cpp
vector<int> a = {5, 6, 7};
vector<double> b = {3.14, 1.7, 9.8};
vector<string> c = {"Gui", "Duda", "Vick", "Gio", "Tong", "Duda Holanda", "Ligoski", "Victor"};
```

## Como ler um vetor

Podemos ler um vetor do usuario com o ```cin``` ou o ```scanf``` da seguinte forma:

```cpp
n = 6;
vector<int> v(6); 
// inicializamos o vetor com 6 posições todas valendo 0

//lendo com scanf
for (int i = 0; i < n; i++)
    scanf("%d", &v[i]);

//lendo com cin
for (int i = 0; i < n; i++)
    cin >> v[i];
```

## Acessando elementos de um vetor

Para acessar os elementos de um vetor temos que passar a posição de onde ele esta no vetor, essa posição é chamada de *index*. As posições de um vetor sempre começam em 0 e terminam no tamanho do vetor menos 1;

```cpp
vector<int> v = {1, 2, 3}; //inicializando um vetor com 3 inteiros
cout << v[0] << " "; // acessando o elemento 0 do vetor, exibimos na tela o número 1
cout << v[1] << " "; // acessando o elemento 0 do vetor, exibimos na tela o número 2
cout << v[2] << endl; // acessando o elemento 0 do vetor, exibimos na tela o número 3
```

Para facilitar, podemos exibir todos os elementos de um vetor na tela usamos um laço *for*. Utilizamos a função ```size()``` como condição de parada do *for*.


```cpp
vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; //inicializando um vetor com 10 inteiros
for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
cout << endl;
``` 
## Swap

Para fazer uma troca entre duas posições no vetor é preciso de uma variável auxiliar, caso o contrario o dado vai ser perdido.

#### Jeito errado de fazer um swap
```cpp
vector<int> v = {1, 2};
// queremos que o 2 fique na posição 0 do vetor e o 1 fique na posição 1 do vetor
v[0] = v[1];
v[1] = v[0];
//aqui v[0] e v[1] estão com o número 2, pois o número 1 foi perdido na primeira troca
```

#### Jeito certo de fazer um swap
```cpp
vector<int> v = {1, 2};
// queremos que o 2 fique na posição 0 do vetor e o 1 fique na posição 1 do vetor
int aux = v[0]; // salvamos em uma variavel auxiliar o valor de v[0]
v[0] = v[1]; // trocamos o v[0] pelo v[1]
v[1] = aux; // trocamos o v[1] pela aux que salvou o valor que tinha em v[0]
```


## Métodos úteis da classe vector

```size()``` Retorna o número de elementos no vetor.

```cpp
vector<int> vetor = {1, 2, 3};
cout << vetor.size() << endl;
```

```push_back(elemento)``` Adiciona um elemento ao final do vetor.

```cpp
vector<int> vetor;
vetor.push_back(2);
cout << vetor.size() << endl;
```

```pop_back()``` Exclui o elemento no final do vetor.

```cpp
vector<int> vetor;
vetor.push_back(2);
vetor.pop_back();
cout << vetor.size() << endl;
```

```clear()``` Apaga os elementos do vetor.

```cpp
vector<int> vetor;
vetor.push_back(2);
vetor.push_back(5);
vetor.clear();
cout << vetor.size() << endl;
```

```empty()``` Retorna true se o vetor está vazio ou false se o vetor não estiver vazio.

```cpp
vector<int> vetor;
vetor.push_back(2);
if (vetor.empty())
    cout << "O vetor esta vazio" << endl;
else
    cout << "O vetor não esta vazio" << endl;
```

