#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Any Two Numbers:-");
    scanf("%d%d",&a,&b);
    printf("Before Swapping: \nA =%d\nB =%d ",a,b);
    c=a;
    a=b;
    b=c;
    
    printf("\n After Swapping: \nA =%d\nB =%d ",a,b);
    return 0;
}
