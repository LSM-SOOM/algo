#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b) {
    int answer = 0;
    
     //ab -> string 
    char *ab[10]; //ab 선언을 포인터로 했는데 그래서 못바꿔
    sprintf(ab, "%d%d", a, b);
    
    //ab2 = int
    int ab2 = 2*a*b;
            
    //atoi(ab) -> int    
    int ab1 = atoi(ab);
        
    if (ab1 >= ab2)
        return answer = ab1;
    else
        return answer = ab2;   
}
