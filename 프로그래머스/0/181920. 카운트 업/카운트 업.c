#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int start_num, int end_num) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int size = end_num-start_num+1;    
    int* answer = (int*)malloc(size*sizeof(int));
    int i=0;
    
    //start_num, +1, +2,,,, end_num
        
    for (int i=0; i<end_num-start_num+1; i++)
    {        
       answer[i] = start_num+i;
    }
           
    return answer;
}

// answer[0] = start_num
// answer[1] = start_num+1
// answer[2] = start_num+2
//     -
//     -
// answer[end_num-1] = end_num