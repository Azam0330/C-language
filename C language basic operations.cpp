#include <stdio.h>

int main()
{
    int num1,num2; //initilize the home for number
    
    printf("Enter the first number: "); //It shows output on screen
    scanf("%d",&num1); //it take user input
    
    
    printf("Enter the second number: "); //It shows output on screen
    scanf("%d",&num2); //it take user input
    
    
    printf("\nAddition of %d + %d",num1,num2); //It show the addition of two numbers on output screen
    printf(" = %d",(num1+num2 )); //It show the result of addition of two numbers on output screen
    
    
    printf("\nSubstraction of %d - %d",num1,num2); //It show the subtraction of two numbers on output screen  
    printf(" = %d",(num1-num2)); //It show the result of subtraction of two numbers on output screen
    
    
    printf("\nMultiplication of %d X %d",num1,num2); //It show the multiplication of two numbers on output screen
    printf(" = %d",(num1*num2 )); //It show the result of multiplication of two numbers on output screen
    
    
    printf("\nDivision of  %d / %d",num1,num2); //It show the division of two numbers on output screen
    printf(" = %d",(num1/num2 )); //It show the result of division of two numbers on output screen


return 0;
}
