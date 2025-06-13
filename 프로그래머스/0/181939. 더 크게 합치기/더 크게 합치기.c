#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(int a, int b) {
    int answer = 0;
    
    char str_a[10], str_b[10];   //10,000까지니까 9,999=4자+1자(널)=최대 5자
    sprintf(str_a, "%d", a);
    sprintf(str_b, "%d", b);    

    char ab[10]; //a 4자, b4 4자 = 4+4 =8자, 8자+1자(널)=총 9자
    char ba[10]; //위랑 맞추려면 10자 해도 됨
      
    strcpy(ab, str_a); strcat(ab, str_b); //ab
    strcpy(ba, str_b); strcat(ba, str_a); //ba
    
    //sprintf(ab, "%d%d", a, b); //ab
    //sprintf(ba, "%d%d", b, a); //ba
    
    int ab_num, ba_num;
    ab_num=atoi(ab);
    ba_num=atoi(ba);
    
    if ( ab_num >= ba_num )
        answer=ab_num;
    else
        answer=ba_num; 

        
    return answer;
}