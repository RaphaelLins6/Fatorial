#include <stdio.h>

int n;
int fat = 1;

main(){

scanf("%d", &n);

if(n<0)
printf("Digite apenas numeros positivos.");

for(n; n>1; n--){
    fat = fat * n;
}

printf("O fatorial e: %d", fat);
}