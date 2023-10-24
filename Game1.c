#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int cpu()
{
    srand(time(NULL));
    return 1+rand()%2;
}
int main()
{
    char *name;
    int i =0;
    int choice;
    int Cpu;
   static int b; //cpu point
   static int a; //player point
    printf("Welcome to stone paper sisor game\n");
    printf("The rules of the game are:\n");
    printf("Press 1 for Stone.\n");
    printf("Press 2 for paper.\n");
    printf("Press 3 for Sisor.\n");
    printf("This game will have three round. The one who scores the most will win the game.\n");
    printf("Let's start the game.\n");
    printf("Please enter your name\n");
    scanf("%s",name);
    while (i<3)
    {
        printf("Round %d\n",i+1);
        printf("%s turns\n",name);
        printf("Enter your choice\n");
        scanf("%d",&choice);
        printf("Cpu Turn\n");
        Cpu = cpu();
        printf("The cpu entered %d\n",Cpu);
        if(choice == 1 && Cpu == 2)
        {
            printf("You lose\n");
            b++;
        }else if (choice == 1 && Cpu == 3)
        {
            printf("You got 1 point\n");
            a++;
        }else if (choice == 1 && Cpu == 1)
        {
            printf("It is a draw\n");
        }else if (choice == 2 && Cpu == 1)
        {
            printf("You got 1 point\n");
            a++;
        }else if (choice == 2 && Cpu == 2)
        {
            printf("It is a draw\n");
        }else if (choice == 2 && Cpu == 3)
        {
            printf("You lose\n");
            b++;
        }else if (choice == 3 && Cpu == 1)
        {
            printf("You lose\n");
            b++;
        }else if (choice == 3 && Cpu == 2)
        {
            printf("You got 1 point\n");
            a++;
        }else if (choice == 3 && Cpu == 3)
        {
            printf("It is a draw\n");
        }
        i=i+1;
     }
     printf("Final Result:\n ---------------------------------------------------------------------\n");
     if (a>b)
     {
        printf("You won the game\n");
     }
     else
     {
        printf("You Lose\n Game Over");
     }
     
    
}