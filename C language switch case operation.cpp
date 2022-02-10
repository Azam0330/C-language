#include<stdio.h>
#include <cmath> // This body is use if we perform any mathematics operations

int main()
{
	float a,b; //if your number are in points then you need to take float instead of integer(int)
	char oper; //if you need to initilize any letter so choose char
	
	printf("Enter two operands and 1 operator: "); //It shows the output on screen
	scanf("%f %f %c",&a,&b,&oper); //it take input from user
	
	switch(oper)
	{
		case '+': //if user type + then this code perform addition
			printf("\na+b = %f",a+b);
			break;
      
		case '-': //if user type - then this code perform subtraction
			printf("\na-b = %f", a-b);
			break;
      
		case '/': //if user type / then this code perform division
     			printf("\na/b = %f", a/b);
			break;
      
		default: //if user type any other operation it will show the output that the operation is invalid
			printf("\nInvalid operator!");
			break;
	}
	
	return 0;
}
