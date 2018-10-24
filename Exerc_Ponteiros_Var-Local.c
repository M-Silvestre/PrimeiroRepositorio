/******************************************************************************
Exercicio de Ponteiros
*******************************************************************************/


#include <stdio.h>

int menu(), compara(char * str1, char * str2), mede(char * str1); 
//"menu()" nao recebe parametro e retorna um inteiro
//"compara()" recebe duas strings e retorna um inteiro
//"mede()" recebe uma string e retorna um inteiro
char *copia(char *str), *concatena(char * str1, char * str2); 
//"copia()" deve receber uma string e  retornar ponteiro de caractere
//"concatena()" deve receber 2 strings e  retornar ponteiro de caractere

int main()
{   
	int n = 1;
	char str1[21], str2[21], *str3; //Strings de entrada (tamanho fixo) e string resultado (tamanho alocado dinamicamente)
	while(n){
        n = menu(); //Recebe a escolha do usuario
        switch(n){
            case 1:
            	printf("Informe a string (maximo 20 caracteres):\n");
            	scanf("%20s", &str1);
            	printf("A string original e: %s\n", str1);
            	str3 = copia(str1); //"str3" recebe o valor de "copia()" (endereco de "strcp")
                printf("A copia da string e: %s\n\n", str3);
                free(str3); //Libera o espaco de memoria de "str3"
                break;
            case 2:
            	printf("Informe a primeira palavra (maximo 20 caracteres):\n");
    			scanf("%20s", &str1);
    			printf("Informe a segunda palavra (maximo 20 caracteres):\n");
    			scanf("%20s", &str2);
                if (compara(str1, str2)){ //Se compara() retornar o inteiro 1
                	printf("As palavras sao diferentes.\n\n");
				}
				else{ //Se compara() retornar o inteiro 0
					printf("As palavras sao iguais.\n\n");
				};
                break;
            case 3:
            	printf("Informe a primeira string (maximo 20 caracteres):\n");
    			scanf("%s", &str1);
    			printf("Informe a segunda string (maximo 20 caracteres):\n");
    			scanf("%s", &str2);
    			str3 = concatena(str1, str2); //"str3" recebe o valor de "concatena()" (endereco de "strcc"
            	printf("Concatenando as strings, temos: %s\n\n", str3);
            	free(str3); //Libera o espaco de memoria de "strr3
                break;
            case 4:
            	printf("Informe a string(maximo 20 caracteres):\n");
    			scanf("%s", &str1);
                printf("O tamanho da string e %d\n\n", mede(str1));
                break;
            case 0:
            	printf("\tPrograma encerrado.");
                return 0;
        }
    }
    return 0;
};

int menu(){
	int opcao;
    printf("Escolha uma opcao abaixo: (0 a 4)\n");
    printf("\t1-Copiar uma string\n");
    printf("\t2-Comparar duas strings\n");
    printf("\t3-Concatenar duas strings\n");
    printf("\t4-Medir o tamanho de uma string\n");
    printf("\t0-Encerrar o programa\n");
    printf("\tOpcao: ");
    scanf("%d", &opcao);
    return opcao;
    };

//Copiar strings
char * copia(char * str){
    int i, t;
    char *strcp; //String concatenada
    for(t=0; !(str[t]=='\0'); t++){
	}; //Mede "str1"
    strcp = (char *)malloc(i*sizeof(char)+1); //Aloca para "strc" espaco do tamanho de "str1" (Mais o terminador)
    if(!(strcp)){ //Caso a alocacao falhe
    	printf("Erro na alocacao de memoria");
    	return NULL;
	};
    for(i=0; i<=t; i++){ //Enquanto o elemento de "str1" nao for o terminador...
        strcp[i]=str[i]; //...instancia cada elemento de "strc" como o mesmo de "str1"
    };
    return strcp; //Retorna o ponteiro "strr"
};

//Comparar strings
int compara(char * str1, char * str2){
    int i, t1, t2;
    for(t1=0; !(str1[t1]=='\0'); t1++){
	}; //Mede "str1"
	for(t2=0; !(str2[t2]=='\0'); t2++){
	}; //Mede "str2"
	if(t1!=t2) return 1;
    for(i=0; i<t1; i++){ //Le ate o ultimo caractere de "str1" ou "str2" (a mais longa)
        if(str1[i]!=str2[i]){ //Caso os caracteres sejam diferentes...
            return 1; //...retorno diferente de zero: strings diferentes
        }
    };
    return 0; //Retorno zero: as strings sao iguais
};

//Concatenar
char * concatena(char * str1, char * str2){
    int i, j, x;
    char * strcc; //String concatenada
    for(i=0; !(str1[i]=='\0'); i++); //Mede str1
    for(j=0; !(str2[j]=='\0'); j++); //Mede str2
    x = i+j; //Tamanho da string concatenada
    strcc = (char*)malloc(x*sizeof(char)+1); //Aloca a memoria para strc
    if(!(strcc)){ //Caso a alocacao falhe
    	printf("Erro na alocacao de memoria");
    	return NULL;
	};
    for(x=0; x<i; x++){
    	strcc[x]=str1[x]; //Fazer os primeiros elementos de "strc" iguais aos de "str1"
	};
	for(x=0; x<=j; x++){
    	strcc[x+i]=str2[x]; //Fazer os elementos seguintes de "strc" iguais aos de "str2"
	};
    return strcc; //Retorna a string concatenada
};

//Medir o tamanho de uma string
int mede(char * str){
    int i;
    for(i=0; str[i]; i++){
    }; //Passa por todas as posicoes da "str1", incrementando o "i" a cada posicao
    return i;
}
