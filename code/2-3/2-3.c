#include <stdio.h>
#include <string.h>

int main(){
    char a[64] = "Hello";
    char b[64] = "world";
    char c[128];

    strcpy(c, a);
    printf("length of a: %zu\n", strlen(a));
    printf("a: %s, c: %s\n", a, c);

    strcat(c, " ");
    strcat(c, b);
    printf("c: %s\n", c);

    printf("strcmp(Hello, Hello) = %d\n", strcmp(a, "Hello"));
    printf("strcmp(Hello, world) = %d\n", strcmp(a, b));

    return 0;
}
