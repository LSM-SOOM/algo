#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* ineq, const char* eq, int n, int m) {
    int answer = 0;

    if(strcmp(ineq, "<")==0 && strcmp(eq, "!")==0) //n<m
    {
        if(n<m) answer = 1;
        else answer = 0;
    }        
    if (strcmp(ineq, "<")==0 && strcmp(eq, "=")==0) //n<=m
    {
        if(n<=m) answer = 1;
        else answer = 0;
    }        
    if (strcmp(ineq, ">")==0 && strcmp(eq, "!")==0) //n>m
    {
        if(n>m) answer = 1;
        else answer = 0;        
    }        
    if (strcmp(ineq, ">")==0 && strcmp(eq, "=")==0) //n>=m  
    {
        if(n>=m) answer = 1;
        else answer = 0;        
    }    
        
    return answer;
}