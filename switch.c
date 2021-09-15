// Simple 2 number calculator using 2 numbers from user and switch statement for operand

#include<stdio.h>

int main(){

    int num1, num2,time = 1000;
    float ans;
    char op;

    printf("Enter number 1 for the calculator\n");
    scanf("%d",&num1);

    printf("Enter in the operand symbol: *, /, +, -\n");
    scanf(" %c", &op); // had to put a leading space here to get scanf to work, need something better for getting a char from user

    printf("Enter number 2 for the calculator\n");
    scanf("%d",&num2);

    switch(op){ // switch statement to actually perform the operation

        case '+':
        ans = num1 + num2;
        break;

        case '-':
        ans = num1 - num2;
        break;

        case '/': // this doesnt work i think becuase num1 and num2 are ints and its not carrying the remainder over to the float ans variable
        ans = num1 / num2;
        break;

        case '*':
        ans = num1 * num2;
        break;
    }

    
    for(time = 0; time < 1000; time++)
        printf("CALCULATOR COMPUTING.....                             \n");

        
        printf("\n\n\n");
        printf("OK That was hard, the answer is: %d %c %d = %f\n\n",num1,op,num2,ans);

    return(0);
}