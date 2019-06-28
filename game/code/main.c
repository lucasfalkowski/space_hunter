#include "../header/game.h"

int main(void) {
    lmp_tela();
    system("cd audio; play bg.mp3 > /dev/null 2>&1 &");
    
    printf("\nSeja bem-vindo ao Space Hunter\n\nPara melhorar sua experiência durante o jogo:\n\nQual seu nome?\n\n");
    scanf("%s", nome);
    lmp_tela();
    menu_principal();
    system("exit");
    return 0;
}

void lmp_tela() {
    system("cls || clear");
}

void menu_principal() {
        
    int sse;
    
    printf("\nAgora é com você, %s. Escolha a opção que mais te agrade.\n\n", nome);
    printf("[1] INICIAR\n[2] INSTRUÇÕES\n\n[8] RESET\n[0] SAIR\n\n");

    scanf("%d", &sse);

    switch(sse) {
        case 1:
            lmp_tela();
            menu_fases();
            break;
            
        case 2:
            lmp_tela();
            instru();
            break;
            
        case 0:
            system("exit");
            break;
            
        case 8:
            system("gcc-o bin/space_hunter code/main.c -Wall; bin/./space_hunter");;
            break;
        
        default:
            lmp_tela();
            menu_principal();
    }
}

void menu_fases() {
    
    int ssee;
    
    printf("\n%s, você está preparado pra essa jornada espacial? [Score: %i]\n\n", nome, pp);
    printf("[1] NÍVEL 1\n[2] NÍVEL 2\n[3] NÍVEL 3\n\n[4] QUIZ\n\n[0] VOLTAR\n\n");

    scanf("%d", &ssee);
    
    switch(ssee) {
    case 1:
        lmp_tela();
        n1();
        lvl1();
        break;
    
    case 2:
        lmp_tela();
        n2();
        lvl2();
        break;
    
    case 3:
        lmp_tela();
        n3();
        lvl3();
        break;
        
    case 4:
        lmp_tela();
        q1();
        lmp_tela();
        quiz();
        break;
        
    case 0:
        lmp_tela();
        menu_principal();
        break;
    
    default:
        lmp_tela();
        menu_fases();
    }
}

void instru() {
    int a;
    printf("\n\nEmbarque nessa aventura, %s!\n\nPRIMEIRA FASE:\nAntes de tudo, seu conhecimento sobre a história aeroespacial seŕa testado. Basta responder corretamente ao quiz!\n\nSEGUNDA FASE:\nInforme a linha e a coluna em que o detritos espaciais se encontram.\n\nTERCEIRA FASE:\nPrepare-se para estar num espaço em que você terá de desviar dos obstáculos e entrar no portal interdimensional do outro lado do universo.\n\n Fique atento:\n\n W: movimenta para cima.\n S: movimenta para baixo.\n A: movimenta para esquerda.\n D: movimenta para direita.", nome);

    printf("\n\n[1] INICIAR\n[0] VOLTAR\n\n");
    scanf("%i", &a);

   switch(a) {
    case 1:
        lmp_tela();
        menu_fases();
        break;
        
    case 0:
        lmp_tela();
        menu_principal();
        break;
    
    default:
        lmp_tela();
        instru();
    }
}

int dmtz() {
    
    int a, b;
    
    for (a = 0; a < 16; a++) {

        for (b = 0; b < 25; b++) {
            
            if((a == x) && (b == y)) {
                printf("#");
                continue;
            }
            
            if (mtz[a][b] == 0)
                printf(" ");
            if (mtz[a][b] == 1)
                printf("=");
            if (mtz[a][b] == 3)
                printf(" ");
            if (mtz[a][b] == 4)
                printf("|");
            
        } printf("\n");
    }
    return 1;
}

int dmtzz() {
    
    int a, b;
    
    for (a = 0; a < 16; a++) {

        for (b = 0; b < 25; b++) {
            
            if((a == x) && (b == y)) {
                printf("#");
                continue;
            }
            
            if (mtz[a][b] == 0)
                printf(" ");
            if (mtz[a][b] == 1)
                printf("=");
            if (mtz[a][b] == 3)
                printf("=");
            if (mtz[a][b] == 4)
                printf("|");
            
        } printf("\n");
    }
    return 1;
}

int dmtzzz() {
    
    int a, b;
    
    for (a = 0; a < 8; a++) {

        for (b = 0; b < 15; b++) {
            
            if((a == x) && (b == y)) {
                printf("#");
                continue;
            }
            
            if (mtzz[a][b] == 0)
                printf(" ");
            if (mtzz[a][b] == 1)
                printf("=");
            if (mtzz[a][b] == 3)
                printf(" ");
            if (mtzz[a][b] == 4)
                printf("|");
            
        } printf("\n");
    }
    return 1;
}

void gmtz() {
    
    int a, b;
    
    for (a = 0; a < 16 ; a++) {
        
        for (b = 0; b < 25; b++) {
            
            if (mtz[a][b] == 0) {
                mtz[a][b] = rand() %4;
                
            if (mtz[a][b] == 2) {
                mtz[a][b] = 0;
            }
            }
            
        }
    }
    
    mtz[0][20] = 1;
    mtz[0][21] = 1;
    mtz[0][23] = 1;
    mtz[0][22] = 1;
    mtz[15][22] = 1;
    mtz[0][24] = 1;
    mtz[15][20] = 1;
    mtz[15][21] = 1;
    mtz[15][23] = 1;
    mtz[1][24] = 4;
    mtz[2][24] = 4;
    mtz[3][24] = 4;
    mtz[4][24] = 4;
    mtz[5][24] = 4;
    mtz[6][24] = 4;
    mtz[7][24] = 4;
    mtz[8][24] = 4;
    mtz[9][24] = 4;
    mtz[10][24] = 4;
    mtz[11][24] = 4;
    mtz[12][24] = 4;
    mtz[13][24] = 4;
    mtz[14][24] = 4;
    
}

void gmtzz() {
    
    int a, b;
    
    for (a = 0; a < 8 ; a++) {
        
        for (b = 0; b < 15; b++) {
            
            if (mtzz[a][b] == 0) {
                mtzz[a][b] = rand() %4;
                
            if (mtzz[a][b] == 2) {
                mtzz[a][b] = 0;
            }
            }
            
        }
    }

    mtzz[5][14] = 4;
    mtzz[2][2] = 0;
    mtzz[2][3] = 0;
    mtzz[5][8] = 0;
    mtzz[5][9] = 0;
    mtzz[5][13] = 0;
    mtzz[5][10] = 0;
    mtzz[5][11] = 0;
    mtzz[5][12] = 0;
    
}

void lvl1() {
    
    p = 0;
    
    x = 2; y = 1;
    
    lmp_tela();
    
    gmtzz();
    dmtzzz();
    
    do {
    
    scanf("%c", &a);
    
    switch(a) {
        
        case 'w':
            x--;
            if(mtzz[x][y] == 1) {
                x++;
            }
            p++;
            lmp_tela();
            dmtzzz();
            printf("Score: %i\n", p);
            break;
        
        case 's':
            x++;
            if(mtzz[x][y] == 1) {
                x--;
            }
            p++;
            lmp_tela();
            dmtzzz();
            printf("Score: %i\n", p);
            break;
        
        case 'd':
            y++;
            if(mtzz[x][y] == 1) {
                y--;
            }
            p++;
            lmp_tela();
            dmtzzz();
            printf("Score: %i\n", p);
            break;
        
        case 'a':
            y--;
            if(mtzz[x][y] == 1) {
                y++;
            }
            p++;
            lmp_tela();
            dmtzzz();
            printf("Score: %i\n", p);
            break;
        
        default:
            lmp_tela();
            dmtzzz();
            printf("Score: %i\n", p);
    }
    } while(mtzz[x][y] != 4);
    
    pp = pp + p;
    lmp_tela();
    menu_fases();
}

void lvl2() {
    
    p = 0;
    
    x = 2; y = 1;
    
    gmtz();
    dmtz();
    
    do {
    
    scanf("%c", &a);
    
    switch(a) {
        
        case 'w':
            x--;
            if(mtz[x][y] == 1) {
                x++;
            }
            p++;
            lmp_tela();
            dmtz();
            printf("Score: %i\n", p);
            break;
        
        case 's':
            x++;
            if(mtz[x][y] == 1) {
                x--;
            }
            p++;
            lmp_tela();
            dmtz();
            printf("Score: %i\n", p);
            break;
        
        case 'd':
            y++;
            if(mtz[x][y] == 1) {
                y--;
            }
            p++;
            lmp_tela();
            dmtz();
            printf("Score: %i\n", p);
            break;
        
        case 'a':
            y--;
            if(mtz[x][y] == 1) {
                y++;
            }
            p++;
            lmp_tela();
            dmtz();
            printf("Score: %i\n", p);
            break;
        
        default:
            lmp_tela();
            dmtz();
            printf("Score: %i\n", p);
    }
    } while(mtz[x][y] != 4);

    pp = pp + p;
    lmp_tela();
    menu_fases();

}

void lvl3() {
    
    p = 0;
    
    x = 2; y = 1;
    
    gmtz();
    dmtzz();
    
    do {
    
    scanf("%c", &a);
    
    switch(a) {
        
        case 'w':
            x--;
            if(mtz[x][y] == 1) {
                x++;
            }
            p++;
            lmp_tela();
            dmtzz();
            printf("Score: %i\n", p);
            break;
        
        case 's':
            x++;
            if(mtz[x][y] == 1) {
                x--;
            }
            p++;
            lmp_tela();
            dmtzz();
            printf("Score: %i\n", p);
            break;
        
        case 'd':
            y++;
            if(mtz[x][y] == 1) {
                y--;
            }
            p++;
            lmp_tela();
            dmtzz();
            printf("Score: %i\n", p);
            break;
        
        case 'a':
            y--;
            if(mtz[x][y] == 1) {
                y++;
            }
            p++;
            lmp_tela();
            dmtzz();
            printf("Score: %i\n", p);
            break;
        
        default:
            lmp_tela();
            dmtzz();
            printf("Score: %i\n", p);
    }
    } while(mtz[x][y] != 4);

    pp = pp + p;
    lmp_tela();
    menu_fases();

}

void quiz() {
    
    
    struct respostas{
    
    char resposta_correta[40];
    char curiosidade[250];
    
};
 
    int acertos = 0;
    int resposta_usuario;
    int pontuacao = 0;
    int i, erro = 0;

 struct respostas armazenadas[TOTALRESPOSTAS]={
     {"Laika","Ela foi lançada ao espaço  em 3 de nov de 1957"},
     {"Yuri Alekseievitch Gagarin","Foi o primeiro homem a viajar pelo espaço, em 12 de abril de 1961"},
     {"Robert Huckchings Goddard","Engenheiro e físico experimental norte-americano"},
     {"NASA","Responsável pela pesquisa e desenvolvimento de tecnologias e programas de exploração espacial"},
     {"Neil  Alden Armstrong","Em 20 de julho de 1969 Armstrong foi a Lua"},
     {"Ariane 5","Em 4 de junho de 1996 o foguete francês Ariane 5 se autodestruiu no lançamento"},
     {"Elon Reeve Musk","É um empreendedor filantropo e visionário sul-africano-candense americano"},
     {"Marcos Cesar Pontes","Em março de 2006, Pontes tornou-se o primeiro brasileiro a ir ao espaço"}};
    
    printf("\nVamos jogar o quiz, %s?\n\nIremos testar seus conhecimentos sobre a\nhistória do setor Aeroespacial.\n\n", nome);
    system("sleep 06"); lmp_tela();
 
              printf("** Qual o nome da primeira cadela lançada ao espaço?\n\n[1]Laika\n[2]Lilica\n[3]Bela\n\n");
              scanf("%i", &resposta_usuario);
              if(resposta_usuario == 1){
                  printf("Você acertou!!\n");
                  acertos+=1;
                  pontuacao+=80;
              }else{
                printf("Não foi dessa vez!\n\n");
            } system("sleep 03"); lmp_tela();
            
             printf("** Nome do primeiro homem a viajar pelo espaço:\n\n[1]Yuri Alekseievitch Gagarin\n[2]Arthur Vasconcelos Almada\n[3]Robert Morgan Alden\n\n");
              scanf("%i", &resposta_usuario);
              if(resposta_usuario == 1){
                  printf("Você acertou!!\n");
                  acertos+=1;
                  pontuacao+=100;
              }else{
                printf("Não foi dessa vez!\n");
            } system("sleep 03"); lmp_tela();
              
              
            printf("** Inventor do foguete espacial de combustível líquido:\n\n[1]José Carlos Alberto \n[2]Robert Huckchings Goddard\n[3]Julian Borian Donati\n\n");
              scanf("%i", &resposta_usuario);
              if(resposta_usuario == 2){
                  printf("Você acertou!!\n");
                  acertos+=1;
                  pontuacao+=120;
              }else{
                printf("Não foi dessa vez!\n");
            } system("sleep 03"); lmp_tela();
            
             printf("** Qual a sigla da National Aeronautics and Space Administration?\n\n[1]NASA\n[2]NAESA\n[3]NASEPA\n\n");
              scanf("%i", &resposta_usuario);
              if(resposta_usuario == 1){
                  printf("Você acertou!!\n");
                  acertos+=1;
                  pontuacao+=30;
              }else{
                printf("Não foi dessa vez!\n");
            } system("sleep 03"); lmp_tela();
       
            printf("** Qual o nome do primeiro homem a pisar na Lua?\n\n[1]Neil Alder Armstrong\n[2]Neil Alden Armstrong\n[3]Neil Alden Rodriguez\n\n");
              scanf("%i", &resposta_usuario);
              if(resposta_usuario == 2){
                  printf("Você acertou!!\n");
                  acertos+=1;
                  pontuacao+=70;
              }else{
                printf("Não foi dessa vez!\n");
            } system("sleep 03"); lmp_tela();
            
            printf("** Qual o nome do foguete francês que teve erro de lançamento devido a overflow?\n\n[1]Armstrong 3\n[2]Apollo 2\n[3]Ariane 5\n\n");
              scanf("%i", &resposta_usuario);
              if(resposta_usuario == 3){
                  printf("Você acertou!!\n");
                  acertos+=1;
                  pontuacao+=230;
              }else{
                printf("Não foi dessa vez!\n");
            } system("sleep 03"); lmp_tela();
       
           printf("** Qual o nome do fundador da SpaceX ?\n\n[1]Sam Smith \n[2]Michael Stuart \n[3]Elon Musk\n\n");
              scanf("%i", &resposta_usuario);
              if(resposta_usuario == 3){
                  printf("Você acertou!!\n");
                  acertos+=1;
                  pontuacao+=150;
              }else{
                printf("Não foi dessa vez!\n");
            } system("sleep 03"); lmp_tela();
            
            printf("** Nome do primeiro brasileiro no espaço:\n\n[1]Marcos Antunes \n[2]Marcos Pontes\n[3]Marcelo Castro\n\n");
              scanf("%i", &resposta_usuario);
              if(resposta_usuario == 2){
                  printf("Você acertou!!\n");
                  acertos+=1;
                  pontuacao+=180;
              }else{
                printf("Não foi dessa vez!\n\n");
            } system("sleep 03"); lmp_tela();

            printf("Agora que você já provou seu conhecimento saiba mais sobre cada resposta correta ás perguntas acima!!\n");
           
            for(i=0; i<8 ; i++){
                
                printf("[%i]%s:%s\n",i,armazenadas[i].resposta_correta,armazenadas[i].curiosidade);
                
            }
    
   lmp_tela();
   printf("\n\nVOCÊ FEZ %i PONTOS NESSA FASE!\n\n",pontuacao);
   system("sleep 0.4");
   printf("\n\n\aSEUS ACERTOS:%i\n",acertos);
   system("sleep 0.4");
   erro = 8 - acertos;
   printf("\n\n\aSEUS ERROS: %i\n",erro);
   system("sleep 04"); lmp_tela(); menu_fases();
}

void n1() {
     printf("\n");
     printf("###    ### ### ##         ## ####### ###      ###\n");
     printf("####   ### ###  ##       ##  ##      ###      ###\n");
     printf("### #  ### ###   ##     ##   ######  ###      ###\n");
     printf("###  # ### ###    ##   ##    ######  ###      ###\n");
     printf("###   #### ###     ## ##     ##      #######  ###\n");
     printf("###    ### ###      ###      ####### #######  ###\n");
     printf("\n"); system("sleep 01");
}
 void n2() {
     printf("\n");
     printf("###    ### ### ##         ## ####### ###      ### ###\n");
     printf("####   ### ###  ##       ##  ##      ###      ### ###\n");
     printf("### #  ### ###   ##     ##   ######  ###      ### ###\n");
     printf("###  # ### ###    ##   ##    ######  ###      ### ###\n");
     printf("###   #### ###     ## ##     ##      #######  ### ###\n");
     printf("###    ### ###      ###      ####### #######  ### ###\n");
     printf("\n"); system("sleep 01");
}
 void n3() {
     printf("\n");
     printf("###    ### ### ##         ## ####### ###       ### ### ###\n");
     printf("####   ### ###  ##       ##  ##      ###       ### ### ###\n");
     printf("### #  ### ###   ##     ##   ######  ###       ### ### ###\n");
     printf("###  # ### ###    ##   ##    ######  ###       ### ### ###\n");
     printf("###   #### ###     ## ##     ##      #######   ### ### ###\n");
     printf("###    ### ###      ###      ####### #######   ### ### ###\n");
     printf("\n"); system("sleep 01");
}
 void q1() {
     printf("\n");
     printf("########## ###  ###   ### #########       \n");
     printf("########## ###  ###   ### ########        \n");
     printf("###    ### ###  ###   ###     ###         \n");
     printf("###    ### ###  ###   ###    ###          \n");
     printf("###    ### ###  ###   ###   ###           \n");
     printf("### ## ### ###  ###   ###  #######        \n");
     printf("########## ########   ### ########        \n");
     printf("     ###                                  \n");
     printf("      ###                                 \n");
     printf("\n"); system("sleep 01");
}
