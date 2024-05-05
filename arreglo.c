#include <stdio.h>

int main() {
    int a[]={3,5,6,8,4,7,8,5,3,1};
    int b[]={3,4,6,8,9,1,2,3,0,9};

   // a[3]mod (b[2]/2)
   printf("el resultado de a[3] mod (b[2]/2) es: %d \n" , a[3]%(b[2]/2));
   // b[a[1]]-a[9]
   printf("el resultado de b[a[1]]-a[9] es: %d \n" , b[a[1]] - a[9]);
   // a[0] + a[1 + 2]
   printf("el resultado de a[0] + a[1+2] es: %d \n", a[0] + a[1 + 2])
   // a[5] + b[5]
   printf("el resultado de a[5] + b[5] es: %d \n" , a[5] + b[5])
    //(a[3]/b[2])/2
    printf("el resultado de a ")

  
    return 0;
}