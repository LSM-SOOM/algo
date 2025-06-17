#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b, bool flag) {
    int answer = 0;
    
    if (flag == true)
        return a+b;
    if (flag == false)
        return a-b;
    
    
    return answer;
}