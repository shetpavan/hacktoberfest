#include <stdio.h>
#include <stdlib.h>
int main()
{
    float num,s;
    int i;
    printf("enter a number to which square root ro be found:\n");
    scanf ("%f",&num);
    if(num==1)
    {
        printf("squareroot of 1 is 1\n");
    }
    if(num<1)
    {
        printf("invalid number\n");
    }
    else if(num>1)
    {
        s=num/2;
        for (i=0;i<num;i++)
        s=(s+(num/s))/2;
        printf("squareroot of a number %.2f is %.2f\n",num,s);
    }
    return 0;
}
