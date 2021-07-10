# Strings - Material Extra

## Métodos úteis da classe string

Retorna o tamanho da string.

```cpp
string nome;
nome.size();
```

Respectivamente, adiciona e remove um caracter ao final da string.

```cpp
char c;
string nome;
nome.push_back(c);
nome.pop_back();
```

Concatena uma string ao final de outra.

```cpp
string a, b;
a.append(b);
// o mesmo de fazer a + b;
```

Remove todos os caracteres de uma string.
```cpp
string nome;
nome.clear();
```

Checa se uma string está vazia ou não. Retorna verdadeiro ou falso.
```cpp
string nome;
nome.empty();
```

## Como ler uma string

O método ```cin``` lê uma string sem considerar espaços. Para ler uma string com espaço precisamos usar o método ```getline()```.

```cpp
string nome;
cin >> nome; 
```

O método ```getline()``` é capaz de ler o dado de entrada até que uma nova linha seja detectada enquanto ```cin.ignore()``` limpa o caracter de nova linha \n do buffer de entrada ```cin```.

```cpp
int n;
cin >> n;
cin.ignore();
string nome;
getline(cin, nome);
```

As vezes, um exercício pode pedir que a gente leia várias strings, sem especificar a quantidade. Nesses casos, a gente precisa ler até o que chamamos de EOF *(End of File)*, ou seja, ler as strings até que não exista mais nenhuma string a ser lida pelo programa. Nesses casos, devemos ler as string dentro de um loop.

```cpp
string nome;
while(cin >> nome){
    // seu código
}
```

## Tabela ASCII

A tabela ASCII é muito importante quando trabalhamos com string, pois cada caracter tem sua correspondência  na tabela. Dessa forma, podemos comparar caracteres com outros caracteres, ou até mesmo com outros números.

```cpp
char caracter;

// ambos ifs possuem a mesma condição
if(caracter >= 'a' and caracter <= 'z'){
    // faça algo
}
if(caracter >= 97 and caracter <= 122){
    // faça algo
}
```

Podemos também deslocar um caracter para a esquerda ou para a direita, conforme a tabela ASCII.

```cpp
char caracter = 'a';
caracter += 3; // 'd'
caracter -= 2; // 'b'
```


