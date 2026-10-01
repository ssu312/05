#include <stdio.h>

int main(void)
{
    //변수선언
    int count = 0;          //숫자 문자 개수를 세는 변수
    char c;             //문자를 저장하는 변수

    printf("Input a string: ");
    //판단부분 while문
    while ( ( c = getchar() ) != '\n' ) //getchar():글자를 하나 입력 받는 함수,, scanf,printf처럼 stdio.h안에 들어 있는 라이브러리
    {   if (c >= '0' && c <= '9')
            count++;

    }
    printf("The number of digits is %d", count);

    return 0;
}