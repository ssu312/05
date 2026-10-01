#include <stdio.h>

int main(void)
{
    //변수선언
    int num;

    //정수 입력받음
    printf("Input an integer : "); //한글 넣으면 간혹 깨지기도 함.
    scanf("%d", &num); //%i 가능

    //판단부분 if-else
    if (num > 0)                  //첫번째는 쉬운거
        printf("Absolute value : %d\n", num);
    
    else //음수또는 0
        printf("Absolute value : %d\n", -num);
    

    return 0;
}