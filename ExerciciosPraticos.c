#include <stdlib.h>
#include <stdio.h>
#include <math.h>
void f1(), f2(), f3(), f4(), f5(), f6(), f7(), f8(), f9();
int main() {
    int n = 1;
    while(n!=0) {
        printf("Os numeros corresponde as opcoes:\n");
        printf("1 - Fatorial\n");
        printf("2 - Numero Primo\n");
        printf("3 - Numeros Primos\n");
        printf("4 - Potencia\n");
        printf("5 - Raiz\n");
        printf("6 - Ano Bissexto\n");
        printf("7 - Media de 2 Notas\n");
        printf("8 - Media Ponderada de 3 Notas\n");
        printf("9 - Matricula em Hexadecimal\n");
        printf("0 - Encerra o programa\n");
        printf("\n");
        printf("Informe um numero que corresponde a uma opcao.\n");
        scanf("%d", &n);
        switch(n) {
            case 0:
                printf("Fim do programa.\n");
                printf("\n");
                return;
            case 1:
                f1();
                break;
            case 2:
                f2();
                break;
            case 3:
                f3();
                break;
            case 4:
                f4();
                break;
            case 5:
                f5();
                break;
            case 6:
                f6();
                break;
            case 7:
                f7();          	
                break;
            case 8:
                f8();
                break;
            case 9:
                f9();
                break;
            default:
                printf("Opcao invalida.\n");
        }
    }
    return 0;
};

void f1() {
	printf("Opcao 1: Fatorial\n\n");
    int a = 1, num1, fat;
    printf("Informe um numero inteiro positivo: ");
    scanf("%d", &num1);
	if (num1>0) {
		fat = num1;
       while(a!=num1) {
    		fat = fat*a;
    		a++;
		};
		printf("O fatorial de %d e %d\n\n", num1, fat);
	}
    else
    printf("Numero invalido.");
	};
	
void f2(){
		printf("Opcao 2: Numero Primo\n\n");
		int num2, sinal1 = 0, i = 1;
		printf("Informe um numero inteiro positivo maior que 1.\n");
		scanf("%d", &num2);
		while (i<=(num2/2.0)){
			if ((num2%i)==0)
				sinal1++;
			i++;
		};
		if (sinal1==1)
			printf("%d e um numero primo.\n\n", num2);
		else
			printf("%d nao e um numero primo.\n\n", num2);
	};
	
void f3(){
	    printf("Opcao 3: Numeros Primos\n\n");
	    int r = 0, num3, sinal2, j;
		while(r!=1){
			sinal2 = 0;
			j = 1;
			printf("Informe um numero inteiro positivo maior que 1.\n(Digitar 1 volta ao menu anterior)\n");
			scanf("%d", &num3);
			if (num3!=1){
				while (j<=(num3/2)){
					if ((num3%j)==0)
						sinal2++;
					j++;
					};
				if (sinal2==1)
					printf("%d e um numero primo.\n\n", num3);
				else
					printf("%d nao e um numero primo.\n\n", num3);
			}
			else 
				r = 1;			
		};
	};
	
void f4(){
		printf("Opcao 4: Potencia\n\n");
		int exp1;
		float base1, res1;
		printf("Informe a base da potencia.\n");
		scanf("%f", &base1);
		printf("Informe o expoente da potencia.\n");
		scanf("%d", &exp1);
		res1 = pow (base1, exp1);
		printf("%f elevado a %d e igual a %E\n\n", base1, exp1, res1);		
	};
	
void f5(){
		printf("Opcao 5: Raiz\n\n");
		int raiz;
		float base2, res2, exp2;
		printf("Informe a base da raiz.\n");
		scanf("%f", &base2);
		printf("Informe a ordem da raiz.\n");
		scanf("%d", &raiz);
		exp2 = 1.0/raiz;
		res2 = pow (base2, exp2);
		switch (raiz) {
		case 2:
			printf("A raiz quadrada de %f e igual a %E\n\n", base2, res2);
			break;
		case 3:
			printf("A raiz cubica de %f e igual a %E\n\n", base2, res2);
			break;
		default:
			printf("A raiz %d-esima de %f e igual a %E\n\n", raiz, base2, res2);
		};
	};
	
void f6(){
		printf("Opcao 6: Ano Bissexto\n");
		int ano;
        printf("Informe um ano: ");
        scanf("%d", &ano);
        if((ano%4)==0)
            printf("%d foi/e/sera ano bissexto.\n\n", ano);
        else
            printf("%d nao foi/nao e/nao sera ano bissexto.\n\n", ano);
	};
	
void f7(){
        printf("Opcao 7: Media entre duas notas\n");
        float nota1, nota2, media;
        printf("Informe a primeira nota: ");
        scanf("%d", &nota1);
        printf("\nInforme a segunda nota: ");
        scanf("%d", &nota2);
        if((0.0<=nota1<=10.0)&&(0.0<=nota2<=10.0)){
            media = (nota1+nota2)*0.5;
            printf("\nA media das notas e %3.1f\n\n", media);
			}               
        else{
            printf("Valor invalido de uma ou mais notas.\n\n");
			};
	};
	
void f8(){
	    printf("Opcao 8: Media Ponderada de 3 notas\n");
	    int notaa, notab, notac;
	    float mediap;
        printf("Informe a primeira nota: ");
        scanf ("%d", &notaa);
    	printf("Informe a segunda nota: ");
        scanf ("%d", &notab);
        printf("Informe a terceira nota: ");
        scanf ("%d", &notac);
        mediap = (notaa + notab + 2.0*notac)*0.25;
    	printf("Media das notas: %3.1f\n", mediap);
        if(mediap >= 60.0)
            printf("Aprovado por media\n\n");
        else
            printf("Reprovado por media\n\n");
	};
	
void f9(){
	 	printf("Opcao 9: Matricula em Hexadecimal\n");
	 	int matdec, mathex;
        printf("Informe seu numero de matricula: ");
        scanf ("%d", &matdec);
        mathex = matdec;
        printf("\n%d Em hexadecimal: %X\n\n", matdec, mathex);
	}
