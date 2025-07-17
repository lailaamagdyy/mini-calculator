
#include <stdio.h>
int main()
{
    int num1, num2, result;                             //declare 2 integers wel result
    char operation;                                     //declare arithmetic operation
    printf("pls enter any num1: ");                     //ask user to enter first num
    scanf("%d",&num1);                                  //user enters num
    printf("pls enter any num2: ");
    scanf("%d",&num2);
    printf("pls enter the operation: ");                //ask user to enter operation * / - +
    scanf(" %c",&operation);
    
    if(operation == '+'){                               //check if operation is +
        result = num1 + num2;                           
    }
     if(operation == '-'){
         result = num1 - num2;
    } 
    if(operation == '*'){
        result = num1 * num2;
    } 
    if(operation == '/'){
        result = num1 /num2;
    }
    printf("The result of num1 %c num2 is %d",operation, result); 

    
    return 0;
}
