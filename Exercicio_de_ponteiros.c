/******************************************************************************

Exercicio de Ponteiros

*******************************************************************************/


#include <stdio.h>

//Variaveis Globais
int n;
char str1[21], str2[21], *strr; //String 1, string 2, e string de retorno

//Definindo funcoes
void menu();
int compara(), mede(); //Funcoes compara() e mede() devem retornar numeros inteiros
char *copia(), *concatena(); //Funcoes copia() e concatena() devem retornar ponteiros de caracteres

int main()
{   
	n = 1;
	while(n){
        menu();
        switch(n){
            case 1:
            	printf("Informe a string (maximo 20 caracteres):\n");
            	scanf("%20s", &str1);
            	printf("A string original e: %s\n", str1);
                printf("A copia da string e: %s\n\n", copia()); //Funcao copia() retorna string
                free(strr); //Libera o espaco de memoria de "strr"
                break;
            case 2:
            	printf("Informe a primeira palavra (maximo 20 caracteres):\n");
    			scanf("%20s", &str1);
    			printf("Informe a segunda palavra (maximo 20 caracteres):\n");
    			scanf("%20s", &str2);
                if (compara()){ //Se compara() retorna o inteiro 1
                	printf("As palavras sao iguais.\n\n");
				}
				else{ //Se compara() retorna o inteiro 0
					printf("As palavras sao diferentes.\n\n");
				};
                break;
            case 3:
            	printf("Informe a primeira string (maximo 20 caracteres):\n");
    			scanf("%s", &str1);
    			printf("Informe a segunda string (maximo 20 caracteres):\n");
    			scanf("%s", &str2);
            	printf("Concatenando as strings, temos: %s\n\n", concatena());
            	free(strr); //Libera o espaco de memoria de "strr"
                break;
            case 4:
            	printf("Informe a string(maximo 20 caracteres):\n");
    			scanf("%s", &str1);
                printf("O tamanho da string e %d\n\n", mede());
                break;
            case 0:
            	printf("\tPrograma encerrado.");
                return 0;
        }
    }
    return 0;
};

void menu(){
    printf("Escolha uma opcao abaixo: (0 a 4)\n");
    printf("\t1-Copiar uma string\n");
    printf("\t2-Comparar duas strings\n");
    printf("\t3-Concatenar duas strings\n");
    printf("\t4-Medir o tamanho de uma string\n");
    printf("\t0-Encerrar o programa\n");
    printf("\tOpcao: ");
    scanf("%d", &n);
    };

//Copiar strings
char * copia(){
    int i, t;
    for(t=0; !(str1[t]=='\0'); t++){
	}; //Mede "str1"
    strr = (char *)malloc(i*sizeof(char)+1); //Aloca para "strc" espaco do tamanho de "str1" (Mais o terminador)
    if(!(strr)){ //Caso a alocacao falhe
    	printf("Erro na alocacao de memoria");
    	return NULL;
	};
    for(i=0; i<=t; i++){ //Enquanto o elemento de "str1" nao for o terminador...
        strr[i]=str1[i]; //...instancia cada elemento de "strc" como o mesmo de "str1"
    };
    return strr; //Retorna o ponteiro "strr"
};

//Comparar strings
int compara(){
    int i, t1, t2;
    for(t1=0; !(str1[t1]=='\0'); t1++){
	}; //Mede "str1"
	for(t2=0; !(str2[t2]=='\0'); t2++){
	}; //Mede "str2"
    for(i=0; i<t1||i<t2; i++){ //Le ate o ultimo caractere de "str1" ou "str2" (a mais longa)
        if(str1[i]!=str2[i]){ //Caso os caracteres sejam diferentes...
            return 0; //...retorna "falso": strings diferentes
        }
    };
    return 1; //Retorna "verdadeiro": as strings sao iguais
};

//Concatenar
char * concatena(){
    int i, j, x;
    for(i=0; !(str1[i]=='\0'); i++); //Mede str1
    for(j=0; !(str2[j]=='\0'); j++); //Mede str2
    x = i+j; //Tamanho da string concatenada
    strr = (char*)malloc(x*sizeof(char)+1); //Aloca a memoria para strc
    if(!(strr)){ //Caso a alocacao falhe
    	printf("Erro na alocacao de memoria");
    	return NULL;
	};
    for(x=0; x<i; x++){
    	strr[x]=str1[x]; //Fazer os primeiros elementos de "strc" iguais aos de "str1"
	};
	for(x=0; x<=j; x++){
    	strr[x+i]=str2[x]; //Fazer os elementos seguintes de "strc" iguais aos de "str2"
	};
    return strr; //Retorna a string concatenada
};

//Medir o tamanho de uma string
int mede(){
    int i;
    for(i=0; str1[i]; i++){
    }; //Passa por todas as posicoes da "str1", incrementando o "i" a cada posicao
    return i;
};
