#include<stdio.h>

int main()
{
  int a, b; //initilize homes for values

  printf("Please enter the value for a:"); //shows output to take First input
  scanf("%d", &a); //take 1st input from user

  printf("\nPlease enter the value for b:"); //shows output to take 2nd input
  scanf("%d", &b); //take 2nd input from user 
  
  //Now we apply If Else Condition to verify what the values actually is 

  if (a > b) //if user 1st input is bigger than 2nd input then this contion apply 
  {
    printf("\n a is greater than b");
  }
  else if (b > a) //if user 2nd input is bigger than 1st input then this contion apply 
  {
    printf("\n b is greater than a");
  }
  else //if both value are equal then this condition will apply
  {
    printf("\n Both are equal");
  }
}
