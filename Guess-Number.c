#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int number,guess,nguess=0; 
    srand(time(0));
    number = rand()% 100 + 1;// random number between 1 to 100
    printf("the number is ");  

    do {

        printf("guess the number between 1 to 100\n ");
        scanf("%d", &guess);
        if (guess>number)
          { 
              printf("lower number please\n");
          }
         else if(guess<number){
             printf("higher number please\n");
         }
         else{
             printf(" you guess in %d attempt \n",nguess);
         } 
         nguess++;
    }while(guess!=number);


    return 0;

}