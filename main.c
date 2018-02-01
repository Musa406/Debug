#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=5,mul = 0;
    float z,w;

    for(int y=10; y>=0; y--){
        z = 50/(y-x);
        printf("%d", z);

    }

    for(int k=0; k<10; k++){
       
        mul = mul*10;
    }
    printf("%d", mul);

    return 0;
}
