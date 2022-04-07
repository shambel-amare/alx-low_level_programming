#include <stdio.h>
#include <string.h>

int main(void){
    char str1[60]="Programming is like building a multilingual puzzle\n";
    char str2[60];
    strcpy(str2,str1);
    puts(str2);
    return (0);
}