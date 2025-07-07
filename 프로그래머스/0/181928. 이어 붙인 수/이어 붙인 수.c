#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int answer = 0;
    
    char odd_str[11]="";
    char even_str[11]="";
    
    for(int i=0; i<num_list_len;i++)
    {
        if(num_list[i]%2==0)
        {
            char buf[2]; //한자리 숫자와 null 문자
            sprintf(buf, "%d", num_list[i]); 
            strcat(even_str, buf);
        }
            
        else
        {
            char buf[2];
            sprintf(buf, "%d", num_list[i]);
            strcat(odd_str, buf);
        }
    }  
    //문자열을 정수로 변환
    int odd_num = atoi(odd_str);
    int even_num = atoi(even_str);
    answer = odd_num+even_num;
    
    return answer;
}
