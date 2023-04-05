#include<stdio.h>
#include<math.h>

int main(void){

    int i,n=0;
    
    printf("digite um numero:");
    scanf("%d", &i);

    for(i; n<5; i++){

        if(i % 3==0){
            printf("%d\n", i);
            n++;

        }
    }
return 0;
}