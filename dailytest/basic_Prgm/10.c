#include <stdio.h>
int main () {
	int a,b,c;
	printf("enter a: \n");
	scanf("%d",&a);

	printf("Enter b: \n");
	scanf("%d",&b);

         printf("Enter c: \n");
	scanf("%d",&c);

	if(a>=b && a>=c)
	printf("%d \n",a);
	else if(b>=a && b>=c)
	printf("%d \n",b);
	else 
	printf("the largest number is: %d \n",c);

}
