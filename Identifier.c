#include <stdio.h>
#include <ctype.h>
int main()
{
char c[10];

    printf("Enter a string: ");
    scanf("%c", &c);

    if (isalpha(c[0]) == 0)
         printf("%c is not an identifier.", c);
    else
         printf("%c is an identifier.", c);

    return 0;
}
