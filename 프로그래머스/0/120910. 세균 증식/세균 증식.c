#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int t) {
    int answer = 0;
    
    //i번째, t시간 후, n마리
    //0번째 t=1 => 1*n
    //1번째 t=2 => 2*n
    //2번째 t=3 => 2*2*n
    //3번째 t=4 => 2*2*2*n = 2*(i-1번째의 n값)
    //4번째 t=5 pow(2,(t-1))*n

        answer = pow(2,t)*n;
    
    return answer;
}