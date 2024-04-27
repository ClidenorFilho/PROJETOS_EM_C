/*Fazer um programa para ler uma duração de tempo em segundos, daí imprimir na tela esta duração no
formato horas:minutos:segundos. */
#include <stdio.h>
int main(){
    int segundos_entrada, horas, minutos, segundos;
    scanf("%d", &segundos_entrada);
    horas = segundos_entrada / 3600;
    minutos = (segundos_entrada % 3600) / 60;
    segundos = segundos_entrada % 60;
    printf("%.02d:%.02d:%.02d", horas, minutos, segundos);
}