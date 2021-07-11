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

Podemos também inicializar um vetor com todas as posições preenchidas dado um número

```cpp
vector<int> a(10); // inicializamos o vetor com 10 posições todas valendo 0
vector<int> b(10, -1); // inicializamos o vetor com 10 posições todas valendo -1
vector<double> c(3, 3.1415); // inicializamos o vetor com 3 posições todas valendo 3.1415
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

Para acessar os elementos de um vetor temos que passar a posição de onde ele esta, essa posição é chamada de *index*. A indexação de um vetor sempre começa em 0 e termina no tamanho do vetor menos 1.

Exemplo:

```cpp
vector<int> v = {1, 2, 3}; //inicializando um vetor com 3 inteiros
// a indexação de v vai de 0 a 2 (tamanho do vetor que é 3 menos 1)
cout << v[0] << " "; // acessando o index 0 do vetor, exibimos na tela o número 1
cout << v[1] << " "; // acessando o index 1 do vetor, exibimos na tela o número 2
cout << v[2] << endl; // acessando o index 2 do vetor, exibimos na tela o número 3
```

Para facilitar, podemos exibir todos os elementos de um vetor na tela usando um laço *for*. Utilizamos a função ```size()``` como condição de parada do *for*.


```cpp
vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; //inicializando um vetor com 10 inteiros
for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
cout << endl;

``` 
Para vizualização declaramos um vetor de 10 posições ```v[10]``` e rodamos um laço *for* para exibir na tela cada elemento do vetor

<iframe width="800" height="500" frameborder="0" src="http://pythontutor.com/iframe-embed.html#code=%23include%20%3Cbits/stdc%2B%2B.h%3E%0A%0Ausing%20namespace%20std%3B%0A%0Aint%20main%28%29%0A%7B%0A%20%20int%20v%5B10%5D%20%3D%20%7B1,%202,%203,%204,%205,%206,%207,%208,%209,%2010%7D%3B%20//inicializando%20um%20vetor%20com%2010%20inteiros%0A%20%20for%20%28int%20i%20%3D%200%3B%20i%20%3C%2010%3B%20i%2B%2B%29%0A%20%20%20%20%20%20cout%20%3C%3C%20v%5Bi%5D%20%3C%3C%20%22%20%22%3B%0A%20%20cout%20%3C%3C%20endl%3B%0A%20%20return%200%3B%0A%7D&codeDivHeight=400&codeDivWidth=350&cumulative=false&curInstr=0&heapPrimitives=nevernest&origin=opt-frontend.js&py=cpp_g%2B%2B9.3.0&rawInputLstJSON=%5B%5D&textReferences=false"> </iframe>

## Swap

Para fazer uma troca entre duas posições no vetor é preciso de uma variável auxiliar, caso o contrario o dado vai ser perdido.

#### Jeito errado de fazer um swap
```cpp
vector<int> v = {1, 2};
// queremos que o 2 fique no index 0 do vetor e o 1 fique no index 1 do vetor
v[0] = v[1];
v[1] = v[0];
cout << v[0] << " " << v[1] << endl;
//aqui v[0] e v[1] estão com o número 2, pois o número 1 foi perdido na primeira troca
```

#### Jeito certo de fazer um swap
```cpp
vector<int> v = {1, 2};
int aux = v[0]; // salvamos em uma variavel auxiliar o valor de v[0]
v[0] = v[1]; // trocamos o v[0] pelo v[1]
v[1] = aux; // trocamos o v[1] pela aux que contém o valor que tinha em v[0]
cout << v[0] << " " << v[1] << endl;
```

#### Jeito ~~roubado~~ utilizando a função swap do c++
```cpp
vector<int> v = {1, 2};
swap(v[0], v[1]);
cout << v[0] << " " << v[1] << endl;
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

