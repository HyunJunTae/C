#include <stdio.h>
#include <string.h>



int main(void) {

    char str[10] = "onggibot";
    char ch = 'i';
    printf("%s\n", strchr(str, ch));


    char needle[5] = "ggi";
    printf("%s\n", strstr(str, needle));

    printf("%s\n", str);
    strcpy(str, needle);
    printf("%s  ", str);
    printf("%c\n", str[5]);
    //strcpy는 말 그대로 copy하는 것. 원래 있던 배열 싹 지우고 넣는게 아니라, ggi\0 이렇게 4개를 앞에서부터 넣는 것. 뒤는 그대로 둠.

    strcpy(str, "onggibot");
    strncpy(str, needle, 1);
    printf("%s\n", str);
    // strncpy도 똑같은데, 얘는 널문자 안가져감.

    strcpy(str, "onggibot");
    strcpy(needle, "ggi");
    strncpy(str, needle, 5);
    printf("%s  ", str);
    printf("%c\n", str[5]);
    // 근데 strncpy도 소스문자 길이만큼 카피하면, 원래 소스문자에 있던 널문자까지 카피되어서 출력하면 저렇게 됨. 뒤에는 남아있음.

    strcpy(str, "onggibot");
    strncpy(needle, str, 4);
    printf("%s %d\n", needle, strlen(needle));
    // 4로 하면 괜찮음. 널 문자가 안들어가면, 다른 주소에서 가져오거나 하는 등 오류가 생김.


    printf("3333333333333\n");
    strcpy(str, "onggibot");
    char aaa[14];
    strncpy(aaa, str, 5);
    aaa[5] = '\0';
    printf("%s\n", aaa);
    // 그냥 선언만 해두고 strncpy 하면 안됨. 널문자가 없어서. 따로 지정해줘야함.

    // strcpy(str, "onggibot");
    // strcpy(str, 'i');
    // printf("%s\n", str);
    // 그냥 문자 하나는 안됨. 문자열로 해야함.

    
    strcpy(str, "onggibot");
    strcpy(needle, "ggi");
    strcat(str, needle);
    printf("%s\n", str);

    strcpy(str, "onggibot");
    strncat(str, needle, 2);
    printf("%s\n", str);
    // strcat, strncat 은 둘 다 끝날 때 널문자 넣어줌.

    char needle2[10] = "oni";
    strcpy(str, "onggibot");
    printf("%d\n", strspn(str, needle));   // onggibot / ggi
    printf("%d\n", strspn(str, needle2));  // onggibot / oni
    // strspn : 소스문자 안에 없는 문자 처음 나온 위치 출력. 정수로 출력. 앞에서부터 봐서. 아예 없으면 0 출력.


    printf("%d\n", strcspn(str, needle));
    printf("%d\n", strcspn(str, needle2));
    // strcspn : 소스 문자 안에 있는 문자 처음 나온 위치 출력. 정수로 출력. 앞에서부터 봐서. 아예 없으면 0 출력.
    // strspn, strcspn 둘 다 0부터 시작. 0번자리, 1번자리 이런 식으로 봄.

    printf("%d\n", strcmp(needle, str));
    // 왼쪽이 더 크면 양수(1), 오른쪽이 더 크면 음수(-1), 같으면 0.

    return 0;
}