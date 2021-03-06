/*Enunciado:	 Escreva	 um	 programa	 que	 simule	 o	 funcionamento	 de	 uma	 calculadora	 com	
cinco	 operações	 (+,-,*,	 /	 e	 ^).	 Esse	 programa	 deverá	 ler	 os	 operandos	 e	 o	 operador	 (no	
formato	 número operador número)	 e	 exibir	 o	 resultado	 da	 operação.	 O	 operador	 ^	
corresponde	ao	operador	“elevado	a”	(potência).	Cada	operador	deve	ser	implementado	em	
uma	função	própria,	definida	após a main()*/

#include<stdio.h>
#include<math.h>

float soma(float n1, float n2);
float sub(float n1, float n2);
float mult(float n1, float n2);
float divisao(float n1, float n2);
float elevado(float n1, float n2);

int main(){
    float num1, num2;
    char simbolo;

    scanf("%f %c %f", &num1, &simbolo, &num2);
    switch(simbolo){
        case '+':
            printf("%.3f\n", soma(num1,num2));
            break;
        case '-':
            printf("%.3f\n", sub(num1,num2));
            break;
        case '*':
            printf("%.3f\n", mult(num1,num2));
            break;
        case '/':
            printf("%.3f\n", divisao(num1,num2));
            break;
        case '^':
            printf("%.3f\n", elevado(num1,num2));
            break;
    }
  

    return 0;
}

float soma(float n1, float n2){
    return n1+n2;
}

float sub(float n1, float n2){
    return n1-n2;
}

float mult(float n1, float n2){
    return n1*n2;
}

float divisao(float n1, float n2){
    return n1/n2;
}

float elevado(float n1, float n2){
    return pow(n1, n2);
}
