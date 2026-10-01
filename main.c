#include <stdio.h>

int main(void)
{
    //변수선언
    int sum = 0;          //더하기 결과를 저장하는 int,, 0으로 초기화하기!!!!
    int num;  
    int i = 0;          

    //정수 입력받기
    printf("Input an integer:");
    scanf("%d", &num);


    //판단부분 for문
    for (i=0 ; i<num ; i++)
    {
        sum += (i+1); //1부터 더하지길 원하므로 i+1
    }

    //결과 출력
    printf("The result is %d", sum);

    return 0;
}