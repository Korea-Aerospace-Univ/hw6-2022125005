#include <stdio.h>

int main(void)
{
    int N;
    // 배열 두 개 선언
    int a[20] = {};
    int b[20] = {};

    // p 는 배열 a 의 첫 번째 원소 주소 가리키는 것으로 시작 
    int *p = a;
    // q 는 배열 b 의 첫 번째 원소 주소 가리키는 것으로 시작
    int *q = b;

    // 몇 개 입력받을 건지
    scanf("%d", &N);

    // 첫 번째 포인터는 배열 a 전용
    // i 숫자만큼 p 는 다음 자리 원소 주소 가리킴. 거기다가 값 저장.
    for (int i = 0; i < N; i++)
        scanf("%d", p + i);

    // 두 번째 포인터는 배열 b 전용
    // i 숫자만큼 q 는 다음 자리 원소 주소 가리킴. 거기다가 값 저장.
    for (int i = 0; i < N; i++)
        scanf("%d", q + i);

    for (int i = 0; i < N; i++)
        printf(" %d", *(p + i) + *(q + N - 1 - i));
        // a 에서] 앞에서부터, b 에서는 뒤에서부터 역방향으로 합산한 결과를 출력

    return 0;
}
