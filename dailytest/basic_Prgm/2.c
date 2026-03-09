#include <stdio.h>
int main() {
	int i,prev=0;

	for(i=1;i<=10;i++){
		printf("current:%d previous:%d sum:%d\n",i,prev,i+prev);
		prev=i;
	}
	return 0;
}
