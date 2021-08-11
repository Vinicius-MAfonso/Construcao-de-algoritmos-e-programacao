#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
void main(){
setlocale(LC_ALL, "Portuguese");
/* 
Tipos de variaveis(int,float,double,string,char,bool)
int --> 0-1-2
float --> 0,67 - 13,56
double --> 0,67 - 13,56
string --> "Alciomar"
char --> "SP","M"
bool -- > TRUE,FALSE,0,1
*/  
    int num;
    
    printf("Digite um numero: ");
    scanf("%d",&num);
    
    printf("O número digitada foi %d",num);
}