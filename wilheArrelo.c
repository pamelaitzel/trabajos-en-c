
#include <stdio.h>

int main() {
    int miArreglo[100];
    int i = 0;
    //int mul = 0;
    while (i <= 101) {
        miArreglo[i] = i * 2;
        printf("2 * %d = %d\n", i,miArreglo[i]);
        i++;
        //mul+=2;
    }
  
    return 0;
}