#include <stdio.h>

int fun_alpha_num(char c)
{
    if((c>='0'&&c<='9')||(c>='A'&&c<='Z')||(c>='a'&&c<='z'))
        return 1;
    else
        return 0;
}

int main()
{
    char ch;
    scanf(" %c",&ch);

    if(fun_alpha_num(ch))
        printf("Alphanumeric\n");
    else
        printf("Not Alphanumeric\n");

    return 0;
}
