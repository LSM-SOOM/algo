#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len = strlen(my_string);
    char* answer = (char*)malloc(len+1);
    
    for (int i=0; i<len; i++)
    {
//         my_string[0]  = j .
//         my_string[1]
//         my_string[2]
//         my_string[3]            
//             출력은
//             my_string[3]
//             my_string[2]
//             my_string[1]
//             my_string[0]            
//     출력을 제일 뒤부터 하려면 i를 0부터 했던 걸. 마지막 i부터 출력되도록
    
        answer[i] = my_string[len - 1 - i];
    }
    answer[len] = '\0';
    
    return answer;
    
//      int len = strlen(my_string);
//     char* answer = (char*)malloc(len + 1);  // +1 for null terminator

//     for (int i = 0; i < len; i++) {
//         answer[i] = my_string[len - 1 - i];  // reverse copy
//     }

//     answer[len] = '\0';  // null 문자 추가
//     return answer;
}
