#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    long int random, input;
    printf("Enter 4 Digit Password: ");
    scanf("%ld", &input);
    srand(time(0));
    while(1)
    {
        random = rand() % 9999;
        printf("%ld\n", random);
        if(random == input){
            printf("Password Cracked: %ld", random);
            exit(0);
        }
    }
    return 0;
}