#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=5,sum = 0;
    float z,w;

    for(int y=10; y>=0; y--){
        z = 50/(y-x);
        printf("%d", z);

    }

    for(int k=0; k<10; k++){
       
        sum = sum +10;
    }
    printf("%d", sum);

    return 0;
}
