#include <stdio.h>
#include <stdlib.h>

int i[10], x;
float f[10];
int main(void)
{
    printf("\t\tEntero\t\tFlotante\n\n");
    for(x=0; x<10; x++){
        printf("elemento %d:\t%d\t\t%d\n", x, &i[x],&f[x]);
    }
    return 0;
}