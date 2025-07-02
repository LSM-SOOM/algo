#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int answer = 0;    
   
     //합과 곱 구하기
    int sum = 0;
    int multiply = 1;
    for (int i=0; i<num_list_len; i++)
    {
        sum = sum + num_list[i];
        multiply = multiply * num_list[i];
    }
           
    if( multiply < sum*sum)
        answer = 1;
    else
        answer = 0;        
    
    return answer;
}
      
//          //합 구하기       
//     int sum=0;
//     for (int i=0; i<num_list_len; i++)
//     {
//         sum = sum + num_list[i];
//     }
        
//     //곱 구하기
//     int multiply=0;
//     for (int j=0; j<num_list_len; j++)
//     {
//         multiply = multiply  * num_list[j];
//     }
        
        