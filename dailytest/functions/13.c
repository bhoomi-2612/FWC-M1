#include <stdio.h>

int multiply(int a,int b)
{
    int i,sum=0;
    for(i=1;i<=b;i++)
        sum=sum+a;
    return sum;
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d\n",multiply(a,b));
    return 0;
}
