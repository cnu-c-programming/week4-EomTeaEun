#include <stdio.h>

int main(){
    char date[] = "2026-03-24";
    int year, month, day;
    char buffer[100];

    sscanf(date, "%d-%d-%d", &year, &month, &day);
    sprintf(buffer, "%d/%d/%d", day, month, year);
    printf("%s\n", buffer);

    return 0;
}
