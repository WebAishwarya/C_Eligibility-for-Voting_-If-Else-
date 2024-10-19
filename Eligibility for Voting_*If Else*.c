/*
    Program to Determine Eligibility for Voting
*/

#include<stdio.h>

int main()
{
    printf("Program to Determine Eligibility for Voting by using *If Else*\n\n");
    
    int age;
    printf("Enter your age : ");
    scanf("%d", &age);
    printf("\n");
    
    if(age >= 18)
    {
        printf("You are eligible for voting!");
    }
    else
    {
        printf("You are not eligible for voting! \n* Caution : You must be at least 18 years old");
    }
    
    return 0;
}
