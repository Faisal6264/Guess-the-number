#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void guess(int *random);
int main() {
    int num,random;
    guess(&random);
    
    while(1){  //we can also use this condition while(num!=random)
        printf("Enter number(0 to 100):-");
        scanf("%d",&num);
        if(num>random){
            printf("Too high\n");
        }
        else if(num<random){
            printf("Too low\n");
        }
        else{
            printf("Correct number is guessed.");
            break;
        }
    }
    
    return 0;
}
void guess(int *random){
    srand(time(0));
    *random=rand()%100;
}