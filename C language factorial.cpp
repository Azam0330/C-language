#include<stdio.h>
int main()
{
  int i,f=1,num; //initilize home for values
 
  printf("Enter a number: "); //shows output to ask user about number
  scanf("%d",&num); //take input from user
 
  for(i=1;i<=num;i++) //it is forloop and it is used to iterate the statements or a part of the program several times
      f=f*i;
 
  printf("Factorial of %d is: %d",num,f);
  return 0;
  
}
