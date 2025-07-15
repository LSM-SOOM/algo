#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int k) {
    int answer = 0;
    
    //양꼬치 1인분 12,000
    //음료수 2000원
    //양꼬치 n인분, 음료수 k개
    
    answer = 12000*n + 2000*(k-(n/10)) ;
    
    return answer;
}