#include <stdio.h>

int main(){
    float a[100];
    int i;

    for(i = 0; i < 100; i++){           /** Apresentar os indices com valores abaixo de 10. **/
        scanf("%f", &a[i]);
        if(a[i] <= 10){
            printf("A[%d] = %.1f\n", i, a[i]);
        }
    }

    return 0;
}
