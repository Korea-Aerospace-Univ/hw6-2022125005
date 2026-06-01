#include <stdio.h>

int main(void)
{
    char arr[10];
    char *p, *q;

    char max_char = 0;
    int max_count = 0;

    // 문자 10개 입력받음
    // p++ 로 포인터가 다음번 요소 자리 기리키고 거기다가 값 넣도록
    for (p = arr; p < arr + 10; p++) {
        scanf(" %c", p);
    }

    // 각 문자마다 전체 배열 훑으면서 개수 세기
    for (p = arr; p < arr + 10; p++) {
        int count = 0;

        for (q = arr; q < arr + 10; q++) {
            // 만약 동일한 게 있으면 count++
            if (*p == *q) {
                count++;
            }
        }

        // 최댓값 갱신
        // 값 같으면 원래 있던 거 유지
        if (count > max_count) {
            max_count = count;
            max_char = *p;
        }
    }

    printf("%c %d\n", max_char, max_count);

    return 0;
}
