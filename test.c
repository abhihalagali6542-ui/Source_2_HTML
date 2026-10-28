#include <stdio.h>
#include <string.h>

// Single line comment
/* Multi line
   comment */

int main(void)
{
    int a = 10, i = 0;
    char ch = 'A';
    char space = ' ';
    char newline = '\n';
    char quote = '\'';

    float value = 12.5;

    if(a == 10 && a != 0)
    {
        printf("Hello World\n");
        printf("Value = %f", value);
    }

    for(i = 0; i < 5; i++)
    {
        a = a + i;
    }

    if(a >= 10 || a <= 100)
    {
        a++;
    }

    return 0;
}