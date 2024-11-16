#include<stdio.h>

int main (){
char cidade [4] ="Rj";
char nome [20] = "Rio de Janeiro";
int populacao = 500000;
float area = 9092.63;
double pib = 21920.30;
int turismo = 8;

printf ("codigo da cidade: %s\n", cidade);
printf ("nome: %s\n", nome);
printf ("populacao da cidade: %d\n", populacao);
printf ("area %.2f\n", area);
printf ("pib: %.2f\n", pib);
printf ("ponto turistico: %d\n,", turismo);

 /*
    printf ("%formato1, %formato2, %formato3", variavel 1, variavel 2, variavel 3)
    %d: imprime um inteiro no formato decimal.
    %i: Equivalente a %d.
    %f imprime um numero de ponto flutuante no formato padrão.
    %e: imprime um numero de ponto flutuante na anotacão cientifica.
    %c: imprime um único caractere.
    %s: imprime uma cadeia (string) de caracteres.
    */
}