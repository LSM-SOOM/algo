#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int* solution(int num_list[], size_t num_list_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(answer)*2);    
    int even_count=0;
    int odd_count=0;
    
    // even-짝수 개수 / odd-홀수 개수
    // 배열에서 짝수를 알아내서 개수를 담을 변수 even
    // 배열에서 홀수를 알아내서 개수를 담을 변수 odd
    //     짝수를 확인하는 건 num_list[i] % 2 == 0
    //     홀수를 확인하는 건 num_list[i] % 2 != 0
    // 짝수, 홀수의 개수를 확인하려면, 짝수로 확인한 것 담아 개수를 센다.
    //     개수를 담는다.
                
    for(int i=0; i<num_list_len; i++)
    {
        if(num_list[i] % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }
        // even_count=sizeof(even);
        // odd_count=sizeof(odd);
    //answer = [even_count, odd_count];
    answer[0] = even_count;
    answer[1] = odd_count;
    
    return answer;
}