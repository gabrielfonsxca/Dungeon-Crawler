#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <conio.h>


int arma = 0;
int vidas = 3;
int atingiumovimento = 0;

void vitoria(){
    system("cls");

    printf("----------------------------\n");
    printf("--------- PARABENS ---------\n");
    printf("----------------------------\n\n");

    printf("Voce conseguiu o elixir da vida e salvou sua mae!\n\n\n\n\n");

    system("pause");

    main();

}


void terceiroandar(){

    char mapa[25][25];
    char movimento;
    int i, j;
    int chave1 = 0;
    int chave2 = 0;
    int chave3 = 0;

    int porta1 = 0;
    int porta2 = 0;
    int porta3 = 0;

    int botao = 0;
    int botao2 = 0;
	int botao3 = 0; // botao para abrir porta3

    int caixa1 = 0;
    int caixa2 = 0;
    int caixa3 = 0;
    int caixa4 = 0;

    int caixa5 = 0;
    int caixa6 = 0;
    int caixa7 = 0;
    int caixa8 = 0;
    int caixa9 = 0;
    int caixa10 = 0;
    int caixa11 = 0;
    int caixa12 = 0;

    int caixa13 = 0;
    int caixa14 = 0;
    int caixa15 = 0;
    int caixa16 = 0;

    int caixa17 = 0;
    int caixa18 = 0;
    int caixa19 = 0;
    int caixa20 = 0;

    // Monstro Y
    int monstroYx = 19;
    int monstroYy = 12;
    int monstroYvivo = 1; // 1 = vivo, 0 = morto
    int monstroYativo = 0; // come√ßa a seguir ap√≥s passar pela porta1

    // Boss Z
    int bossZx = 0;
    int bossZy = 0;
    int bossZvivo = 1;   // 1 = vivo, 0 = morto
    int bossZescudo = 1; // 1 = escudo intacto, 0 = escudo quebrado
    int bossZderrotado = 0; // flag para liberar uso da chave3

    int atingiumomento1 = 0;
    int atingiumomento2 = 0;
    int atingiumomento3 = 0;
    int atingiumomento4 = 0;
    int atingiumomento5 = 0;
    int atingiumomento6 = 0;
    int atingiumomento7 = 0;
    int atingiumomento8 = 0;
    int atingiumomento9 = 0;
    int atingiumomento10 = 0;
    int atingiumomento11 = 0;
    int atingiumomento12 = 0;
    int atingiumomento13 = 0;
    int atingiumomento14 = 0;
    int atingiumomento15 = 0;
    int atingiumomento16 = 0;
    int atingiumomento17 = 0;
    int atingiumomento18 = 0;
    int atingiumomento19 = 0;
    int atingiumomento20 = 0;




    int x = 24; // linha do jogador
    int y = 24; // coluna do jogador

    char jogador = 'v';

    while(1){

        

        system("cls"); // limpa a tela


        // Preenche o mapa
        for (i = 0; i < 25; i++) {
            for (j = 0; j < 25; j++) {
                mapa[i][j] = '-';
            }
        }

        
        if(1){
        // Objetos do mapa
        mapa[24][23] = '#';
        mapa[22][24] = '#';
        mapa[22][23] = '#';
        mapa[22][22] = '#';
        mapa[23][21] = '#';
        mapa[24][19] = '#';
        mapa[22][20] = '#';
        mapa[24][18] = '#';
        mapa[23][18] = '#';
        mapa[22][18] = '#';
        mapa[20][20] = '#';
        mapa[19][20] = '#';
        mapa[18][20] = '#';
        mapa[21][18] = '#';
        mapa[20][18] = '#';
        mapa[19][18] = '#';
        mapa[18][18] = '#';
        mapa[20][12] = '#';
        mapa[20][13] = '#';
        mapa[20][14] = '#';
        mapa[20][15] = '#';
        mapa[20][16] = '#';
         mapa[0][24] = 'L';
if(botao == 0){
    mapa[13][10] = 'D';
}
else{
    mapa[13][10] = '=';
}

         mapa[0][24] = 'L';
        mapa[18][21] = '*';
        mapa[18][22] = '*';
        mapa[18][23] = '*';
        mapa[18][24] = '*';
        mapa[13][24] = '*';
        mapa[13][23] = '*';
        mapa[13][22] = '*';
        mapa[13][21] = '*';
        mapa[13][20] = '*';
        mapa[13][19] = '*';
        mapa[13][18] = '*';
        mapa[13][17] = '*';
        mapa[13][16] = '*';
        mapa[13][15] = '*';
        mapa[13][14] = '*';
        mapa[13][13] = '*';
        mapa[13][12] = '*';
        mapa[13][11] = '*';
        
        mapa[13][9] = '*';
        mapa[13][8] = '*';
        mapa[13][7] = '*';
        mapa[13][6] = '*';
        mapa[13][6] = '*';
        mapa[13][5] = '*';
        mapa[13][4] = '*';
        mapa[13][3] = '*';
        mapa[13][2] = '*';
        mapa[13][1] = '*';
        mapa[13][0] = '*';
        mapa[14][11] = '*';
        mapa[15][11] = '*';
        mapa[16][11] = '*';
        mapa[17][11] = '*';
        mapa[18][11] = '*';
        mapa[19][11] = '*';
        mapa[20][11] = '*';
        mapa[0][23] = '*';
        mapa[1][23] = '*';
        mapa[2][23] = '*';
        mapa[3][23] = '*';
        if(caixa1 != 1){
            mapa[24][11] = 'k';
        }
        if(caixa2 != 1){
            mapa[23][11] = 'k';
        }
        if(caixa3 != 1){
            mapa[22][11] = 'k';
        }
        if(caixa4 != 1){
            mapa[21][11] = 'k';
        }

        
        if(chave3 == 0){
            mapa[24][0] = '@';
            
        }

        if(chave2 == 0){
            mapa[14][12] = '@';
        }
        

        if(chave1 == 0){
            mapa[19][24] = '@';
        }
        


        

        if(porta1 == 0){
            mapa[18][19] = 'D';
        }
        else{
            mapa[18][19] = '=';
        }
        
        if(porta2 == 0)
        {
            mapa[20][17] = 'D';
        }
        else{
            mapa[20][17] = '=';
        }

        if(porta3 == 0)
        {
            mapa[3][24] = 'D';
        }
        else
        {
            mapa[3][24] = '=';
        }

        // Botao3 - abre porta3 (acessivel pela direita: jogador em [16][14] olhando <)
        mapa[16][13] = 'O';

        // Monstro Y
        if(monstroYvivo == 1){
            mapa[monstroYx][monstroYy] = 'Y';
        }

        // Boss Z (area do topo: linhas 0-12, colunas 0-9)
        if(bossZvivo == 1){
            mapa[bossZx][bossZy] = 'Z';
        }

        }


        // Jogador
        mapa[x][y] = jogador;

        // Mostra o mapa
        for (i = 0; i < 25; i++) { 
            for (j = 0; j < 25; j++) {
                printf("%c ", mapa[i][j]);
            }
            printf("\n");
        }


        printf("\nW A S D para mover: ");
        if(x == 20 && y == 24 && jogador == '^') {
            printf("\nAperte i para interagir\n");
        }
        if(x == 19 && y == 23 && jogador == '>') {
            printf("\nAperte i para interagir\n");
        }
        if(x == 19 && y == 19 && jogador == '^') {
            printf("\nAperte i para interagir\n");
        }
        if(x == 14 && y == 13 && jogador == '<') {
            printf("\nAperte i para interagir\n");
        }
        if(x == 15 && y == 12 && jogador == '^') {
            printf("\nAperte i para interagir\n");
        }
        if(x == 19 && y == 17 && jogador == 'v'){
            printf("\nAperte i para interagir\n");
        }
        if(x == 4 && y == 24 && jogador == '^'){
            printf("\nAperte i para interagir\n");
        }
        // Botao3: jogador em [16][14] olhando para a esquerda
        if(x == 16 && y == 14 && jogador == '<'){
            printf("\nAperte i para interagir com o botao\n");
        }
        // Chave3: jogador em [24][1] olhando para a esquerda (chave em [24][0])
        if(chave3 == 0 && x == 24 && y == 1 && jogador == '<'){
            printf("\nAperte i para pegar a chave\n");
        }

        if(vidas == 0) {
            printf("\n\n------ GAME OVER ------\n\nVoce perdeu todas as suas vidas! Retornando ao menu principal...\n");
            system("pause");
            main();
            return;
        }

        movimento = getch();


        if(movimento == 'o' || movimento == 'O'){

            // Limpa o mapa para desenhar a area de ataque
            for(i = 0; i < 25; i++) {
                for(j = 0; j < 25; j++) {
                    mapa[i][j] = '-';
                }
            }

            if(1){
            // Objetos do mapa
            mapa[24][23] = '#';
            mapa[22][24] = '#';
            mapa[22][23] = '#';
            mapa[22][22] = '#';
            mapa[23][21] = '#';
            mapa[24][19] = '#';
            mapa[22][20] = '#';
            mapa[24][18] = '#';
            mapa[23][18] = '#';
            mapa[22][18] = '#';
            mapa[20][20] = '#';
            mapa[19][20] = '#';
            mapa[18][20] = '#';
            mapa[21][18] = '#';
            mapa[20][18] = '#';
            mapa[19][18] = '#';
            mapa[18][18] = '#';
            mapa[20][12] = '#';
            mapa[20][13] = '#';
            mapa[20][14] = '#';
            mapa[20][15] = '#';
            mapa[20][16] = '#';
            mapa[0][24] = 'L';
            mapa[18][21] = '*';
            mapa[18][22] = '*';
            mapa[18][23] = '*';
            mapa[18][24] = '*';
            mapa[13][24] = '*';
            mapa[13][23] = '*';
            mapa[13][22] = '*';
            mapa[13][21] = '*';
            mapa[13][20] = '*';
            mapa[13][19] = '*';
            mapa[13][18] = '*';
            mapa[13][17] = '*';
            mapa[13][16] = '*';
            mapa[13][15] = '*';
            mapa[13][14] = '*';
            mapa[13][13] = '*';
        mapa[13][12] = '*';
        mapa[13][11] = '*';
        if(botao == 0){
    mapa[13][10] = 'D';
}
else{
    mapa[13][10] = '=';
}
            
            mapa[13][9] = '*';
            mapa[13][8] = '*';
            mapa[13][7] = '*';
            mapa[13][6] = '*';
        
        mapa[13][6] = '*';
        mapa[13][5] = '*';
        mapa[13][4] = '*';
        mapa[13][3] = '*';
        mapa[13][2] = '*';
        mapa[13][1] = '*';
        mapa[13][0] = '*';
        mapa[14][11] = '*';
        mapa[15][11] = '*';
        mapa[16][11] = '*';
        mapa[17][11] = '*';
        mapa[18][11] = '*';
        mapa[19][11] = '*';
        mapa[20][11] = '*';
        mapa[0][23] = '*';
        mapa[1][23] = '*';
        mapa[2][23] = '*';
        mapa[3][23] = '*';

        if(caixa1 != 1){
            mapa[24][11] = 'k';
        }
        if(caixa2 != 1){
            mapa[23][11] = 'k';
        }
        if(caixa3 != 1){
            mapa[22][11] = 'k';
        }
        if(caixa4 != 1){
            mapa[21][11] = 'k';
        }

        if(chave3 == 0){
            mapa[24][0] = '@';
        }

        if(chave2 == 0){
            mapa[14][12] = '@';
        }
        

        if(chave1 == 0){
            mapa[19][24] = '@';
        }
        

        
        
        

        if(porta1 == 0){
            mapa[18][19] = 'D';
        }
        else{
            mapa[18][19] = '=';
        }
        
        if(porta2 == 0)
        {
            mapa[20][17] = 'D';
        }
        else{
            mapa[20][17] = '=';
        }

        if(porta3 == 0)
        {
            mapa[3][24] = 'D';
        }
        else
        {
            mapa[3][24] = '=';
        }

        // Botao3
        mapa[16][13] = 'O';

        // Monstro Y no bloco de ataque
        if(monstroYvivo == 1){
            mapa[monstroYx][monstroYy] = 'Y';
        }

        // Boss Z no bloco de ataque
        if(bossZvivo == 1){
            mapa[bossZx][bossZy] = 'Z';
        }

        }

            if(arma == 1){

                if(jogador == '^') {
                    if(x-1 >= 0 && y-1 >= 0) mapa[x-1][y-1] = 'z';
                    if(x-1 >= 0)              mapa[x-1][y]   = 'z';
                    if(x-1 >= 0 && y+1 <= 24) mapa[x-1][y+1] = 'z';
                    if(x-2 >= 0 && y-1 >= 0) mapa[x-2][y-1] = 'z';
                    if(x-2 >= 0)              mapa[x-2][y]   = 'z';
                    if(x-2 >= 0 && y+1 <= 24) mapa[x-2][y+1] = 'z';
                }
                else if(jogador == 'v') {
                    if(x+1 <= 24 && y-1 >= 0) mapa[x+1][y-1] = 'z';
                    if(x+1 <= 24)              mapa[x+1][y]   = 'z';
                    if(x+1 <= 24 && y+1 <= 24) mapa[x+1][y+1] = 'z';
                    if(x+2 <= 24 && y-1 >= 0) mapa[x+2][y-1] = 'z';
                    if(x+2 <= 24)              mapa[x+2][y]   = 'z';
                    if(x+2 <= 24 && y+1 <= 24) mapa[x+2][y+1] = 'z';
                }
                else if(jogador == '<') {
                    if(x-1 >= 0 && y-1 >= 0) mapa[x-1][y-1] = 'z';
                    if(y-1 >= 0)              mapa[x][y-1]   = 'z';
                    if(x+1 <= 24 && y-1 >= 0) mapa[x+1][y-1] = 'z';
                    if(x-1 >= 0 && y-2 >= 0) mapa[x-1][y-2] = 'z';
                    if(y-2 >= 0)              mapa[x][y-2]   = 'z';
                    if(x+1 <= 24 && y-2 >= 0) mapa[x+1][y-2] = 'z';
                }
                else if(jogador == '>') {
                    if(x-1 >= 0 && y+1 <= 24) mapa[x-1][y+1] = 'z';
                    if(y+1 <= 24)              mapa[x][y+1]   = 'z';
                    if(x+1 <= 24 && y+1 <= 24) mapa[x+1][y+1] = 'z';
                    if(x-1 >= 0 && y+2 <= 24) mapa[x-1][y+2] = 'z';
                    if(y+2 <= 24)              mapa[x][y+2]   = 'z';
                    if(x+1 <= 24 && y+2 <= 24) mapa[x+1][y+2] = 'z';
                }
 
                // Verifica se alguma caixa foi atingida
                if(mapa[24][11] == 'z') { caixa1 = 1; atingiumomento1 = 1; }
                if(mapa[23][11] == 'z') { caixa2 = 1; atingiumomento2 = 1; }
                if(mapa[22][11] == 'z') { caixa3 = 1; atingiumomento3 = 1; }
                if(mapa[21][11] == 'z') { caixa4 = 1; atingiumomento4 = 1; }

                // Verifica monstro Y
                if(monstroYvivo == 1 && mapa[monstroYx][monstroYy] == 'z'){
                    monstroYvivo = 0;
                    printf("Voce matou o monstro Y!\n");
                    system("pause");
                }
                // Verifica boss Z
                if(bossZvivo == 1 && mapa[bossZx][bossZy] == 'z'){
                    if(bossZescudo == 1){
                        bossZescudo = 0;
                        printf("Voce quebrou o escudo do boss Z! Agora ele esta vulneravel!\n");
                        system("pause");
                    } else {
                        bossZvivo = 0;
                        bossZderrotado = 1;
                        printf("Voce derrotou o boss Z! Pegue a chave para abrir a ultima porta!\n");
                        system("pause");
                    }
                }
 
                mapa[x][y] = jogador;
 
                system("cls");
                for(i = 0; i < 25; i++) {
                    for(j = 0; j < 25; j++) {
                        printf("%c ", mapa[i][j]);
                    }
                    printf("\n");
                }
                system("pause");

            }

            if(arma == 2) {
 
                if(jogador == '^') {
                    if(x-1 >= 0) mapa[x-1][y] = 'z';
                    if(x-2 >= 0) mapa[x-2][y] = 'z';
                    if(x-3 >= 0) mapa[x-3][y] = 'z';
                    if(x-4 >= 0) mapa[x-4][y] = 'z';
                }
                else if(jogador == 'v') {
                    if(x+1 <= 24) mapa[x+1][y] = 'z';
                    if(x+2 <= 24) mapa[x+2][y] = 'z';
                    if(x+3 <= 24) mapa[x+3][y] = 'z';
                    if(x+4 <= 24) mapa[x+4][y] = 'z';
                }
                else if(jogador == '<') {
                    if(y-1 >= 0) mapa[x][y-1] = 'z';
                    if(y-2 >= 0) mapa[x][y-2] = 'z';
                    if(y-3 >= 0) mapa[x][y-3] = 'z';
                    if(y-4 >= 0) mapa[x][y-4] = 'z';
                }
                else if(jogador == '>') {
                    if(y+1 <= 24) mapa[x][y+1] = 'z';
                    if(y+2 <= 24) mapa[x][y+2] = 'z';
                    if(y+3 <= 24) mapa[x][y+3] = 'z';
                    if(y+4 <= 24) mapa[x][y+4] = 'z';
                }
 
                // Verifica se alguma caixa foi atingida
                if(mapa[24][11] == 'z') { caixa1 = 1; atingiumomento1 = 1; }
                if(mapa[23][11] == 'z') { caixa2 = 1; atingiumomento2 = 1; }
                if(mapa[22][11] == 'z') { caixa3 = 1; atingiumomento3 = 1; }
                if(mapa[21][11] == 'z') { caixa4 = 1; atingiumomento4 = 1; }

                // Verifica monstro Y
                if(monstroYvivo == 1 && mapa[monstroYx][monstroYy] == 'z'){
                    monstroYvivo = 0;
                    printf("Voce matou o monstro Y!\n");
                    system("pause");
                }
                // Verifica boss Z
                if(bossZvivo == 1 && mapa[bossZx][bossZy] == 'z'){
                    if(bossZescudo == 1){
                        bossZescudo = 0;
                        printf("Voce quebrou o escudo do boss Z! Agora ele esta vulneravel!\n");
                        system("pause");
                    } else {
                        bossZvivo = 0;
                        bossZderrotado = 1;
                        printf("Voce derrotou o boss Z! Pegue a chave para abrir a ultima porta!\n");
                        system("pause");
                    }
                }
 
                mapa[x][y] = jogador;
 
                system("cls");
                for(i = 0; i < 25; i++) {
                    for(j = 0; j < 25; j++) {
                        printf("%c ", mapa[i][j]);
                    }
                    printf("\n");
                }
                system("pause");
            }

            if(arma == 3) {
                if(x-1 >= 0 && y-1 >= 0) 
				mapa[x-1][y-1] = 'z';
                if(x-1 >= 0)              
				mapa[x-1][y]  = 'z';
                if(x-1 >= 0 && y+1 <= 24) 
				mapa[x-1][y+1] = 'z';
                if(y-1 >= 0)              
				mapa[x][y-1]   = 'z';
                if(y+1 <= 24)             
				 mapa[x][y+1]   = 'z';
                if(x+1 <= 24 && y-1 >= 0) 
				mapa[x+1][y-1] = 'z';
                if(x+1 <= 24)              
				mapa[x+1][y]   = 'z';
                if(x+1 <= 24 && y+1 <= 24) 
				mapa[x+1][y+1] = 'z';
 
                // Verifica se alguma caixa foi atingida
                if(mapa[24][11] == 'z') { caixa1 = 1; atingiumomento1 = 1; }
                if(mapa[23][11] == 'z') { caixa2 = 1; atingiumomento2 = 1; }
                if(mapa[22][11] == 'z') { caixa3 = 1; atingiumomento3 = 1; }
                if(mapa[21][11] == 'z') { caixa4 = 1; atingiumomento4 = 1; }

                // Verifica monstro Y
                if(monstroYvivo == 1 && mapa[monstroYx][monstroYy] == 'z'){
                    monstroYvivo = 0;
                    printf("Voce matou o monstro Y!\n");
                    system("pause");
                }
                // Verifica boss Z
                if(bossZvivo == 1 && mapa[bossZx][bossZy] == 'z'){
                    if(bossZescudo == 1){
                        bossZescudo = 0;
                        printf("Voce quebrou o escudo do boss Z! Agora ele esta vulneravel!\n");
                        system("pause");
                    } else {
                        bossZvivo = 0;
                        bossZderrotado = 1;
                        printf("Voce derrotou o boss Z! Pegue a chave para abrir a ultima porta!\n");
                        system("pause");
                    }
                }
 
                mapa[x][y] = jogador;
 
                system("cls");
                for(i = 0; i < 25; i++) {
                    for(j = 0; j < 25; j++) {
                        printf("%c ", mapa[i][j]);
                    }
                    printf("\n");
                }
                system("pause");
            }







        }
if(movimento == 'w' || movimento == 'W'){
    x--;
    jogador = '^';
}

if(movimento == 's' || movimento == 'S'){
    x++;
    jogador = 'v';
}

if(movimento == 'a' || movimento == 'A'){
    y--;
    jogador = '<';
}

if(movimento == 'd' || movimento == 'D'){
    y++;
    jogador = '>';
}
if(x < 0){
    x = 0;
}
if(x > 24){
    x = 24;
}
if(y < 0){
    y = 0;
}
if(y > 24){
    y = 24;
}

// N√O PASSAR POR PAREDE, PORTA FECHADA OU CAIXA
if(mapa[x][y] == '*' || mapa[x][y] == 'D' || mapa[x][y] == 'k'){

    if(jogador == '^'){
        x++;
    }
    else if(jogador == 'v'){
        x--;
    }
    else if(jogador == '<'){
        y++;
    }
    else if(jogador == '>'){
        y--;
    }
}






        

        

        

        
        
		if(x == 13 && y == 10) {
    if(botao == 0) {
        printf("\nEssa porta abre com o botao!\n");
        system("pause");

        if(jogador == '^') x++;
        if(jogador == 'v') x--;
        if(jogador == '<') y++;
        if(jogador == '>') y--;
    }
}
		
		
		
		if(botao == 0 && x == 13 && y == 10) {
    printf("\nEssa porta abre com o botao!\n");
    system("pause");

    if(jogador == '^') x++;
    if(jogador == 'v') x--;
    if(jogador == '<') y++;
    if(jogador == '>') y--;
}
		if(caixa1 != 1 && x == 24 && y == 11) {
    if(jogador == '^') x++;
    if(jogador == 'v') x--;
    if(jogador == '<') y++;
    if(jogador == '>') y--;
}

if(caixa2 != 1 && x == 23 && y == 11) {
    if(jogador == '^') x++;
    if(jogador == 'v') x--;
    if(jogador == '<') y++;
    if(jogador == '>') y--;
}

if(caixa3 != 1 && x == 22 && y == 11) {
    if(jogador == '^') x++;
    if(jogador == 'v') x--;
    if(jogador == '<') y++;
    if(jogador == '>') y--;
}

if(caixa4 != 1 && x == 21 && y == 11) {
    if(jogador == '^') x++;
    if(jogador == 'v') x--;
    if(jogador == '<') y++;
    if(jogador == '>') y--;
}
		
	if(porta3 == 0 && x == 3 && y == 24) {
    printf("\nEssa porta abre com o botao!\n");
    system("pause");

    if(jogador == '^') x++;
    if(jogador == 'v') x--;
    if(jogador == '<') y++;
    if(jogador == '>') y--;
}	
		
		
		
		if(movimento == 'i' || movimento == 'I') {
    if(x == 17 && y == 1 && jogador == '<') {
        botao = 1;
        printf("\nVoce apertou o botao e abriu a passagem!\n");
        system("pause");
    }
}

// PEGAR CHAVE 1
if(movimento == 'i' || movimento == 'I') {
    if(chave1 == 0 && x == 20 && y == 24 && jogador == '^') {
        chave1 = 1;
        printf("\nVoce pegou a chave 1!\n");
        system("pause");
    }
}

// PEGAR CHAVE 2
if(movimento == 'i' || movimento == 'I') {
    if(chave2 == 0 && x == 14 && y == 13 && jogador == '<') {
        chave2 = 1;
        printf("\nVoce pegou a chave 2!\n");
        system("pause");
    }
}

// PEGAR CHAVE 3
if(movimento == 'i' || movimento == 'I') {
    if(chave3 == 0 && x == 24 && y == 1 && jogador == '<') {
        chave3 = 1;
        printf("\nVoce pegou a chave 3!\n");
        system("pause");
    }
}

// ABRIR PORTA 1
if(movimento == 'i' || movimento == 'I') {
    if(x == 19 && y == 19 && jogador == '^') {
        if(chave1 == 1) {
            porta1 = 1;
            printf("\nVoce abriu a porta 1!\n");
        } else {
            printf("\nVoce precisa da chave 1!\n");
        }
        system("pause");
    }
}

// ABRIR PORTA 2
if(movimento == 'i' || movimento == 'I') {
    if(x == 19 && y == 17 && jogador == 'v') {
        if(chave2 == 1) {
            porta2 = 1;
            printf("\nVoce abriu a porta 2!\n");
        } else {
            printf("\nVoce precisa da chave 2!\n");
        }
        system("pause");
    }
}

// ABRIR PORTA 3
if(movimento == 'i' || movimento == 'I') {
    if(x == 4 && y == 24 && jogador == '^') {
        if(chave3 == 1) {
            porta3 = 1;
            printf("\nVoce abriu a porta 3!\n");
        } else {
            printf("\nVoce precisa da chave 3!\n");
        }
        system("pause");
    }
}
        
		
		
		
		if(1){ //espinhos
        if((x == 22 && y == 24) || (x == 24 && y == 23) || (x == 22 && y == 23) || (x == 22 && y == 22)){

                printf("Voce pisou no espinho e perdeu uma vida! reiniciando a fase...\n");
                vidas--;
                system("pause");
                terceiroandar();
            
        }
        if((x == 23 && y == 21) || (x == 24 && y == 19) || (x == 24 && y == 18) || (x == 23 && y == 18)){

                printf("Voce pisou no espinho e perdeu uma vida! reiniciando a fase...\n");
                vidas--;
                system("pause");
                terceiroandar();
            
        }
        if((x == 22 && y == 18) || (x == 21 && y == 18) || (x == 20 && y == 18) || (x == 19 && y == 18)){

                printf("Voce pisou no espinho e perdeu uma vida! reiniciando a fase...\n");
                vidas--;
                system("pause");
                terceiroandar();
            
        }
        if((x == 18 && y == 20) || (x == 19 && y == 20) || (x == 20 && y == 20) || (x == 18 && y == 18)){ 

                printf("Voce pisou no espinho e perdeu uma vida! reiniciando a fase...\n");
                vidas--;
                system("pause");
                terceiroandar();
            
        }
        if((x == 22 && y == 20) || (x == 20 && y == 12) || (x == 20 && y == 13) || (x == 20 && y == 14)){

                printf("Voce pisou no espinho e perdeu uma vida! reiniciando a fase...\n");
                vidas--;
                system("pause");
                terceiroandar();
            
        }
        if(x == 20 && y == 15 || x == 20 && y == 16){

                printf("Voce pisou no espinho e perdeu uma vida! reiniciando a fase...\n");
                vidas--;
                system("pause");
                terceiroandar();
            
        }
        }
        
        if(movimento == 'i' || movimento == 'I'){
            if(x == 20 && y == 24 && jogador == '^'){
                printf("Voce recebeu uma chave!\n");
                system("pause");
                chave1++;
            }
            if(x == 19 && y == 23 && jogador == '>'){
                printf("Voce recebeu uma chave!\n");
                system("pause");
                chave1++;
            }
            if(x == 14 && y == 13 && jogador == '<'){
                printf("Voce recebeu uma chave!\n");
                system("pause");
                chave2++;
            }
            if(x == 15 && y == 21 && jogador == '^'){
                printf("Voce recebeu uma chave!\n");
                system("pause");
                chave2++;
            }

            if(x == 19 && y == 19 && jogador == '^'){

                if(chave1 == 0){
                    printf("\nA porta esta trancada, voce precisa de uma chave para abrir\n");
                    system("pause");
                }
                else{
                    printf("\nVoce abriu a porta!\n");
                    system("pause");
                    porta1 = 1;
                }
            }
            
            if(x == 19 && y == 17 && jogador == 'v'){

                if(chave2 == 0){
                    printf("\nA porta esta trancada, voce precisa de uma chave para abrir\n");
                    system("pause");
                }
                else{
                    printf("\nVoce abriu a porta!\n");
                    system("pause");
                    porta2 = 1;
                }
            }

            // Botao3: abre porta3 (jogador em [16][14] olhando <)
            if(x == 16 && y == 14 && jogador == '<'){
    botao = 1;

    printf("\nVoce apertou o botao e abriu a passagem!\n");
    system("pause");
}

            // Chave3: so pode pegar apos derrotar o boss Z
            if(x == 24 && y == 1 && jogador == '<'){
                if(chave3 == 1){
                    printf("\nVoce ja tem a chave3.\n");
                    system("pause");
                } else if(bossZderrotado == 0){
                    printf("\nVoce precisa derrotar o boss Z primeiro!\n");
                    system("pause");
                } else {
                    chave3 = 1;
                    printf("\nVoce pegou a chave3! Agora pode abrir a ultima porta.\n");
                    system("pause");
                }
            }

            // Ultima porta (porta final, ex: posicao 4,24) com chave3
            if(x == 4 && y == 24 && jogador == '^'){
                if(chave3 == 0){
                    printf("\nA porta esta trancada. Voce precisa derrotar o boss e pegar a chave.\n");
                    system("pause");
                } else {
                    printf("\nVoce abriu a ultima porta! Parabens, voce venceu o terceiro andar!\n");
                    system("pause");
                }
            }




        }

        // Monstro Y: ativa apos porta1 ser aberta
        if(porta1 == 1 && monstroYvivo == 1){
            monstroYativo = 1;
        }

        // Movimento do monstro Y (segue o jogador)
        if(monstroYativo == 1 && monstroYvivo == 1){
            if(monstroYx < x) monstroYx++;
            else if(monstroYx > x) monstroYx--;
            else if(monstroYy < y) monstroYy++;
            else if(monstroYy > y) monstroYy--;

            // Contato com o jogador
            if(monstroYx == x && monstroYy == y){
                vidas--;
                printf("O monstro Y te atacou! Voce perdeu 1 vida. Reiniciando a fase...\n");
                system("pause");
                terceiroandar();
                return;
            }
        }

        // Movimento do boss Z (aleatorio na area 0-12 linhas, 0-9 colunas)
        if(bossZvivo == 1){
            int dirBoss = rand() % 4;
            if(dirBoss == 0 && bossZx > 0) bossZx--;
            else if(dirBoss == 1 && bossZx < 12) bossZx++;
            else if(dirBoss == 2 && bossZy > 0) bossZy--;
            else if(dirBoss == 3 && bossZy < 9) bossZy++;

            // Contato com o jogador
            if(bossZx == x && bossZy == y){
                vidas--;
                printf("O boss Z te atacou! Voce perdeu 1 vida. Reiniciando a fase...\n");
                system("pause");
                terceiroandar();
                return;
            }
        }
        
        if(x == 0 && y == 24){
            printf("...\n");
            vitoria();
        }

    }

    

}


void segundoandar() {
    int linhas = 15;
    int colunas = 15;
    char mapa[15][15];
    char movimento;
    int i, j;
  int vidamonstro = 0;
    int x = 14; // linha do jogador
    int y = 14; // coluna do jogador
    char jogador = 'v';
    int monstroX = 12;
    int monstroY = 2;
     int direcaoMonstro;
     //variavel para abrir a porta 1
	 int chave1 = 0;
	 // variavel para chave doooooois
	 int chave2 = 0;
	 int vidamonstro2 = 0;
   int monstrox2 = 1;
   int monstroy2 = 1;
	int direcaoMonstro2;
	while(1) {
        system("cls");

        for(i = 0; i < linhas; i++) {
            for(j = 0; j < colunas; j++) {
                mapa[i][j] = '-';
            }
        }

        
     mapa[9][0] = '#';
     mapa[9][1] = '#' ; 
	mapa[9][2] = '#';
	 mapa[9][3] = '#';
	 mapa[9][4] = '#';
	 mapa[9][5] = '#';
	 mapa[9][6] = '#';
	
	
	//porta 1 vai ficar dentro de um if para quando esse if mudar, o mapa nn printar mais D quando ela abrir
	 
	if( chave1 == 0){
	 mapa[9][7] = 'D';
	}
	 else if( chave1 == 1){
		 mapa[9][7] = '=';
	 }
	 
	 mapa[9][8] = '#';
	 mapa[9][9] = '#';
	 mapa[9][10] = '#';
	 mapa[9][11] = '#';
	 mapa[9][12] = '#';
	 mapa[9][13] = '#';
	 mapa[9][14] = '#';	
		mapa[4][0] = '#';
     mapa[4][1] = '#' ; 
    mapa[4][2] = '#';
     mapa[4][3] = '#';
     mapa[4][4] = '#';
     mapa[4][5] = '#';
     mapa[4][6] = '#';
     mapa[4][7] = '#';
     mapa[4][8] = '#';
     mapa[4][9] = '#';
     mapa[4][10] = '#';
     mapa[4][11] = '#';
     mapa[4][12] = '#';
     mapa[4][13] = '#';
     mapa[4][14] = '#';
        mapa[12][0] = 'O';
		
	 mapa[5][1] = '#' ;	
     mapa[5][3] = '#' ;
     mapa[5][5] = '#' ;
	  mapa[5][7] = '#' ;
      mapa[5][9] = '#' ;
      mapa[5][11] = '#' ; 
      mapa[5][13] = '#' ;
      
	  mapa[7][1] = '#' ;
   	  mapa[7][3] = '#' ;
 	  mapa[7][5] = '#' ;
      mapa[7][7] = '#' ;
      mapa[7][9] = '#' ;
      mapa[7][11] = '#' ;
      mapa[7][13] = '#' ;	
	  mapa[3][0] = 'L' ;
	  if(chave2 == 0){
	  mapa[4][14] = 'D';
	  }
		else{
			mapa[4][14] = '=';
		} 
		 
		 
		 if( chave2 == 0){
		mapa[5][0] = '@';
		 }
		else {
		mapa[5][0] = '-';	
		}
		
		
		if(x == 12 && y == 1 ) {
             printf("\naperte I para apertar o botÔøΩo e ganhar uma chave\n");
        }
		if(x == 3 && y == 0){
			terceiroandar();
			
		}
		if(x == 3 && y == 0){
			terceiroandar();
			
		}
		
		
		
		
		
		
		
		
		mapa[x][y] = jogador;
		if( vidamonstro != 1){
		mapa[monstroX][monstroY] = 'X';
		}
		if( vidamonstro2 != 1){
			mapa[monstrox2][monstroy2] = 'X';
		}
		
		for(i = 0; i < linhas; i++) {
            for(j = 0; j < colunas; j++) {
                printf("%c ", mapa[i][j]);
            }
            printf("\n");
        }

        printf("\nW A S D para mover\n");
        movimento = getch();
 
  //interagir com o primeiro botÔøΩo
    if(movimento == 'i' || movimento == 'I') {
//interagir com o primeiro botÔøΩo
    if(x == 12 && y == 1 && chave1 == 0) {

        chave1 = 1;
        printf("Voce apertou o botao e recebeu uma chave!\n");
        system("pause");
    }
   

}
 
 if(x == 5 && y == 0 && chave2 == 0) {

        chave2 = 1;
        printf("Voce pegou a chave!\n");
        system("pause");
    }
 
 
 
  //ataqueeee
    if(movimento == 'o' || movimento == 'O'){
             //ataque espadaaaa
		if(arma == 1) {

    if(jogador == '^') {

        if(x-1 >= 0 && y-1 >= 0)
            mapa[x-1][y-1] = 'z';

        if(x-1 >= 0)
            mapa[x-1][y] = 'z';

        if(x-1 >= 0 && y+1 <= 14)
            mapa[x-1][y+1] = 'z';

        if(x-2 >= 0 && y-1 >= 0)
            mapa[x-2][y-1] = 'z';

        if(x-2 >= 0)
            mapa[x-2][y] = 'z';

        if(x-2 >= 0 && y+1 <= 14)
            mapa[x-2][y+1] = 'z';
    }

    else if(jogador == 'v') {

        if(x+1 <= 14 && y-1 >= 0)
            mapa[x+1][y-1] = 'z';

        if(x+1 <= 14)
            mapa[x+1][y] = 'z';

        if(x+1 <= 14 && y+1 <= 14)
            mapa[x+1][y+1] = 'z';

        if(x+2 <= 14 && y-1 >= 0)
            mapa[x+2][y-1] = 'z';

        if(x+2 <= 14)
            mapa[x+2][y] = 'z';

        if(x+2 <= 14 && y+1 <= 14)
            mapa[x+2][y+1] = 'z';
    }

    else if(jogador == '<') {

        if(x-1 >= 0 && y-1 >= 0)
            mapa[x-1][y-1] = 'z';

        if(y-1 >= 0)
            mapa[x][y-1] = 'z';

        if(x+1 <= 14 && y-1 >= 0)
            mapa[x+1][y-1] = 'z';

        if(x-1 >= 0 && y-2 >= 0)
            mapa[x-1][y-2] = 'z';

        if(y-2 >= 0)
            mapa[x][y-2] = 'z';

        if(x+1 <= 14 && y-2 >= 0)
            mapa[x+1][y-2] = 'z';
    }

    else if(jogador == '>') {

        if(x-1 >= 0 && y+1 <= 14)
            mapa[x-1][y+1] = 'z';

        if(y+1 <= 14)
            mapa[x][y+1] = 'z';

        if(x+1 <= 14 && y+1 <= 14)
            mapa[x+1][y+1] = 'z';

        if(x-1 >= 0 && y+2 <= 14)
            mapa[x-1][y+2] = 'z';

        if(y+2 <= 14)
            mapa[x][y+2] = 'z';

        if(x+1 <= 14 && y+2 <= 14)
            mapa[x+1][y+2] = 'z';
    }

    if(mapa[monstroX][monstroY] == 'z') {
        vidamonstro = 1;
    }

    if(mapa[monstrox2][monstroy2] == 'z') {
        vidamonstro2 = 1;
    }

    mapa[x][y] = jogador;

    system("cls");

    for(i = 0; i < 15; i++) {
        for(j = 0; j < 15; j++) {
            printf("%c ", mapa[i][j]);
        }
        printf("\n");
    }

    system("pause");
}
	 if(arma == 2) {

    if(jogador == '^') {

        if(x-1 >= 0)
            mapa[x-1][y] = 'z';

        if(x-2 >= 0)
            mapa[x-2][y] = 'z';

        if(x-3 >= 0)
            mapa[x-3][y] = 'z';

        if(x-4 >= 0)
            mapa[x-4][y] = 'z';
    }

    else if(jogador == 'v') {

        if(x+1 <= 14)
            mapa[x+1][y] = 'z';

        if(x+2 <= 14)
            mapa[x+2][y] = 'z';

        if(x+3 <= 14)
            mapa[x+3][y] = 'z';

        if(x+4 <= 14)
            mapa[x+4][y] = 'z';
    }

    else if(jogador == '<') {

        if(y-1 >= 0)
            mapa[x][y-1] = 'z';

        if(y-2 >= 0)
            mapa[x][y-2] = 'z';

        if(y-3 >= 0)
            mapa[x][y-3] = 'z';

        if(y-4 >= 0)
            mapa[x][y-4] = 'z';
    }

    else if(jogador == '>') {

        if(y+1 <= 14)
            mapa[x][y+1] = 'z';

        if(y+2 <= 14)
            mapa[x][y+2] = 'z';

        if(y+3 <= 14)
            mapa[x][y+3] = 'z';

        if(y+4 <= 14)
            mapa[x][y+4] = 'z';
    }

    // mata qualquer monstro que esteja em cima do z 

    if(mapa[monstroX][monstroY] == 'z') {
        vidamonstro = 1;
    }

    if(mapa[monstrox2][monstroy2] == 'z') {
        vidamonstro2 = 1;
    }

    mapa[x][y] = jogador;

    system("cls");

    for(i = 0; i < 15; i++) {
        for(j = 0; j < 15; j++) {
            printf("%c ", mapa[i][j]);
        }
        printf("\n");
    }

    system("pause");
}
	 
	 
	 
	 
	 
   
if(arma == 3) {

    if(x-1 >= 0 && y-1 >= 0)
        mapa[x-1][y-1] = 'z';

    if(x-1 >= 0)
        mapa[x-1][y] = 'z';

    if(x-1 >= 0 && y+1 <= 14)
        mapa[x-1][y+1] = 'z';

    if(y-1 >= 0)
        mapa[x][y-1] = 'z';

    if(y+1 <= 14)
        mapa[x][y+1] = 'z';

    if(x+1 <= 14 && y-1 >= 0)
        mapa[x+1][y-1] = 'z';

    if(x+1 <= 14)
        mapa[x+1][y] = 'z';

    if(x+1 <= 14 && y+1 <= 14)
        mapa[x+1][y+1] = 'z';


    // aqui mata qualquer monstro que esteja em cima do z 

    if(mapa[monstroX][monstroY] == 'z') {
        vidamonstro = 1;
    }

    if(mapa[monstrox2][monstroy2] == 'z') {
        vidamonstro2 = 1;
    }


    mapa[x][y] = jogador;

    system("cls");

    for(i = 0; i < 15; i++) {
        for(j = 0; j < 15; j++) {
            printf("%c ", mapa[i][j]);
        }
        printf("\n");
    }

    system("pause");
}
	
		 	 	 	 	}//oi
		
		
		

//movimentooo

			if(movimento == 'w' || movimento == 'W') {
    if(x > 0) {
        //isso vai deixar universal, nao vai deixar o personangem passar quando tiver um botao
		if(mapa[x-1][y] == 'O') {
            printf("Voce nao pode passar!\n");
            system("pause");
        
		x++;
		}
        	if(mapa[x-1][y] == 'D') {
            printf("Voce nao pode passar!\n");
            system("pause");
        
		x++;
		}
    	}
     if(x == 0) {
                printf("Voce nao pode sair do mapa\n");
                system("pause");
                x++;
            }
x--;
    jogador = '^';
}
else if(movimento == 's' || movimento == 'S') {
    if(x < 14) {

        if(mapa[x+1][y] == 'O') {
            printf("Voce nao pode passar!\n");
            system("pause");
        x--;
		}
        
    }
if(x == 14) {
                printf("Voce nao pode sair do mapa\n");
                system("pause");
                x--;
            }

x++;
    jogador = 'v';
}
else if(movimento == 'a' || movimento == 'A') {
     if(y > 0) {
       
        if(mapa[x][y-1] == 'O') {
            printf("Voce nao pode passar!\n");
            system("pause");
        y++;
		}
        
    }
    if(y == 0) {
                printf("Voce nao pode sair do mapa\n");
                system("pause");
                y++;
            }
y--;
    jogador = '<';


}
else if(movimento == 'd' || movimento == 'D') {
     if(y < 14) {

        if(mapa[x][y+1] == 'O') {
            printf("Voce nao pode passar!\n");
            system("pause");
        y--;
	     }
    
	 }
if(y == 14) {
                printf("Voce nao pode sair do mapa\n");
                system("pause");
                y--;
            }
 y++;
    jogador = '>';
}

// monstro 1
if(vidamonstro != 1){
direcaoMonstro = rand() % 4;
}
if(direcaoMonstro == 0 && monstroX > 10) {
    monstroX--;
}
else if(direcaoMonstro == 1 && monstroX < 14) {
    monstroX++;
}
else if(direcaoMonstro == 2 && monstroY > 1) {
    monstroY--;
}
else if(direcaoMonstro == 3 && monstroY < 3) {
    monstroY++;
}
if( vidamonstro != 1){
if(monstroX == x && monstroY == y) {
    vidas--;

    printf("O monstro te atacou! Voce perdeu 1 vida.\n");
    system("pause");

    

    segundoandar();
    jogador = 'v';
}
	}
 if( vidamonstro2 != 1){
	 direcaoMonstro2 = rand() % 4;
 }
if(direcaoMonstro2 == 0 && monstrox2 > 0) {
    monstrox2--;
}
else if(direcaoMonstro2 == 1 && monstrox2 < 3) {
    monstrox2++;
}
else if(direcaoMonstro2 == 2 && monstroy2 > 3) {
    monstroy2--;
}
else if(direcaoMonstro2 == 3 && monstroy2 < 8) {
    monstroy2++;
}
if(vidamonstro2 != 1){
    if(monstrox2 == x && monstroy2 == y){

        vidas--;

        printf("O monstro te atacou! Voce perdeu 1 vida.\n");
        system("pause");

        if(vidas <= 0){
            printf("\nGAME OVER\n");
            system("pause");
            main();
            return;
        }

       segundoandar();
        jogador = 'v';
    }
}



if(mapa[x][y] == '#') {
    vidas--;

    printf("Voce pisou no espinho e perdeu uma vida!\n");
    system("pause");

    if(vidas == 0) {
            printf("\n\n------ GAME OVER ------\n\nVoce perdeu todas as suas vidas! Retornando ao menu principal...\n");
            system("pause");
            main();
            return;
        }
   x = 14;
    y = 14;
    jogador = 'v';
	
	
	
	
	}
    
}
    }


void primeiroandar()
{
    system("cls");

    char mapa[10][10];
    char movimento;
    int i, j;
    int porta = 0;
    int chave = 0;
    int caixa1 = 0;
    int caixa2 = 0;
   int caixa3 = 0;
    int x = 9; // linha do jogador
    int y = 9; // coluna do jogador

    char jogador = 'v'; 

    while(1){
        system("cls");

        

        for (i = 0; i < 10; i++) {
            for (j = 0; j < 10; j++) {
                mapa[i][j] = '-';
            }
        }

        mapa[3][8] = '#';
        mapa[3][7] = '#';
        mapa[2][7] = '#';
        mapa[1][7] = '#';
        mapa[0][7] = '#';
        mapa[0][1] = 'O';
        if(porta == 0) {
            mapa[3][9] = 'D';
        }
        if(porta != 0) {
            mapa[3][9] = '=';
        }
        mapa[0][9] = 'L';
        if( caixa1 != 1){
        mapa[2][0] = 'k';
		}
		if(caixa2 != 1){
		mapa[2][1] = 'k';
		}
		if(caixa3 != 1){
		mapa[2][2] = 'k';
		}
        mapa[0][3] = '*';
        mapa[1][3] = '*';
        mapa[2][3] = '*';

        mapa[x][y] = jogador;

        for (i = 0; i < 10; i++) {
            for (j = 0; j < 10; j++) {
                printf("%c ", mapa[i][j]);
            }
            printf("\n");
        }

        printf("\nW A S D para mover\n");
        printf("Digite 'o' para atacar: ");
        if(x == 1 && y == 1 && jogador == '^') {
            printf("\nAperte i para interagir\n");
        }
        if(x == 4 && y == 9 && jogador == '^') {
            printf("\nAperte i para interagir\n");
        }
        if(x == 0 && y == 0 && jogador == '>') {
            printf("\nAperte i para interagir\n");
        }
        if(x == 0 && y == 2 && jogador == '<') {
            printf("\nAperte i para interagir\n");
        }

     if(movimento == 'i')
{
    if(x == 1 && y == 1 && jogador == '^')
    {
        printf("Voce pegou a chave!\n");
        chave = 1;
        system("pause");
    }
}   
		
		
		
		
		
		
		
		
		if(vidas == 0) {
            printf("\n\n------ GAME OVER ------\n\nVoce perdeu todas as suas vidas! Retornando ao menu principal...\n");
            system("pause");
            main();
            return;
        }

        movimento = getch();

        if(x == 1 && y == 1 && jogador == '^') {
    printf("\nAperte i para pegar a chave\n");
}


        if(movimento == 'i')  //BOTAO
        {
            if(x == 0 && y == 0 && jogador == '>') {
                printf("\nVoce apertou o botao e recebeu a chave!\n");  
                system("pause");
                chave = 1;
            }
            else if(x == 1 && y == 1 && jogador == '^'){
                printf("\nVoce apertou o botao e recebeu a chave!\n");  
                system("pause");
                chave = 1;
            }
            else if(x == 0 && y == 2 && jogador == '<') {
                printf("\nVoce apertou o botao e recebeu a chave!\n");  
                system("pause");
                chave = 1;
            }
        }

        if(movimento == 'i' && x == 4 && y == 9 && jogador == '^')
        {
            if(chave == 0) {
                printf("\nA porta esta trancada, voce precisa de uma chave para abrir\n");
                system("pause");
            }
            else {
                printf("\nVoce abriu a porta!\n");
                system("pause");
                porta = 1;
            }
        }



        if(movimento == 'w' || movimento == 'W') {
    x--;
    jogador = '^';

    if(x < 0) {
        printf("Voce nao pode sair do mapa\n");
        system("pause");
        x++;
    }
if(mapa[x][y] == '#') {
    vidas--;

    printf("Voce pisou no espinho!\n");
    printf("Vidas restantes: %d\n", vidas);
    system("pause");

    if(vidas <= 0) {
        printf("\nGAME OVER!\n");
        system("pause");
        main();
        return;
    }

    primeiroandar();
    return;
}


if(mapa[x][y] == '*' || mapa[x][y] == 'D') {
    printf("Voce bateu na parede!\n");
    system("pause");

    // volta para a posiÁ„o anterior
    if(jogador == '^') x++;
    if(jogador == 'v') x--;
    if(jogador == '<') y++;
    if(jogador == '>') y--;
}
    if(caixa1 != 1 && mapa[2][0] == jogador) {
        printf("Tem uma caixa na sua frente, ataque-a para passar\n");
        system("pause");
        x++;
    }

    if(caixa2 != 1 && mapa[2][1] == jogador) {
        printf("Tem uma caixa na sua frente, ataque-a para passar\n");
        system("pause");
        x++;
    }

    if(caixa3 != 1 && mapa[2][2] == jogador) {
        printf("Tem uma caixa na sua frente, ataque-a para passar\n");
        system("pause");
        x++;
    }
}

else if(movimento == 'a' || movimento == 'A') {
    y--;
    jogador = '<';

    if(y < 0) {
        printf("Voce nao pode sair do mapa\n");
        system("pause");
        y++;
    }
if(mapa[x][y] == '#') {
    vidas--;

    printf("Voce pisou no espinho!\n");
    printf("Vidas restantes: %d\n", vidas);
    system("pause");

    if(vidas <= 0) {
        printf("\nGAME OVER!\n");
        system("pause");
        main();
        return;
    }

    primeiroandar();
    return;
}


if(mapa[x][y] == '*' || mapa[x][y] == 'D') {
    
    system("pause");

    // volta para a posiÁ„o anterior
    if(jogador == '^') x++;
    if(jogador == 'v') x--;
    if(jogador == '<') y++;
    if(jogador == '>') y--;
}
    if(caixa1 != 1 && mapa[2][0] == jogador) {
        printf("Tem uma caixa na sua frente, ataque-a para passar\n");
        system("pause");
        y++;
    }

    if(caixa2 != 1 && mapa[2][1] == jogador) {
        printf("Tem uma caixa na sua frente, ataque-a para passar\n");
        system("pause");
        y++;
    }

    if(caixa3 != 1 && mapa[2][2] == jogador) {
        printf("Tem uma caixa na sua frente, ataque-a para passar\n");
        system("pause");
        y++;
    }
}

else if(movimento == 's' || movimento == 'S') {
    x++;
    jogador = 'v';

    if(x > 9) {
        printf("Voce nao pode sair do mapa\n");
        system("pause");
        x--;
    }
if(mapa[x][y] == '#') {
    vidas--;

    printf("Voce pisou no espinho!\n");
    printf("Vidas restantes: %d\n", vidas);
    system("pause");

    if(vidas <= 0) {
        printf("\nGAME OVER!\n");
        system("pause");
        main();
        return;
    }

    primeiroandar();
    return;
}


if(mapa[x][y] == '*') {
    printf("Voce bateu na parede!\n");
    system("pause");

    // volta para a posiÁ„o anterior
    if(jogador == '^') x++;
    if(jogador == 'v') x--;
    if(jogador == '<') y++;
    if(jogador == '>') y--;
}
    if(caixa1 != 1 && mapa[2][0] == jogador) {
        printf("Tem uma caixa na sua frente, ataque-a para passar\n");
        system("pause");
        x--;
    }

    if(caixa2 != 1 && mapa[2][1] == jogador) {
        printf("Tem uma caixa na sua frente, ataque-a para passar\n");
        system("pause");
        x--;
    }

    if(caixa3 != 1 && mapa[2][2] == jogador) {
        printf("Tem uma caixa na sua frente, ataque-a para passar\n");
        system("pause");
        x--;
    }
}

else if(movimento == 'd' || movimento == 'D') {
    y++;
    jogador = '>';

    if(y > 9) {
        printf("Voce nao pode sair do mapa\n");
        system("pause");
        y--;
    }
if(mapa[x][y] == '#') {
    vidas--;

    printf("Voce pisou no espinho!\n");
    printf("Vidas restantes: %d\n", vidas);
    system("pause");

    if(vidas <= 0) {
        printf("\nGAME OVER!\n");
        system("pause");
        main();
        return;
    }

    primeiroandar();
    return;
}


if(mapa[x][y] == '*') {
    printf("Voce bateu na parede!\n");
    system("pause");

    // volta para a posiÁ„o anterior
    if(jogador == '^') x++;
    if(jogador == 'v') x--;
    if(jogador == '<') y++;
    if(jogador == '>') y--;
}
    if(caixa1 != 1 && mapa[2][0] == jogador) {
        printf("Tem uma caixa na sua frente, ataque-a para passar\n");
        system("pause");
        y--;
    }

    if(caixa2 != 1 && mapa[2][1] == jogador) {
        printf("Tem uma caixa na sua frente, ataque-a para passar\n");
        system("pause");
        y--;
    }

    if(caixa3 != 1 && mapa[2][2] == jogador) {
        printf("Tem uma caixa na sua frente, ataque-a para passar\n");
        system("pause");
        y--;
    }
}
if(caixa1 != 1 && x == 2 && y == 0)
{
    if(jogador == '^') x++;
    if(jogador == 'v') x--;
    if(jogador == '<') y++;
    if(jogador == '>') y--;
}

if(caixa2 != 1 && x == 2 && y == 1)
{
    if(jogador == '^') x++;
    if(jogador == 'v') x--;
    if(jogador == '<') y++;
    if(jogador == '>') y--;
}

if(caixa3 != 1 && x == 2 && y == 2)
{
    if(jogador == '^') x++;
    if(jogador == 'v') x--;
    if(jogador == '<') y++;
    if(jogador == '>') y--;
}





if(movimento == 'o' || movimento == 'O'){
             //ataque espadaaaa
		if(arma == 1) {

    if(jogador == '^') {

        if(x-1 >= 0 && y-1 >= 0)
            mapa[x-1][y-1] = 'z';

        if(x-1 >= 0)
            mapa[x-1][y] = 'z';

        if(x-1 >= 0 && y+1 <= 9)
            mapa[x-1][y+1] = 'z';

        if(x-2 >= 0 && y-1 >= 0)
            mapa[x-2][y-1] = 'z';

        if(x-2 >= 0)
            mapa[x-2][y] = 'z';

        if(x-2 >= 0 && y+1 <= 9)
            mapa[x-2][y+1] = 'z';
    }

    else if(jogador == 'v') {

        if(x+1 <= 14 && y-1 >= 0)
            mapa[x+1][y-1] = 'z';

        if(x+1 <= 9)
            mapa[x+1][y] = 'z';

        if(x+1 <= 9 && y+1 <= 14)
            mapa[x+1][y+1] = 'z';

        if(x+2 <= 9 && y-1 >= 0)
            mapa[x+2][y-1] = 'z';

        if(x+2 <= 9)
            mapa[x+2][y] = 'z';

        if(x+2 <= 9 && y+1 <= 14)
            mapa[x+2][y+1] = 'z';
    }

    else if(jogador == '<') {

        if(x-1 >= 0 && y-1 >= 0)
            mapa[x-1][y-1] = 'z';

        if(y-1 >= 0)
            mapa[x][y-1] = 'z';

        if(x+1 <= 9 && y-1 >= 0)
            mapa[x+1][y-1] = 'z';

        if(x-1 >= 0 && y-2 >= 0)
            mapa[x-1][y-2] = 'z';

        if(y-2 >= 0)
            mapa[x][y-2] = 'z';

        if(x+1 <= 9 && y-2 >= 0)
            mapa[x+1][y-2] = 'z';
    }

    else if(jogador == '>') {

        if(x-1 >= 0 && y+1 <= 9)
            mapa[x-1][y+1] = 'z';

        if(y+1 <= 14)
            mapa[x][y+1] = 'z';

        if(x+1 <= 14 && y+1 <= 9)
            mapa[x+1][y+1] = 'z';

        if(x-1 >= 0 && y+2 <= 9)
            mapa[x-1][y+2] = 'z';

        if(y+2 <= 9)
            mapa[x][y+2] = 'z';

        if(x+1 <= 9 && y+2 <= 9)
            mapa[x+1][y+2] = 'z';
    }

    

    mapa[x][y] = jogador;
if(mapa[2][0] == 'z') {
    caixa1 = 1;
}

if(mapa[2][1] == 'z') {
    caixa2 = 1;
}

if(mapa[2][2] == 'z') {
    caixa3 = 1;
}
    
	system("cls");

    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            printf("%c ", mapa[i][j]);
        }
        printf("\n");
    }

    system("pause");
}
	 if(arma == 2) {

    if(jogador == '^') {

        if(x-1 >= 0)
            mapa[x-1][y] = 'z';

        if(x-2 >= 0)
            mapa[x-2][y] = 'z';

        if(x-3 >= 0)
            mapa[x-3][y] = 'z';

        if(x-4 >= 0)
            mapa[x-4][y] = 'z';
    }

    else if(jogador == 'v') {

        if(x+1 <= 9)
            mapa[x+1][y] = 'z';

        if(x+2 <= 9)
            mapa[x+2][y] = 'z';

        if(x+3 <= 9)
            mapa[x+3][y] = 'z';

        if(x+4 <= 9)
            mapa[x+4][y] = 'z';
    }

    else if(jogador == '<') {

        if(y-1 >= 0)
            mapa[x][y-1] = 'z';

        if(y-2 >= 0)
            mapa[x][y-2] = 'z';

        if(y-3 >= 0)
            mapa[x][y-3] = 'z';

        if(y-4 >= 0)
            mapa[x][y-4] = 'z';
    }

    else if(jogador == '>') {

        if(y+1 <= 9)
            mapa[x][y+1] = 'z';

        if(y+2 <= 9)
            mapa[x][y+2] = 'z';

        if(y+3 <= 9)
            mapa[x][y+3] = 'z';

        if(y+4 <= 9)
            mapa[x][y+4] = 'z';
    }

    // mata qualquer monstro que esteja em cima do z 

    

    mapa[x][y] = jogador;
if(mapa[2][0] == 'z') {
    caixa1 = 1;
}

if(mapa[2][1] == 'z') {
    caixa2 = 1;
}

if(mapa[2][2] == 'z') {
    caixa3 = 1;
}
    system("cls");

    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            printf("%c ", mapa[i][j]);
        }
        printf("\n");
    }

    system("pause");
}
	 
	 
	 
	 
	 
   
if(arma == 3) {

    if(x-1 >= 0 && y-1 >= 0)
        mapa[x-1][y-1] = 'z';

    if(x-1 >= 0)
        mapa[x-1][y] = 'z';

    if(x-1 >= 0 && y+1 < 10)
        mapa[x-1][y+1] = 'z';

    if(y-1 >= 0)
        mapa[x][y-1] = 'z';

    if(y+1 <= 9)
        mapa[x][y+1] = 'z';

    if(x+1 <= 9 && y-1 >= 0)
        mapa[x+1][y-1] = 'z';

    if(x+1 <= 9)
        mapa[x+1][y] = 'z';

    if(x+1 <= 9 && y+1 <= 9)
        mapa[x+1][y+1] = 'z';


    // aqui mata qualquer monstro que esteja em cima do z 

    //if(mapa[monstroX][monstroY] == 'z') {
        
    

    //if(mapa[monstrox2][monstroy2] == 'z') {
        


    mapa[x][y] = jogador;

    system("cls");

    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            printf("%c ", mapa[i][j]);
        }
        printf("\n");
    }
if(mapa[2][0] == 'z') {
    caixa1 = 1;
}

if(mapa[2][1] == 'z') {
    caixa2 = 1;
}

if(mapa[2][2] == 'z') {
    caixa3 = 1;
}
    system("pause");
}
	
		 	 	 	 	}//oi
		
       
	   
	   
	    
		
		
		
		
		
		if(x == 0 && y == 9) {
            printf("\nVoce passou de fase! Entrando no segundo andar...\n");
            system("pause");
            segundoandar();
            return;
        }


    }
}


void vila() {

    int npc = 0;
    char mapa[10][10];
    char movimento;
    int i, j;

    int x = 5; // linha do jogador
    int y = 5; // coluna do jogador

    char jogador = 'v';

    if(vidas == 0) {
        vidas = 3;
    }

    while(1){

        system("cls"); // limpa a tela


        // Preenche o mapa
        for (i = 0; i < 10; i++) {
            for (j = 0; j < 10; j++) {
                mapa[i][j] = '-';
            }
        }

        

        // Objetos do mapa
        mapa[3][1] = 'D';
        mapa[0][4] = 'L';

        // Jogador
        mapa[x][y] = jogador;

        // Mostra o mapa
        for (i = 0; i < 10; i++) {
            for (j = 0; j < 10; j++) {
                printf("%c ", mapa[i][j]);
            }
            printf("\n");
        }
        

        printf("\nW A S D para mover: ");
        if(x == 4 && y == 1 && jogador == '^') {
            printf("\nAperte i para interagir\n");
        }
        if(x == 2 && y == 1 && jogador == 'v') {
            printf("\nAperte i para interagir\n");
        }
        if(x == 3 && y == 0 && jogador == '>') {
            printf("\nAperte i para interagir\n");
        }
        if(x == 3 && y == 2 && jogador == '<') {
            printf("\nAperte i para interagir\n");
        }

        movimento = getch();

        if(movimento == 'w' || movimento == 'W') {
            if(mapa[4][1] == '^' || mapa[4][1] == 'v' || mapa[4][1] == '>' || mapa[4][1] == '<') {
                printf("Tem um npc na sua frente, voce nao pode andar\n");
                system("pause");
                x++;
            }
            if(x == 0) {
                printf("Voce nao pode sair do mapa\n");
                system("pause");
                x++;
            }
            if(mapa[1][4] == '^' || mapa[1][4] == 'v' || mapa[1][4] == '>' || mapa[1][4] == '<') {
                if(arma == 0){
                    printf("\nVoce nao pode entrar na masmorra sem uma arma!\n");
                    system("pause");
                    x++;
                }
                
            }


            x--;
            jogador = '^';
        }
        else if(movimento == 'a' || movimento == 'A') {
            if(mapa[3][2] == '^' || mapa[3][2] == 'v' || mapa[3][2] == '>' || mapa[3][2] == '<') {
                printf("Tem um npc na sua frente, voce nao pode andar\n");
                system("pause");
                y++;
            }
            if(y == 0) {
                printf("Voce nao pode sair do mapa\n");
                system("pause");
                y++;
            }
            if(mapa[0][5] == '^' || mapa[0][5] == 'v' || mapa[0][5] == '>' || mapa[0][5] == '<') {
                if(arma == 0){
                    printf("\nVoce nao pode entrar na masmorra sem uma arma!\n");
                    system("pause");
                    y++;
                }
                
            }
            y--;
            jogador = '<';
        }
        else if(movimento == 's' || movimento == 'S') {
            if(mapa[2][1] == '^' || mapa[2][1] == 'v' || mapa[2][1] == '>' || mapa[2][1] == '<') {
                printf("Tem um npc na sua frente, voce nao pode andar\n");
                system("pause");
                x--;
            }
            if(x == 9) {
                printf("Voce nao pode sair do mapa\n");
                system("pause");
                x--;
            }
            x++;
            jogador = 'v';
        }
        else if(movimento == 'd' || movimento == 'D') {
            if(mapa[3][0] == '^' || mapa[3][0] == 'v' || mapa[3][0] == '>' || mapa[3][0] == '<') {
                printf("Tem um npc na sua frente, voce nao pode andar\n");
                system("pause");
                y--;
            }
            if(y == 9) {
                printf("Voce nao pode sair do mapa\n");
                system("pause");
                y--;
            }
            if(mapa[0][3] == '^' || mapa[0][3] == 'v' || mapa[0][3] == '>' || mapa[0][3] == '<') {
                if(arma == 0){
                    printf("\nVoce nao pode entrar na masmorra sem uma arma!\n");
                    system("pause");
                    y--;
                }
            }
            y++;
            jogador = '>';
        }

        if(x == 4 && y == 1 && jogador == '^' && movimento == 'i') {
            
            npc++;
            if(npc > 1) {
                printf("Voce ja escolheu sua arma, entre na dungeon\n");
            }
            system("pause");
        }

        if(x == 2 && y == 1 && jogador == 'v' && movimento == 'i'){
            
            npc++;
            if(npc > 1) {
                printf("Voce ja escolheu sua arma, entre na dungeon\n");
            }
            system("pause");
        }

        if(x == 3 && y == 0 && jogador == '>' && movimento == 'i'){
            
            npc++;
            if(npc > 1) {
                printf("Voce ja escolheu sua arma, entre na dungeon\n");
            }
            system("pause");
        }

        if(x == 3 && y == 2 && jogador == '<' && movimento == 'i'){
            
            npc++;
            if(npc > 1) {
                printf("Voce ja escolheu sua arma, entre na dungeon\n");
            }
            system("pause");
        }
            
        

        if(npc == 1)
        {
            int escolhaarma = 0;
            do{

            
            
            printf("Ola, eu sou o Villager, estou aqui para lhe oferecer 3 armas para sua jornada, escolha uma conhecer:\n\n");
            printf("1: Espada\n");
            printf("Ataca uma regiao de 3 x 2 celulas diretamente a frente do jogador, cobrindo largura e profundidade.\n\n");
            printf("2: Arco e Flecha\n");
            printf("Ataca em linha reta, atingindo as 4 celulas consecutivas a frente do jogador.\n\n");
            printf("3: Cajado\n");
            printf("Ataca todas as 8 c√©lulas adjacentes ao jogador simultaneamente, independente da dire√ß√£o que ele estiver olhando\n\n");
            printf("Escolha sua arma para usar na dungeon: ");    
            scanf(" %d", &escolhaarma);
            }while(escolhaarma != 1 && escolhaarma != 2 && escolhaarma != 3);

            if(escolhaarma == 1){
                printf("Voce escolheu a Espada. Boa sorte!\n");
                system("pause");
                arma = 1;
            }
            
            if(escolhaarma == 2){
                printf("Voce escolheu o Arco e Flecha. Boa sorte!\n");
                system("pause");
                arma = 2;
            }

            if(escolhaarma == 3){
                printf("Voce escolheu o Cajado. Boa sorte!\n");
                system("pause");
                arma = 3;
            }

            npc++;

        }





        


        if(x == 0 && y == 4) {
            printf("Entrando na dungeon...\n");
            primeiroandar();
        }

    }
    
}

void simbolos() {
    printf("\n-------- SIMBOLOS --------\n");
    printf("< = Jogador olhando para a esquerda\n");
    printf("^ = Jogador olhando para cima\n");
    printf("> = Jogador olhando para a direita\n");
    printf("v = Jogador olhando para baixo\n");
    printf("* = Parede: o jogador nao pode passar\n");
    printf("# = Espinho: o jogador morre ao passar por cima\n");
    printf("k = Caixa: o jogador n√£o pode passar, mas pode ser destruida com ataque\n");
    printf("O = Botao: executa uma acao ao ser pressionado\n");
    printf("D = Porta fechada: o jogador n√£o pode passar\n");
    printf("@ = Chave: abre uma porta fechada ao interagir\n");
    printf("= = Porta aberta: o jogador pode passar\n");
    printf("L = Escada: leva o jogador para a pr√≥xima fase\n");
    printf("X = Monstro Tipo 1\n");
    printf("Y = Monstro Tipo 2\n");
    printf("Z = Boss Final\n\n");
}

void controles() {
    printf("\n-------- CONTROLES --------\n");
    printf("w = Move o jogador para cima e altera o simbolo para ^\n");
    printf("a = Move o jogador para a esquerda e altera o simbolo para <\n");
    printf("s = Move o jogador para baixo e altera o simbolo para v\n");
    printf("d = Move o jogador para a direita e altera o simbolo para >\n");
    printf("i = Interage com o objeto que esta a frente do jogador\n");
    printf("o = O jogador realiza um ataque na celula a sua frente\n\n");
}

int main() {
    

    int opcao = 0;

    while(opcao != 1 && opcao != 2 && opcao != 3){

        system("cls");

        printf("-------------------------------------------------\n");
        printf("---------------- DUNGEON CRAWLER ----------------\n");
        printf("-------------------------------------------------\n\n");

        printf("1: Jogar\n");
        printf("2: Tutorial\n");
        printf("3: Sair\n\n");

        if(scanf("%d", &opcao) != 1) {
        printf("Digite apenas os numeros listados!\n");
        system("pause");
        system("cls");
        while(getchar() != '\n');

        continue;
    }

        if(opcao < 1 || opcao > 3) {
            printf("Digite apenas os numeros listados!\n");
            system("pause");
            system("cls");
        }
        
        if(opcao == 1) {
        vila();
    }

        if(opcao == 2) {//FEITO, S√? MELHORAR OS TEXTOS

        int escolhatutorial = 1;

        do {
            printf("\n-------- HISTORIA --------\n");
            printf("Neste jogo, voce se chama Sung Jin Woo e ira explorar o Castelo Demoniaco, cheio de perigos e desafios para no final\nconseguir o chamado");
            printf(" Elixir da Vida, que tem o poder de curar todas as doencas do mundo, afim de salvar a sua mae.\n");
            printf("\nO inicio do jogo se passa em uma vila, onde voce ira escolher uma arma para sua jornada e entrar no castelo.\n");
            printf("\nO Castelo Demoniaco possui tres andares progressivamente mais desafiadores e no final voce luta com um boss pelo Elixir\n\n");
            system("pause");
            controles();
            system("pause");
            simbolos();
            system("pause");
            printf("\n-------- ATENCAO --------!!\n");
            printf ("Voce possui 3 vidas.\n");
            printf ("Ao colidir com um espinho ou ser tocado por um monstro, voce perde 1 vida e a fase sera reiniciada.\n");
            printf ("Ao perder todas as 3 vidas, voce perde e retorna ao menu principal.\n\n");

            do{
                if(escolhatutorial != 1 && escolhatutorial != 2) {
                    printf("\nOpcao invalida! Tente novamente.\n");
                }
            printf("1: Repetir tutorial\n");
            printf("2: Voltar ao menu principal\n");
            printf("Escolha uma opcao: ");
            scanf("%d", &escolhatutorial);

            if(escolhatutorial == 2) {
                return main();
            }

            }while(escolhatutorial != 1 && escolhatutorial != 2);

        }while(escolhatutorial == 1);


    }

        if(opcao == 3) {//FEITO, S√? MELHORAR OS TEXTOS
        printf("Jogo desenvolvido por:\n");
        printf("Gabriel Fonseca Pinto\n");
        printf("Eduardo Do Amaral Pinheiro\n");
        printf("Claudio Amoedo Dias Leite\n");
        printf("Obrigado por jogar!\n");
        return 0;
    }
    }

    return 0;
}