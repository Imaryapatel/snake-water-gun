#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int snakewatergun(char you,char comp)
{
    if(you == comp)
    {
        return 0;
    }

    if(you == 's' && comp == 'w')
    {
        return 1;
    }
    else if(comp == 's' && you == 'w')
    {
        return -1;
    }
    if(you == 'g' && comp == 's')
    {
        return 1;
    }
    else if(comp == 'g' && you == 's')
    {
        return -1;
    }
    if(you == 'w' && comp == 'g')
    {
        return 1;
    }
    else if(comp == 'w' && you == 'g')
    {
        return -1;
    }
}

int main()
{
    char you,comp;

    srand(time(0));
    int number = rand()%100 + 1;

    if(number<33)
    {
        comp = 's';
    }

    else if(number>33 && number<66)
    {
        comp = 'w';
    }
    else
    {
        comp = 'g';
    }

    printf("choose snake water or gun\n");
    scanf("%c",&you);

    int result = snakewatergun(you,comp);

    if(result == 0)
    {
        printf("it is a draw\n");
    }
    else if(result == 1)
    {
        printf("you won\n");
    }
    else
    {
        printf("comp won\n");
    }
    printf("You chose %c and comp chose %c\n",you,comp);

    return 0;
}
