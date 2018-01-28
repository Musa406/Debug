#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=5;
    float z,w;

    for(int y=10; y>=0; y--){
        z = 50/(y-x);
        printf("%d", z);

    }

    for(int k=0; k<10; k++){
        w = 50/(x-k);
        printf("%d", w);
    }


    return 0;
}
