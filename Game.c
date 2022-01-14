#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int num, ran, chance;
    char choice;
    srand(time(0));
    ran = rand()%100 +1;
    do
    {
        printf("Enter a number between 1 to 100\n");
        scanf("%d", &num);
       if(num > ran)
       {
           printf("The number guessed is greater than required\n");
       } 
       else if(num < ran)
       {
           printf("The number guessed is less than required\n");
       }
       else
       {
           printf("You guessed it in %d attempts\n", chance);
       }
       chance++; 
    } while (num != ran);
    return 0;
}