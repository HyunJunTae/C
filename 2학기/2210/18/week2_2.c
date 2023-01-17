#include <stdio.h>
#include <string.h>

int main(void) {

    char* stringArray[5];

    stringArray[0] = "Hello, ";
    stringArray[1] = "World!";
    stringArray[2] = "?!?";

    printf("%s%s%s\n", stringArray[0], stringArray[1], stringArray[2]);



    char chars[8];
    strcpy(chars, "racecar");

    char *str1;
    str1 = chars;
    printf("%s\n", str1);

    char *str2;
    str2 = chars + 4;
    printf("%s\n", str2);

    str2[0] = 'f';
    printf("%s %s %s\n", chars, str1, str2);

    return 0;
}