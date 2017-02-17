#include <stdio.h>

void intercambio(int *a, int *b);
int main(){

    int x, y;
    x = 22;
    y = 57;

    printf("\n %d - %d", x, y);
    intercambio(&x, &y);
    printf("\n %d - %d", x, y);
    printf("\n\n");



return(0);
}
void intercambio(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

}
