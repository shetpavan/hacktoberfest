#include <stdio.h>
#include<stdlib.h>
int main()
{
    int num1,num2;
    float result;
    char choice;
    printf("enter the first number");
    scanf("%d",&num1);
    printf("enter the second number");
    scanf("%d",&num2);
    printf("choose operator to perform(+,-,*,/,%,):\n");
    scanf(" %c,&choice");
    result=0
    switch(choice)
    {
        case'+':
        result=num1+num2;
        break;
        case'-';
        result=num1-num2;
        break;
        case'*';
        result=num1*num2;
        break;
        case'/':if(num2!=0)
        {
            result=(float)num1/(float)num2;
        }
        else
        {
            printf("divide by zero error\n");
        }
        break;
        case'%';
        result=num1%num2;
        break;
        default:
        printf("invalid operation\n");
    }
    printf("result:%d%c%d=%f\n",num1,choice,num2,result);
    result 0;
}
