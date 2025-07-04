#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;    
//     10 = 2 4 6 8 10
//     7 = 6 4 2
        
//         n이하 짝수를 구해보자
//         짝수면 10 - 2 = sum
//               8 - 2 = sum
//               6- 2 = sum
//               4- 2 = sum        
//         홀수면 9
//               9 - 1 = sum = 8
//               8 - 2 =sum
//               6 - 2 =sum
//               4 - 2 =sum
//               2 - 2 = 0        
    
    if(n % 2 == 0) 
    { 
       for (int i=2; i<=n; i=i+2)
       {
           answer = answer + i;
       }
    }
    else
    {
        for (int i=2; i<=n-1; i=i+2)
        {
            answer  = answer + i;
        }
    }      
    
    return answer;
}