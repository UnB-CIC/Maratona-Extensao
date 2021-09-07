Jogo da Velha - 04/09/2021
====================================

## Videoaula

<details>
    <summary>Video aula</summary>

<iframe width="560" height="315" src="https://www.youtube.com/embed/q5SMQ7xb8sk" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture" allowfullscreen></iframe>

</details>

- Implementação do Jogo da Velha em C++

# Código

<details>
<summary>Implementação do Jogo da Velha em C++</summary>

<div markdown=1>

```cpp
#include <bits/stdc++.h>
using namespace std;

/*
#####################
# Variáveis globais #
#####################
*/

char tabuleiro[3][3] = {{'1','2','3'}, {'4','5','6'}, {'7','8','9'}};
char marca[2] = {'X', 'O'};
int jogadorAtual = 0;

/*
###########
# Funções #
###########
*/

void desenhaTabuleiro(){
    //função responsável por desenhar o tabuleiro na tela
    for (int i = 0; i < 3; i++){
        cout << "\t\t\t";
        for (int j = 0; j < 3; j++){
            cout << " " << tabuleiro[i][j] << " |";
        }
        cout << endl << "\t\t\t------------" << endl;
    }
}

int jogada(int posicao){
    // Fução que atualiza o tabuleiro dada uma jogada

    // Para atualizar o tabuleiro temos que ter as coordenadas de linha e coluna
    int linha = posicao / 3; // a linha será a posição dada dividida por 3 
    int coluna;
   
    /*
        temos que verificar se a posição é um multiplo de 3
        se for diminuimos a linha em 1, pois por exemplo:
        queremos jogar na posição 6
        6 / 3 = 2 , então nossa linha é 2 mas temos que verificar
        se 6 % 3 == 0, logo diminuimos uma unidade da linha, por que
        nossa matriz tabuleiro começa da posição 0.
        e a coluna sempre vai ser 2 pois na coluna 2 temos 3,6,9 todos
        múltiplos de 3
    */
    if (posicao % 3 == 0){
        linha -= 1;
        coluna = 2;
    } else {
        /*
            se nao for múltiplo de 3, pegamos o resto da divisão da posição
            por 3 e diminuimos 1 unidade
        */
        coluna = (posicao % 3) - 1;
    }

    //atualizamos o tabuleiro mas antes verificamos se ja tem algo la
    if (tabuleiro[linha][coluna] == 'X' || tabuleiro[linha][coluna] == 'O')
        return -1;
    tabuleiro[linha][coluna] = marca[jogadorAtual];
    return 0;

}

int checarGanhador(){
    int empate = 1;
    // loop para checar se alguem ganhou em linha ou em coluna
    for (int i = 0; i < 3; i++){
        if (tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][1] == tabuleiro[i][2])
            return jogadorAtual;
        if (tabuleiro[0][i] == tabuleiro[1][i] && tabuleiro[1][i] == tabuleiro[2][i]) 
            return jogadorAtual;
    }
    
    // checamos agora as diagonais
    if (tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2]) 
        return jogadorAtual;
    if (tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0]) 
        return jogadorAtual;

    //checamos se o jogo está empatado
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (tabuleiro[i][j] != 'O' && tabuleiro[i][j] != 'X'){
                empate = 0;
                break;
            }
        }
    }

    if (empate == 1)
        return 3;
    //se niguem ganhou ainda, retornamos -1
    return -1;
}

void jogoDaVelha(){
    cout << "\n\t\tBem vindo ao Jogo da Velha do GE INICIANTE\n\n";
    jogadorAtual = 0;
    int posicao, ganhador = -1;
    desenhaTabuleiro();
    while (ganhador == -1)
    {
        printf("\t\tEh a vez do jogador %d, me fale sua jogada: ", jogadorAtual+1);
        scanf("%d", &posicao);
        printf("\n");
        if ((posicao < 1 || posicao > 10) || jogada(posicao) == -1)
            printf ("\t\tJogada invalida!\n");
        else {
            ganhador = checarGanhador();
            jogadorAtual = (jogadorAtual + 1) % 2;
            desenhaTabuleiro();
        }
    }
   
    if (ganhador == 0) 
        printf ("\t\tO jogador 1 venceu!!!\n");
    else if (ganhador == 1)
        printf ("\t\tO jogador 2 venceu!!!\n");
    else if (ganhador == 3)
        printf ("\t\tO jogo terminou empatado!!!\n");
}

int main(){
   jogoDaVelha();
   return 0;
}
``` 

</div>
</details>
