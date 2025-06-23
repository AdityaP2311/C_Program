// C Program to Check Number is Even/Odd Using If-else 

#include <stdio.h>

int main()
{
    int n;
    printf("Enter Any Number:");
    scanf("%d",&n);
    if(n%2==0)
        printf("Even Number");
    else
        printf("Odd Number");
    return 0;
}

// C Program to Check Number is Positive/Negative Using Bitwise ( &)Operator
/*
#include <stdio.h>

int main()
{
    int n;
    printf("Enter Any Number:");
    scanf("%d",&n);
    if(n&1)
        printf("Odd Number");
    else
        printf("Even Number");
}
*/
