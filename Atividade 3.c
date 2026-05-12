#include <stdio.h>
 
void calcularHMS(){
    int seg, hora, minutos, restoSeg; 
       
    printf("Digite aqui o numero de segundos que deseja: ");
    scanf("%d", &seg);
    
    hora = seg / 3600;
    minutos = (seg % 3600) / 60;
    restoSeg = seg % 60;
    
    printf("A quantidade de segundos digitados corresponde a: Horas: %d\n, Minutos: %d\n, Segundos: %d\n", hora, minutos, restoSeg);
}
 
int isPar(int num){
    if(num % 2 == 0){
        return 1;
    } else {
        return 0;
    }
}
 
int isImpar(int num){
    if(num % 2 != 0){
        return 1;
    } else {
        return 0;
    }
}
 
float media(int num1, int num2, int num3){
    float media;
    
    media = (num1 + num2 + num3) / 3.0;
    
    return media;
}
 
int maior(int num1, int num2){
    if(num1 > num2){
        return num1;
    } else {
        return num2;
    }
}
 
int menor(int num1, int num2){
    if(num1 < num2){
        return num1;
    } else {
        return num2;
    }
}
 
int main(){
    int num1, num2, num3;
    
    calcularHMS();
    
    printf("Digite aqui um numero inteiro: ");
    scanf("%d", &num1);
    
    if(isPar(num1) == 1){
        printf("O numero %d e Par!\n", num1);
    } else {
        printf("O numero %d e Impar!\n", num1);
    }
    
    if(isImpar(num1) == 1){
        printf("O numero %d e Impar!\n", num1);
    } else {
        printf("O numero %d e Par!\n", num1);
    }
    
    printf("Digite aqui seu primeiro numero interiro: ");
    scanf("%d", &num1);
    
    printf("Digite aqui seu segundo numero inteiro: ");
    scanf("%d", &num2);
    
    printf("Digite aqui seu terceiro numero inteiro: ");
    scanf("%d", &num3);
    
    printf("Sua media e: %.2f\n", media(num1, num2, num3));
    
    printf("O maior numero e: %d\n", maior(num1, num2));
    
    printf("O menor numero e: %d\n", menor(num1, num2));
    
    system("PAUSE");	
    return 0;
}
 
