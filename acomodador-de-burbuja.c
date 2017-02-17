#include <stdio.h>

int main(){

    int a[20] = {1,3,2,4,5,1,45,-327,6,98,45,-8,-2,-3,12,34,-45,-78,-67,100};
    int i,j,temp;

        for(i=0;i<20;i++){
                for(j=i+1;j<20;j++){
                    if(a[i]>a[j]){
                        temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                    }
            }
    }
    for(i=0;i<20;i++){
        printf("%d\n", a[i]);
    }

return(0);
}
