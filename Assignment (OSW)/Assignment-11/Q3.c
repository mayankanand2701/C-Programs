#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char str[] = "*ITER:IBCS;SOA:Pot*Hot:";
    char *token;
    token = strtok(str, ":;*");
    while (token != NULL)
    {
        printf("Token=%s\n", token);
        token = strtok(NULL, ":;*");
    }
    return 0;
}

// Output :
// Token=ITER
// Token=IBCS
// Token=SOA
// Token=Pot
// Token=Hot

// Conclusion : Delimeters byte at the starting and end are ignored