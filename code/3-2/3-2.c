#include <stdio.h>

int swap_endian(int *x){
    unsigned char *src = (unsigned char *)x;
    int result;
    unsigned char *dst = (unsigned char *)&result;

    dst[0] = src[3];
    dst[1] = src[2];
    dst[2] = src[1];
    dst[3] = src[0];

    return result;
}

int main(){
    int x = 0x12345678;

    printf("%x\n", x);
    x = swap_endian(&x);
    printf("%x\n", x);

    return 0;
}