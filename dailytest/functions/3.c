#include <stdio.h>

void swap(int a, int b)
{
    int temp=a;
    a=b;
    b=temp;

    printf("After swapping: %d %d\n", a, b);
}

int main()
{
    int x,y;
    printf("enter the two values :");
    scanf("%d %d",&x,&y);
    swap(x,y);
}
