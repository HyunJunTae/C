#include <stdio.h>
#include <string.h>


int main(int argc, char *argv[]) {
    char str[12];
    strcpy(str, "Hi everyone");
    str[2] = '\0';
    printf("str = %s, len = %zu\n", str, strlen(str));



    char buf[9];
    strcpy(buf, "Potatoes");
    printf("%s\n", buf);
    char *word = buf + 2;
    strncpy(word, "mat", 3); // strcpy로 하면 널문자까지 들어가버림.
    printf("%s\n", buf);

    return 0;
}